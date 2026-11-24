/* Q46: Solid square star pattern
   Standalone C solution. Compile with: gcc Q46_solid_square_star_pattern.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) printf("*");
        if(i<4) printf("\n");
    }
    return 0;
}
