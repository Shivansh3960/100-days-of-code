/* Q78: Main diagonal sum
   Standalone C solution. Compile with: gcc Q78_main_diagonal_sum.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100],sum=0; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<r&&i<c;i++)sum+=a[i][i];
    printf("%d",sum);
    return 0;
}
