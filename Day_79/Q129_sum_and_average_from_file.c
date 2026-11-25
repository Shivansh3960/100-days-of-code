#include <stdio.h>

int main(void) {
    char filename[256];
    int number;
    long long sum = 0;
    long count = 0;

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }

    printf("Sum = %lld\nAverage = %.2f\n",
           sum, (double)sum / count);
    return 0;
}
