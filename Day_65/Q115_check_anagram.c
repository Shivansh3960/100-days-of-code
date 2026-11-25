#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10005], t[10005];
    int frequency[26] = {0};

    if (scanf("%10004s %10004s", s, t) != 2) return 1;
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < 'a' || s[i] > 'z' || t[i] < 'a' || t[i] > 'z') {
            printf("Not Anagram\n");
            return 0;
        }
        frequency[s[i] - 'a']++;
        frequency[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
