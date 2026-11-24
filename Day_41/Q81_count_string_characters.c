/* Q81: Count string characters
   Standalone C solution. Compile with: gcc Q81_count_string_characters.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; if(!fgets(s,sizeof(s),stdin))return 0;
    int n=0;while(s[n]&&s[n]!='\n'&&s[n]!='\r')n++;
    printf("%d",n);
    return 0;
}
