/* Q33: Armstrong number
   Standalone C solution. Compile with: gcc Q33_armstrong_number.c -o program
*/
#include <stdio.h>
int main(void) {
    int n, t, digits=0; long long sum=0; scanf("%d", &n);
    if (n<0) { printf("Not Armstrong"); return 0; }
    t=n; do { digits++; t/=10; } while(t);
    t=n;
    do {
        int d=t%10; long long p=1;
        for(int i=0;i<digits;i++) p*=d;
        sum+=p; t/=10;
    } while(t);
    printf(sum==n ? "Armstrong" : "Not Armstrong");
    return 0;
}
