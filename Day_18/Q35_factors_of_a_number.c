/* Q35: Factors of a number
   Standalone C solution. Compile with: gcc Q35_factors_of_a_number.c -o program
*/
#include <stdio.h>
int main(void) {
    int n, first=1; scanf("%d", &n);
    for(int i=1; i<=n; i++) if(n%i==0) {
        if(!first) printf(" ");
        printf("%d", i); first=0;
    }
    return 0;
}
