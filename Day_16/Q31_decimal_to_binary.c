/* Q31: Decimal to binary
   Standalone C solution. Compile with: gcc Q31_decimal_to_binary.c -o program
*/
#include <stdio.h>
int main(void) {
    unsigned int n; int bits[sizeof(unsigned int)*8], k=0;
    scanf("%u", &n);
    if (n==0) { printf("0"); return 0; }
    while (n>0) { bits[k++] = n%2; n/=2; }
    for (int i=k-1; i>=0; i--) printf("%d", bits[i]);
    return 0;
}
