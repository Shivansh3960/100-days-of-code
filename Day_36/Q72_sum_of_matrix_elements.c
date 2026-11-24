/* Q72: Sum of matrix elements
   Standalone C solution. Compile with: gcc Q72_sum_of_matrix_elements.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,x; long long sum=0; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++){scanf("%d",&x);sum+=x;}
    printf("%lld",sum);
    return 0;
}
