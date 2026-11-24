/* Q67: Insert at given zero-based position
   Standalone C solution. Compile with: gcc Q67_insert_at_given_zero-based_position.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1001],pos,x; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d %d",&pos,&x);
    if(pos<0||pos>n) return 0;
    for(int i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=x;
    for(int i=0;i<=n;i++) printf("%d%s",a[i],i==n?"":" ");
    return 0;
}
