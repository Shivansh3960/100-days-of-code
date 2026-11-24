/* Q84: Lowercase to uppercase
   Standalone C solution. Compile with: gcc Q84_lowercase_to_uppercase.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z')s[i]-=32;
    printf("%s",s);
    return 0;
}
