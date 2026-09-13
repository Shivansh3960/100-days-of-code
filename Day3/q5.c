#include<stdio.h>
int main(){
    float celcius , fahrenite;
    printf ("enter temperature in celcius:");
    scanf ("%f",&celcius);
    fahrenite = (celcius * 9/5) + 32 ;
    printf ("temperature in fahrenite is : %f", fahrenite);
    return 0;


}