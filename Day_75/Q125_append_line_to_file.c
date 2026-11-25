#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256];
    char text[1000];

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) return 1;

    /* Consume the newline left by scanf. */
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 1;

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Could not open file in append mode");
        return 1;
    }

    /* Ensure the appended text begins on a new line if needed. */
    if (fseek(file, 0, SEEK_END) == 0 && ftell(file) > 0) {
        /* Inspect the final character using a separate read handle. */
        FILE *check = fopen(filename, "r");
        if (check != NULL) {
            if (fseek(check, -1, SEEK_END) == 0) {
                int last = fgetc(check);
                if (last != '\n') fputc('\n', file);
            }
            fclose(check);
        }
    }

    fputs(text, file);
    if (strchr(text, '\n') == NULL) fputc('\n', file);

    fclose(file);
    printf("File updated successfully with appended text.\n");
    return 0;
}
