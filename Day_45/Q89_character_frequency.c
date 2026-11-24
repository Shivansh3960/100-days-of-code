/* Q89: Character frequency
   Standalone C solution. Compile with: gcc Q89_character_frequency.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000],ch; fgets(s,sizeof(s),stdin); scanf(" %c",&ch);
    int count=0;for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++)if(s[i]==ch)count++;
    printf("%d",count);
    return 0;
}
