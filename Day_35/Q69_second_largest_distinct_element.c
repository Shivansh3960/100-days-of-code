/* Q69: Second largest distinct element
   Standalone C solution. Compile with: gcc Q69_second_largest_distinct_element.c -o program
*/
#include <stdio.h>
#include <limits.h>
int main(void) {
    int n,x; long long first=LLONG_MIN, second=LLONG_MIN; scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&x);if(x>first){second=first;first=x;}else if(x<first&&x>second)second=x;}
    if(second==LLONG_MIN) printf("-1"); else printf("%lld",second);
    return 0;
}
