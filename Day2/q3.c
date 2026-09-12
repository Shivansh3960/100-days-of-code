#include<stdio.h>
int main(){
    int a , b , perimeter , area ;
    printf ("please enter length :");
    scanf ("%d", &a);
    printf ("please enter breadth :");
    scanf ("%d", &b);
area = a*b;
perimeter = 2*a + 2*b;
printf ("perimeter is %d\n", perimeter) ;
printf ("area is %d \n", area );
return 0 ; 


}