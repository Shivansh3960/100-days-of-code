#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        perror("Could not open input.txt");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        perror("Could not create output.txt");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (fputc(toupper((unsigned char)ch), output) == EOF) {
            perror("Error writing output.txt");
            fclose(input);
            fclose(output);
            return 1;
        }
    }

    fclose(input);
    fclose(output);
    printf("Converted text written to output.txt\n");
    return 0;
}
