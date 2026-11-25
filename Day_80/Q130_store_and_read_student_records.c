#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main(void) {
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid number of students.\n");
        return 1;
    }

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Could not create students.txt");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        struct Student student;

        printf("Enter name, roll number and marks for student %d: ", i + 1);
        if (scanf("%99s %d %f", student.name,
                  &student.roll, &student.marks) != 3) {
            fprintf(stderr, "Invalid student data.\n");
            fclose(file);
            return 1;
        }

        fprintf(file, "%s %d %.2f\n",
                student.name, student.roll, student.marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Could not read students.txt");
        return 1;
    }

    struct Student student;
    while (fscanf(file, "%99s %d %f",
                  student.name, &student.roll, &student.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               student.name, student.roll, student.marks);
    }

    fclose(file);
    return 0;
}
