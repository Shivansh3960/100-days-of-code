#include<stdio.h>
int main(){
    float area ,circum , r;
    printf ("please enter radius:");
    scanf ("%f", &r) ;
    circum = 2*3.14*r;
    area = 3.14*r*r;
    printf ("Circumference is: %f\n",circum);
printf ("Area is :%f\n", area);
return 0;
}