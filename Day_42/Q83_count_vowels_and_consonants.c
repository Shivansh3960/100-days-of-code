/* Q83: Count vowels and consonants
   Standalone C solution. Compile with: gcc Q83_count_vowels_and_consonants.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[2000]; int v=0,c=0; fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++){char x=s[i];if(x>='A'&&x<='Z')x+=32;
        if(x>='a'&&x<='z'){if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else c++;}}
    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}
