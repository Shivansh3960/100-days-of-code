/* Q68: Delete at given zero-based index
   Standalone C solution. Compile with: gcc Q68_delete_at_given_zero-based_index.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000],pos; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&pos);
    if(pos<0||pos>=n) return 0;
    for(int i=pos;i<n-1;i++) a[i]=a[i+1];
    for(int i=0;i<n-1;i++) printf("%d%s",a[i],i==n-2?"":" ");
    return 0;
}
