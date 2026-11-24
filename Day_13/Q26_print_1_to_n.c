/* Q26: Print 1 to n
   Standalone C solution. Compile with: gcc Q26_print_1_to_n.c -o program
*/
#include <stdio.h>
int main(void) {
    int n; scanf("%d", &n);
    for (int i=1; i<=n; i++) printf("%d%s", i, i==n ? "" : " ");
    return 0;
}
