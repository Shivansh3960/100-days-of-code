/* Q42: Perfect number
   Standalone C solution. Compile with: gcc Q42_perfect_number.c -o program
*/
#include <stdio.h>
int main(void) {
    int n, sum=0; scanf("%d", &n);
    for(int i=1; i<=n/2; i++) if(n%i==0) sum+=i;
    printf(n>0 && sum==n ? "Perfect number" : "Not perfect number");
    return 0;
}
