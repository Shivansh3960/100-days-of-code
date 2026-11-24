/* Q24: Electricity bill
   Standalone C solution. Compile with: gcc Q24_electricity_bill.c -o program
*/
#include <stdio.h>
int main(void) {
    int u; long bill;
    scanf("%d", &u);
    if (u <= 100) bill = u*5;
    else if (u <= 200) bill = 100*5 + (u-100)*7;
    else if (u <= 300) bill = 100*5 + 100*7 + (u-200)*10;
    else bill = 100*5 + 100*7 + 100*10 + (u-300)*12;
    printf("Bill: ₹%ld", bill);
    return 0;
}
