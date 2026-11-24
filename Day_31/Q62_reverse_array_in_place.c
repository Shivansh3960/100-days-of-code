/* Q62: Reverse array in place
   Standalone C solution. Compile with: gcc Q62_reverse_array_in_place.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000]; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0,j=n-1;i<j;i++,j--){int t=a[i];a[i]=a[j];a[j]=t;}
    for(int i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"":" ");
    return 0;
}
