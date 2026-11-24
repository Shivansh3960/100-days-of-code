/* Q57: Sum of array elements
   Standalone C solution. Compile with: gcc Q57_sum_of_array_elements.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[1000]; long long sum=0; scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}
    printf("%lld",sum);
    return 0;
}
