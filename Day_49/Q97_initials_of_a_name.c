/* Q97: Initials of a name
   Standalone C solution. Compile with: gcc Q97_initials_of_a_name.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[1000];fgets(s,sizeof(s),stdin);int inword=0;
    for(int i=0;s[i]&&s[i]!='\n';i++){
        if(s[i]!=' '&&s[i]!='\t'){if(!inword)printf("%c.",s[i]);inword=1;}
        else inword=0;
    }
    return 0;
}
