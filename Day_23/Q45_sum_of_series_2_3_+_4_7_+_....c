/* Q45: Sum of series 2/3 + 4/7 + ...
   Standalone C solution. Compile with: gcc Q45_sum_of_series_2_3_+_4_7_+_....c -o program
*/
#include <stdio.h>
int main(void) {
    int n; double sum=0; scanf("%d", &n);
    for(int i=1;i<=n;i++) sum += (double)(2*i)/(4*i-1);
    printf("Approximate sum: %.2f", sum);
    return 0;
}
