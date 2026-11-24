/* Q40: Ones complement of binary string
   Standalone C solution. Compile with: gcc Q40_ones_complement_of_binary_string.c -o program
*/
#include <stdio.h>
int main(void) {
    char s[1000]; scanf("%999s", s);
    for(int i=0; s[i]; i++) {
        if(s[i]=='0') s[i]='1';
        else if(s[i]=='1') s[i]='0';
    }
    printf("%s", s);
    return 0;
}
