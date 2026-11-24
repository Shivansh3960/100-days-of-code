/* Q34: Prime number check
   Standalone C solution. Compile with: gcc Q34_prime_number_check.c -o program
*/
#include <stdio.h>
int main(void) {
    int n, prime=1; scanf("%d", &n);
    if(n<2) prime=0;
    for(int i=2; i<=n/i; i++) if(n%i==0) { prime=0; break; }
    printf(prime ? "Prime" : "Not prime");
    return 0;
}
