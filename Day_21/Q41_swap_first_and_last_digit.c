/* Q41: Swap first and last digit
   Standalone C solution. Compile with: gcc Q41_swap_first_and_last_digit.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[100]; scanf("%99s", s);
    int len=(int)strlen(s);
    if(len>1) { char t=s[0]; s[0]=s[len-1]; s[len-1]=t; }
    printf("%s", s);
    return 0;
}
