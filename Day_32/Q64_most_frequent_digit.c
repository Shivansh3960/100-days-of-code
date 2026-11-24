/* Q64: Most frequent digit
   Standalone C solution. Compile with: gcc Q64_most_frequent_digit.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[1000]; int count[10]={0}, best=0; scanf("%999s",s);
    for(int i=0;s[i];i++) if(s[i]>='0'&&s[i]<='9') count[s[i]-'0']++;
    for(int d=1;d<10;d++) if(count[d]>count[best]) best=d;
    printf("%d",best);
    return 0;
}
