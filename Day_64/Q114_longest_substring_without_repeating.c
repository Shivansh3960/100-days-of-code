#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10005];
    int last_seen[256];
    if (scanf("%10004s", s) != 1) return 1;

    for (int i = 0; i < 256; i++) last_seen[i] = -1;

    int start = 0, best = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (last_seen[ch] >= start) start = last_seen[ch] + 1;
        last_seen[ch] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }

    printf("%d\n", best);
    return 0;
}
