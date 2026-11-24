/* Q85: Reverse a string
   Standalone C solution. Compile with: gcc Q85_reverse_a_string.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000]; fgets(s,sizeof(s),stdin); int n=strcspn(s,"\r\n");
    for(int i=n-1;i>=0;i--)putchar(s[i]);
    return 0;
}
