#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    int ch, in_word = 0;
    long characters = 0, words = 0, lines = 0;
    int any_character = 0, last_character = '\n';

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        any_character = 1;
        last_character = ch;

        if (ch == '\n') lines++;

        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    /* Count a final non-empty line even if it has no trailing newline. */
    if (any_character && last_character != '\n') lines++;

    printf("Characters: %ld\nWords: %ld\nLines: %ld\n",
           characters, words, lines);

    fclose(file);
    return 0;
}
