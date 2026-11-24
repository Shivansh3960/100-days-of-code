/* Q30: Reverse a number
   Standalone C solution. Compile with: gcc Q30_reverse_a_number.c -o program
*/
#include <stdio.h>
int main(void) {
    long long n, r=0; scanf("%lld", &n);
    while (n != 0) { r = r*10 + n%10; n/=10; }
    printf("%lld", r);
    return 0;
}
