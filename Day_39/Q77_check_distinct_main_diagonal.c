/* Q77: Check distinct main diagonal
   Standalone C solution. Compile with: gcc Q77_check_distinct_main_diagonal.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100],ok=1; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    int d=r<c?r:c;
    for(int i=0;i<d;i++)for(int j=i+1;j<d;j++)if(a[i][i]==a[j][j])ok=0;
    printf(ok?"True":"False");
    return 0;
}
