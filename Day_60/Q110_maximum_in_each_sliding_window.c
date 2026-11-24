/* Q110: Maximum in each sliding window
   Standalone C solution. Compile with: gcc Q110_maximum_in_each_sliding_window.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[10000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);
    if(k<=0||k>n)return 0;
    for(int i=0;i<=n-k;i++){int mx=a[i];for(int j=i+1;j<i+k;j++)if(a[j]>mx)mx=a[j];printf("%s%d",i?" ":"",mx);}
    return 0;
}
