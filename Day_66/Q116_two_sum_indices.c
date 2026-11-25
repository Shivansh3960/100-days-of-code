#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, target;
    if (scanf("%d", &n) != 1 || n < 2) return 1;

    int *nums = malloc((size_t)n * sizeof(int));
    if (!nums) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    if (scanf("%d", &target) != 1) {
        free(nums);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                free(nums);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    free(nums);
    return 0;
}
