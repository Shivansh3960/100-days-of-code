/* Q54: Centered diamond star pattern
   Standalone C solution. Compile with: gcc Q54_centered_diamond_star_pattern.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=1;i<=4;i++) {
        for(int s=0;s<4-i;s++) printf(" ");
        for(int j=0;j<2*i-1;j++) printf("*");
        printf("\n");
    }
    for(int i=3;i>=1;i--) {
        for(int s=0;s<4-i;s++) printf(" ");
        for(int j=0;j<2*i-1;j++) printf("*");
        if(i>1) printf("\n");
    }
    return 0;
}
