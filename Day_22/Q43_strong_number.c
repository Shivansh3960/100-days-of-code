/* Q43: Strong number
   Standalone C solution. Compile with: gcc Q43_strong_number.c -o program
*/
#include <stdio.h>
int main(void) {
    int n,t,sum=0; scanf("%d", &n); t=n;
    do {
        int d=t%10, f=1;
        for(int i=2;i<=d;i++) f*=i;
        sum+=f; t/=10;
    } while(t);
    printf(sum==n && n>=0 ? "Strong number" : "Not strong number");
    return 0;
}
