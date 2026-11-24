/* Q82: Print each character on new line
   Standalone C solution. Compile with: gcc Q82_print_each_character_on_new_line.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; if(!fgets(s,sizeof(s),stdin))return 0;
    for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++)printf("%c\n",s[i]);
    return 0;
}
