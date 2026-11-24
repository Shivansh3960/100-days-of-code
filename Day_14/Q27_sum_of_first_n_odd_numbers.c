/* Q27: Sum of first n odd numbers
   Standalone C solution. Compile with: gcc Q27_sum_of_first_n_odd_numbers.c -o program
*/
#include <stdio.h>
int main(void) {
    int n; long long sum=0; scanf("%d", &n);
    for (int i=1; i<=n; i++) sum += 2LL*i-1;
    printf("%lld", sum);
    return 0;
}
