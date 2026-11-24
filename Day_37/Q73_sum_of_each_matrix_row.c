/* Q73: Sum of each matrix row
   Standalone C solution. Compile with: gcc Q73_sum_of_each_matrix_row.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100]; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++){int sum=0;for(int j=0;j<c;j++)sum+=a[i][j];printf("%d%s",sum,i==r-1?"":" ");}
    return 0;
}
