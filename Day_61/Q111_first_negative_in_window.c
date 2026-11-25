#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = malloc((size_t)n * sizeof(int));
    int *deque = malloc((size_t)n * sizeof(int));
    if (!arr || !deque) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(arr); free(deque);
        return 1;
    }

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        fprintf(stderr, "Invalid window size.\n");
        free(arr); free(deque);
        return 1;
    }

    int front = 0, rear = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) deque[rear++] = i;

        if (i >= k - 1) {
            while (front < rear && deque[front] <= i - k)
                front++;

            if (front < rear) printf("%d", arr[deque[front]]);
            else printf("0");

            if (i < n - 1) printf(" ");
        }
    }

    printf("\n");
    free(arr);
    free(deque);
    return 0;
}
