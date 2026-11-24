/* Q98: Initials with surname in full
   Standalone C solution. Compile with: gcc Q98_initials_with_surname_in_full.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000],words[100][100];int n=0;fgets(s,sizeof(s),stdin);
    char *p=strtok(s," \t\r\n");
    while(p&&n<100){strncpy(words[n],p,99);words[n][99]=0;n++;p=strtok(NULL," \t\r\n");}
    for(int i=0;i<n-1;i++)printf("%c.",words[i][0]);
    if(n>0){if(n>1)putchar(' ');printf("%s",words[n-1]);}
    return 0;
}
