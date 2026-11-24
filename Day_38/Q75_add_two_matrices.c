/* Q75: Add two matrices
   Standalone C solution. Compile with: gcc Q75_add_two_matrices.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100],b[100][100]; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    int r2,c2; scanf("%d%d",&r2,&c2);
    for(int i=0;i<r2;i++)for(int j=0;j<c2;j++)scanf("%d",&b[i][j]);
    if(r!=r2||c!=c2){printf("Invalid dimensions");return 0;}
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d%s",a[i][j]+b[i][j],j==c-1?"":" ");if(i<r-1)printf("\n");}
    return 0;
}
