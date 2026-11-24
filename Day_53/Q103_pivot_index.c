/* Q103: Pivot index
   Standalone C solution. Compile with: gcc Q103_pivot_index.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[10000];long long total=0,left=0;scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&a[i]);total+=a[i];}
    for(int i=0;i<n;i++){if(left==total-left-a[i]){printf("%d",i);return 0;}left+=a[i];}
    printf("-1");return 0;
}
