/* Q63: Merge two arrays
   Standalone C solution. Compile with: gcc Q63_merge_two_arrays.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,m,a[2000],x; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d",&a[n+i]);
    for(int i=0;i<n+m;i++) printf("%d%s",a[i],i==n+m-1?"":" ");
    return 0;
}
