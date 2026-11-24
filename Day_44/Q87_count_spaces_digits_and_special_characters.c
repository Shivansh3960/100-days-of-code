/* Q87: Count spaces digits and special characters
   Standalone C solution. Compile with: gcc Q87_count_spaces_digits_and_special_characters.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; int spaces=0,digits=0,special=0; fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++){
        if(s[i]==' ')spaces++;else if(s[i]>='0'&&s[i]<='9')digits++;
        else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d",spaces,digits,special);
    return 0;
}
