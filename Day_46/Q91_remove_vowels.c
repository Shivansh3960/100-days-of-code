/* Q91: Remove vowels
   Standalone C solution. Compile with: gcc Q91_remove_vowels.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++){
        char x=s[i];if(x>='A'&&x<='Z')x+=32;
        if(!(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'))putchar(s[i]);
    }
    return 0;
}
