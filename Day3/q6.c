
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter no : a\n ");
    scanf ("%d", &a);
    printf ("enter no : b\n");
        scanf("%d", &b);
        temp=a;
        a=b;
        b=temp;

printf ("a is %d\n", a);
printf ("b is %d\n", b);
    return 0; 
}