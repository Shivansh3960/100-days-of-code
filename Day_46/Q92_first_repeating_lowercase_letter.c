/* Q92: First repeating lowercase letter
   Standalone C solution. Compile with: gcc Q92_first_repeating_lowercase_letter.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; int count[26]={0}; fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++)if(s[i]>='a'&&s[i]<='z')count[s[i]-'a']++;
    for(int i=0;s[i]&&s[i]!='\n';i++)if(s[i]>='a'&&s[i]<='z'&&count[s[i]-'a']>1){putchar(s[i]);return 0;}
    printf("-1");
    return 0;
}
