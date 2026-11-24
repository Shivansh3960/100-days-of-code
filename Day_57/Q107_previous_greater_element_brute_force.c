/* Q107: Previous greater element brute force
   Standalone C solution. Compile with: gcc Q107_previous_greater_element_brute_force.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[10000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){int ans=-1;for(int j=i-1;j>=0;j--)if(a[j]>a[i]){ans=a[j];break;}printf("%s%d",i?", ":"",ans);}
    return 0;
}
