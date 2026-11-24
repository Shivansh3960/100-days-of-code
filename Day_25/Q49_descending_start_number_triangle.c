/* Q49: Descending start number triangle
   Standalone C solution. Compile with: gcc Q49_descending_start_number_triangle.c -o program
*/
#include <stdio.h>
int main(void) {
    for(int i=5;i>=1;i--) {
        for(int j=i;j<=5;j++) printf("%d", j);
        if(i>1) printf("\n");
    }
    return 0;
}
