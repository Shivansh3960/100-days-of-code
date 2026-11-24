/* Q58: Maximum and minimum in array
   Standalone C solution. Compile with: gcc Q58_maximum_and_minimum_in_array.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,x,mn,mx; scanf("%d",&n); scanf("%d",&x); mn=mx=x;
    for(int i=1;i<n;i++){scanf("%d",&x);if(x<mn)mn=x;if(x>mx)mx=x;}
    printf("Max=%d, Min=%d",mx,mn);
    return 0;
}
