/* Q70: Rotate array right by k
   Standalone C solution. Compile with: gcc Q70_rotate_array_right_by_k.c -o program
*/
#include <stdio.h>
void reverse(int a[],int l,int r){while(l<r){int t=a[l];a[l++]=a[r];a[r--]=t;}}
int main(void) {
    int n,a[1000],k; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    if(n>0){k%=n;if(k<0)k+=n;reverse(a,0,n-1);reverse(a,0,k-1);reverse(a,k,n-1);}
    for(int i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"":" ");
    return 0;
}
