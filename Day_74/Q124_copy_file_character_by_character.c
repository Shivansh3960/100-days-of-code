#include <stdio.h>

int main(void) {
    char source_name[256], destination_name[256];
    int ch;

    printf("Source filename: ");
    if (scanf("%255s", source_name) != 1) return 1;

    printf("Destination filename: ");
    if (scanf("%255s", destination_name) != 1) return 1;

    FILE *source = fopen(source_name, "r");
    if (source == NULL) {
        perror("Could not open source file");
        return 1;
    }

    FILE *destination = fopen(destination_name, "w");
    if (destination == NULL) {
        perror("Could not open destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            perror("Error writing destination file");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    fclose(source);
    fclose(destination);
    printf("File copied successfully to %s\n", destination_name);
    return 0;
}
