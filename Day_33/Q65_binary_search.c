/* Q65: Binary search
   Standalone C solution. Compile with: gcc Q65_binary_search.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000],x,l=0,r,ans=-1; scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x); r=n-1;
    while(l<=r){int mid=l+(r-l)/2;if(a[mid]==x){ans=mid;break;}if(a[mid]<x)l=mid+1;else r=mid-1;}
    if(ans<0) printf("-1"); else printf("Found at index %d",ans);
    return 0;
}
