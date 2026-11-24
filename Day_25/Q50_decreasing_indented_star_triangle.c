/* Q50: Decreasing indented star triangle
   Standalone C solution. Compile with: gcc Q50_decreasing_indented_star_triangle.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=0;i<5;i++) {
        for(int s=0;s<i;s++) printf(" ");
        for(int j=0;j<5-i;j++) printf("*");
        if(i<4) printf("\n");
    }
    return 0;
}
