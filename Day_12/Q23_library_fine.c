/* Q23: Library fine
   Standalone C solution. Compile with: gcc Q23_library_fine.c -o program
*/
#include <stdio.h>
int main(void) {
    int d, fine = 0;
    scanf("%d", &d);
    if (d > 30) printf("Membership Cancelled");
    else {
        if (d > 0) fine += (d < 5 ? d : 5) * 2;
        if (d > 5) fine += (d < 10 ? d-5 : 5) * 4;
        if (d > 10) fine += (d-10) * 6;
        printf("Fine ₹%d", fine);
    }
    return 0;
}
