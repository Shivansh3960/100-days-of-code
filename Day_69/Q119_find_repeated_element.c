#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    /*
       This solution assumes every value is in the range 0..n,
       as in the supplied examples. The first repeated value is printed.
    */
    int *seen = calloc((size_t)n + 1, sizeof(int));
    if (!seen) return 1;

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            free(seen);
            return 1;
        }
        if (value < 0 || value > n) {
            fprintf(stderr, "Values must be between 0 and n.\n");
            free(seen);
            return 1;
        }
        if (seen[value]) {
            repeated = value;
            break;
        }
        seen[value] = 1;
    }

    printf("%d\n", repeated);
    free(seen);
    return 0;
}
