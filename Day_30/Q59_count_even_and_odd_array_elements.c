/* Q59: Count even and odd array elements
   Standalone C solution. Compile with: gcc Q59_count_even_and_odd_array_elements.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,x,e=0,o=0; scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&x);if(x%2==0)e++;else o++;}
    printf("Even=%d, Odd=%d",e,o);
    return 0;
}
