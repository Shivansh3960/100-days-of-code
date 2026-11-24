/* Q37: LCM
   Standalone C solution. Compile with: gcc Q37_lcm.c -o program
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long a,b,x,y; scanf("%lld %lld", &a, &b); x=llabs(a); y=llabs(b);
    long long p=x, q=y;
    while(q) { long long r=p%q; p=q; q=r; }
    if(x==0 || y==0) printf("0");
    else printf("%lld", (x/p)*y);
    return 0;
}
