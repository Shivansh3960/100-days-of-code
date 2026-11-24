/* Q48: Increasing number triangle
   Standalone C solution. Compile with: gcc Q48_increasing_number_triangle.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) printf("%d", j);
        if(i<5) printf("\n");
    }
    return 0;
}
