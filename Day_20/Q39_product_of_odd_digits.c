/* Q39: Product of odd digits
   Standalone C solution. Compile with: gcc Q39_product_of_odd_digits.c -o program
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n; int product=1; scanf("%lld", &n); n=llabs(n);
    while(n) { int d=n%10; if(d%2) product*=d; n/=10; }
    printf("%d", product);
    return 0;
}
