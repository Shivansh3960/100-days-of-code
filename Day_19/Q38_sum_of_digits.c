/* Q38: Sum of digits
   Standalone C solution. Compile with: gcc Q38_sum_of_digits.c -o program
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n; int sum=0; scanf("%lld", &n); n=llabs(n);
    while(n) { sum+=(int)(n%10); n/=10; }
    printf("%d", sum);
    return 0;
}
