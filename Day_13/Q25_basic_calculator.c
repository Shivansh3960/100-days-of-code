/* Q25: Basic calculator
   Standalone C solution. Compile with: gcc Q25_basic_calculator.c -o program
*/
#include <stdio.h>
int main(void) {
    double a,b; char op;
    scanf("%lf %lf %c", &a, &b, &op);
    switch (op) {
        case '+': printf("%g", a+b); break;
        case '-': printf("%g", a-b); break;
        case '*': printf("%g", a*b); break;
        case '/': if (b != 0) printf("%g", a/b); else printf("Undefined"); break;
        case '%': if ((int)b != 0) printf("%d", (int)a%(int)b); else printf("Undefined"); break;
        default: printf("Invalid operator");
    }
    return 0;
}
