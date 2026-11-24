/* Q108: Product of array except self
   Standalone C solution. Compile with: gcc Q108_product_of_array_except_self.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[10000];long long out[10000],prefix=1;scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){out[i]=prefix;prefix*=a[i];}
    long long suffix=1;for(int i=n-1;i>=0;i--){out[i]*=suffix;suffix*=a[i];}
    printf("[");for(int i=0;i<n;i++)printf("%s%lld",i?",":"",out[i]);printf("]");
    return 0;
}
