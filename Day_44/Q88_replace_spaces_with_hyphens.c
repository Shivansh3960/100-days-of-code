/* Q88: Replace spaces with hyphens
   Standalone C solution. Compile with: gcc Q88_replace_spaces_with_hyphens.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++){if(s[i]==' ')s[i]='-';putchar(s[i]);}
    return 0;
}
