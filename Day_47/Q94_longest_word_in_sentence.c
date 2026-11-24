/* Q94: Longest word in sentence
   Standalone C solution. Compile with: gcc Q94_longest_word_in_sentence.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[3000],best[1000]=""; fgets(s,sizeof(s),stdin);
    int i=0;
    while(s[i]){
        while(s[i]==' '||s[i]=='\t'||s[i]=='\n')i++;
        int start=i;while(s[i]&&s[i]!=' '&&s[i]!='\t'&&s[i]!='\n'&&s[i]!='\r')i++;
        if(i-start>(int)strlen(best)){int len=i-start;if(len>999)len=999;for(int j=0;j<len;j++)best[j]=s[start+j];best[len]='\0';}
    }
    printf("%s",best);return 0;
}
