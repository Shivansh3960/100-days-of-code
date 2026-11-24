/* Q76: Check symmetric matrix
   Standalone C solution. Compile with: gcc Q76_check_symmetric_matrix.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100],ok=1; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    if(r!=c) ok=0;
    else for(int i=0;i<r;i++)for(int j=i+1;j<c;j++)if(a[i][j]!=a[j][i])ok=0;
    printf(ok?"True":"False");
    return 0;
}
