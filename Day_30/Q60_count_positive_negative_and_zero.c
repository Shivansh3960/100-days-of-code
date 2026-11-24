/* Q60: Count positive negative and zero
   Standalone C solution. Compile with: gcc Q60_count_positive_negative_and_zero.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,x,p=0,neg=0,z=0; scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&x);if(x>0)p++;else if(x<0)neg++;else z++;}
    printf("Positive=%d, Negative=%d, Zero=%d",p,neg,z);
    return 0;
}
