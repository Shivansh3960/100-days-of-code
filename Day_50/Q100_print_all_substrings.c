/* Q100: Print all substrings
   Standalone C solution. Compile with: gcc Q100_print_all_substrings.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];fgets(s,sizeof(s),stdin);int n=strcspn(s,"\r\n"),first=1;
    for(int i=0;i<n;i++)for(int j=i+1;j<=n;j++){
        if(!first)printf(",");for(int k=i;k<j;k++)putchar(s[k]);first=0;
    }
    return 0;
}
