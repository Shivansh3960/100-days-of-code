/* Q96: Reverse each word
   Standalone C solution. Compile with: gcc Q96_reverse_each_word.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[3000];fgets(s,sizeof(s),stdin);int n=strcspn(s,"\r\n"),i=0;
    while(i<n){if(s[i]==' '){putchar(s[i++]);continue;}int j=i;while(j<n&&s[j]!=' ')j++;for(int k=j-1;k>=i;k--)putchar(s[k]);i=j;}
    return 0;
}
