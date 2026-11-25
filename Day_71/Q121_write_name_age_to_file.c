#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    printf("Enter name: ");
    if (scanf(" %99[^\n]", name) != 1) return 1;

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 1;

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        perror("Could not create info.txt");
        return 1;
    }

    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
