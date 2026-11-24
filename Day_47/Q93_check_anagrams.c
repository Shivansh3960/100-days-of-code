/* Q93: Check anagrams
   Standalone C solution. Compile with: gcc Q93_check_anagrams.c -o program
*/
#include <stdio.h>
int main(void) {
    char a[2000],b[2000]; int count[256]={0};
    fgets(a,sizeof(a),stdin);fgets(b,sizeof(b),stdin);
    for(int i=0;a[i]&&a[i]!='\n';i++)if(a[i]!=' ')count[(unsigned char)a[i]]++;
    for(int i=0;b[i]&&b[i]!='\n';i++)if(b[i]!=' ')count[(unsigned char)b[i]]--;
    for(int i=0;i<256;i++)if(count[i]){printf("Not anagrams");return 0;}
    printf("Anagrams");return 0;
}
