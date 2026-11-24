/* Q102: Ceiling index in sorted array
   Standalone C solution. Compile with: gcc Q102_ceiling_index_in_sorted_array.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000],x;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);
    int l=0,r=n-1,ans=-1;
    while(l<=r){int m=l+(r-l)/2;if(a[m]>=x){ans=m;r=m-1;}else l=m+1;}
    printf("%d",ans);return 0;
}
