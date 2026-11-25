#include <stdio.h>

int main(void) {
    char line[256];
    FILE *file = fopen("info.txt", "r");

    if (file == NULL) {
        perror("Could not open info.txt");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
