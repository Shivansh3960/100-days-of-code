/* Q28: Product of even numbers from 1 to n
   Standalone C solution. Compile with: gcc Q28_product_of_even_numbers_from_1_to_n.c -o program
*/
#include <stdio.h>
int main(void) {
    int n; long long p=1; scanf("%d", &n);
    for (int i=2; i<=n; i+=2) p *= i;
    printf("%lld", p);
    return 0;
}
