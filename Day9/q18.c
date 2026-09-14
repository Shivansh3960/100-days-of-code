#include <stdio.h>
int main (){
    int a;
    printf ("enter percentage :");
    scanf ("%d",&a);
    if (a>=90 && a<=100){
        printf (" Grade A\n");
    }
    else if (a>=80 && a<=89)
    {
        printf ("Grade B\n");

    }
    else if 
    (a>=70 && a<=79){
        printf ("Grade C\n");

    }
    else if 
    (a>=60 && a<=69){
        printf ("Grade D\n");
    }
    else {
printf ("Grade F\n");
    }
    

return 0;
}