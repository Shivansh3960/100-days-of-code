/* Q86: String palindrome
   Standalone C solution. Compile with: gcc Q86_string_palindrome.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000]; fgets(s,sizeof(s),stdin); int n=strcspn(s,"\r\n"),ok=1;
    for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])ok=0;
    printf(ok?"Palindrome":"Not palindrome");
    return 0;
}
