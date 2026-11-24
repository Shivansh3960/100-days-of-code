/* Q44: Sum of series 1 + 3/4 + 5/6 ...
   Standalone C solution. Compile with: gcc Q44_sum_of_series_1_+_3_4_+_5_6_....c -o program
*/
#include <stdio.h>
int main(void) {
    int n; double sum=0; scanf("%d", &n);
    for(int i=1;i<=n;i++) sum += (double)(2*i-1)/(2*i);
    printf("Approximate sum: %.1f", sum);
    return 0;
}
