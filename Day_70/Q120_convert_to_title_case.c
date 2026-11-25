#include <stdio.h>
#include <ctype.h>

int main(void) {
    char text[1000];

    if (!fgets(text, sizeof(text), stdin)) return 1;

    int beginning_of_word = 1;
    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];

        if (isspace(ch)) {
            beginning_of_word = 1;
        } else if (beginning_of_word) {
            text[i] = (char)toupper(ch);
            beginning_of_word = 0;
        }
    }

    printf("%s", text);
    return 0;
}
