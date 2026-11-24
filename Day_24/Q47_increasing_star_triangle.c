/* Q47: Increasing star triangle
   Standalone C solution. Compile with: gcc Q47_increasing_star_triangle.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) printf("*");
        if(i<5) printf("\n");
    }
    return 0;
}
