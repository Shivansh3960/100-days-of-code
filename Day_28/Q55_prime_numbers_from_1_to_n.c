/* Q55: Prime numbers from 1 to n
   Standalone C solution. Compile with: gcc Q55_prime_numbers_from_1_to_n.c -o program
*/
#include <stdio.h>
int main(void) {
    int n, first=1; scanf("%d", &n);
    for(int x=2;x<=n;x++) {
        int prime=1;
        for(int d=2;d<=x/d;d++) if(x%d==0) { prime=0; break; }
        if(prime) { if(!first) printf(" "); printf("%d",x); first=0; }
    }
    return 0;
}
