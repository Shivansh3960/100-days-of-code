/* Q79: Diagonal traversal
   Standalone C solution. Compile with: gcc Q79_diagonal_traversal.c -o program
*/
#include <stdio.h>
int main(void) {
    int r,c,a[100][100],first=1; scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int s=0;s<r+c-1;s++){
        int lo=s-(c-1); if(lo<0)lo=0;
        int hi=s<r-1?s:r-1;
        if(s%2==0){for(int i=hi;i>=lo;i--){int j=s-i;printf("%s%d",first?"":" ",a[i][j]);first=0;}}
        else {for(int i=lo;i<=hi;i++){int j=s-i;printf("%s%d",first?"":" ",a[i][j]);first=0;}}
    }
    return 0;
}
