/* Q52: Irregular vertical star pattern
   Standalone C solution. Compile with: gcc Q52_irregular_vertical_star_pattern.c -o program
*/
#include <stdio.h>
int main(void) {
    int groups[] = {1,3,5,3,1};
    for(int g=0;g<5;g++) {
        for(int i=0;i<groups[g];i++) printf("*\n");
        if(g<4) printf("\n");
    }
    return 0;
}
