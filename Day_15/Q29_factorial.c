/* Q29: Factorial
   Standalone C solution. Compile with: gcc Q29_factorial.c -o program
*/
#include <stdio.h>
int main(void) {
    int n; unsigned long long f=1; scanf("%d", &n);
    if (n<0) { printf("Undefined"); return 0; }
    for (int i=2; i<=n; i++) f *= i;
    printf("%llu", f);
    return 0;
}
