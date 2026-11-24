/* Q74: Transpose of matrix
   Standalone C solution. Compile with: gcc Q74_transpose_of_matrix.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100]; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int j=0;j<c;j++){for(int i=0;i<r;i++)printf("%d%s",a[i][j],i==r-1?"":" ");if(j<c-1)printf("\n");}
    return 0;
}
