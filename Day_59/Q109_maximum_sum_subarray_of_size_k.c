/* Q109: Maximum sum subarray of size k
   Standalone C solution. Compile with: gcc Q109_maximum_sum_subarray_of_size_k.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[10000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);
    if(k<=0||k>n){printf("Invalid k");return 0;}
    long long sum=0;for(int i=0;i<k;i++)sum+=a[i];long long best=sum;
    for(int i=k;i<n;i++){sum+=a[i]-a[i-k];if(sum>best)best=sum;}
    printf("%lld",best);return 0;
}
