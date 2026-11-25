#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, n;
    if (scanf("%d", &m) != 1 || m < 0) return 1;
    int *a = malloc((size_t)(m ? m : 1) * sizeof(int));
    if (!a) return 1;
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    if (scanf("%d", &n) != 1 || n < 0) {
        free(a);
        return 1;
    }
    int *b = malloc((size_t)(n ? n : 1) * sizeof(int));
    if (!b) {
        free(a);
        return 1;
    }
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int i = 0, j = 0, first = 1;
    while (i < m || j < n) {
        int value;
        if (j >= n || (i < m && a[i] <= b[j])) value = a[i++];
        else value = b[j++];

        if (!first) printf(" ");
        printf("%d", value);
        first = 0;
    }
    printf("\n");

    free(a);
    free(b);
    return 0;
}
