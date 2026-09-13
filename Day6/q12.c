#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("%d is Zero\n", num);
        } else {
            printf("%d is Positive\n", num);
        }
    } else {
        printf("%d is Negative\n", num);
    }

    return 0;
}