/* Q36: HCF or GCD
   Standalone C solution. Compile with: gcc Q36_hcf_or_gcd.c -o program
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a,b; scanf("%d %d", &a, &b);
    a=abs(a); b=abs(b);
    while(b) { int r=a%b; a=b; b=r; }
    printf("%d", a);
    return 0;
}
