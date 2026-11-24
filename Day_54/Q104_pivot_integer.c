/* Q104: Pivot integer
   Standalone C solution. Compile with: gcc Q104_pivot_integer.c -o program
*/
#include <stdio.h>
#include <math.h>
int main(void) {
    long long n;scanf("%lld",&n);
    long long total=n*(n+1)/2;
    long long x=(long long)sqrt((double)total);
    while((x+1)*(x+1)<=total)x++;
    while(x*x>total)x--;
    printf(x*x==total? "%lld":"-1",x);
    return 0;
}
