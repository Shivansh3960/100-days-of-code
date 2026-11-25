#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    int ch;
    long vowels = 0, consonants = 0;

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            int lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %ld\nConsonants: %ld\n", vowels, consonants);
    fclose(file);
    return 0;
}
