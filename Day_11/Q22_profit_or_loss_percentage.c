/* Q22: Profit or loss percentage
   Standalone C solution. Compile with: gcc Q22_profit_or_loss_percentage.c -o program
*/
#include <stdio.h>
int main(void) {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    if (sp > cp) printf("Profit %.0f%%", (sp-cp)*100.0/cp);
    else if (sp < cp) printf("Loss %.0f%%", (cp-sp)*100.0/cp);
    else printf("No Profit No Loss");
    return 0;
}
