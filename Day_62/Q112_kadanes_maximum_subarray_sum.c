#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    long long value;
    if (scanf("%lld", &value) != 1) return 1;

    long long current = value, maximum = value;
    for (int i = 1; i < n; i++) {
        if (scanf("%lld", &value) != 1) return 1;
        current = (value > current + value) ? value : current + value;
        if (current > maximum) maximum = current;
    }

    printf("%lld\n", maximum);
    return 0;
}
