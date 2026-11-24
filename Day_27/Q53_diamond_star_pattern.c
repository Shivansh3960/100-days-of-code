/* Q53: Diamond star pattern
   Standalone C solution. Compile with: gcc Q53_diamond_star_pattern.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=1;i<=5;i++) {
        for(int j=0;j<2*i-1;j++) printf("*");
        printf("\n");
    }
    for(int i=4;i>=1;i--) {
        for(int j=0;j<2*i-1;j++) printf("*");
        if(i>1) printf("\n");
    }
    return 0;
}
