/* Q105: Majority element
   Standalone C solution. Compile with: gcc Q105_majority_element.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,a[10000],candidate=0,count=0;scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&a[i]);if(count==0){candidate=a[i];count=1;}else if(a[i]==candidate)count++;else count--;}
    count=0;for(int i=0;i<n;i++)if(a[i]==candidate)count++;
    if(count>n/2)printf("%d",candidate);else printf("-1");
    return 0;
}
