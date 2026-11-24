/* Q61: Linear search
   Standalone C solution. Compile with: gcc Q61_linear_search.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000],x,idx=-1; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++) if(a[i]==x){idx=i;break;}
    if(idx==-1) printf("-1"); else printf("Found at index %d",idx);
    return 0;
}
