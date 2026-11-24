/* Q71: Read and print matrix
   Standalone C solution. Compile with: gcc Q71_read_and_print_matrix.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100]; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d%s",a[i][j],j==c-1?"":" ");if(i<r-1)printf("\n");}
    return 0;
}
