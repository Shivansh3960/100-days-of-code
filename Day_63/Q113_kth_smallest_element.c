#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = malloc((size_t)n * sizeof(int));
    if (!arr) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        fprintf(stderr, "Invalid value of k.\n");
        free(arr);
        return 1;
    }

    qsort(arr, (size_t)n, sizeof(int), compare_ints);
    printf("%d\n", arr[k - 1]);
    free(arr);
    return 0;
}
