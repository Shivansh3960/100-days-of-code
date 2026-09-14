#include <stdio.h>
#include <math.h>
int main() {
float a,b,c,d,root1,root2,realPart,imagPart;
printf ("enter coeff a b c ");
scanf ("%f %f %f" ,&a ,&b ,&c);
if (a == 0) {
printf ("coffecient a must not be 0 for a quadrstic equation.\n");
return 0;
}
d = b*b -4*a*c ;
if (d>0){
root1 = (-b+sqrt(d))/(2*a);
root2 = (-b-sqrt(d))/(2*a);
printf("roots are real and distinct .\n");
printf("root 1= %.2f\n",root1);
printf("root 2= %.2f\n",root2);
}
else if (d == 0){
root1 = root2 -b/(2*a);
printf("roots are real and equal.\n");
printf("root1=root2 = %.2f\n",root1);
}
else  {
realPart= -b/(2*a);
imagPart= sqrt(-d)/(2*a);
printf("roots are complex/imaginary.\n");
printf("root1 = %.2f + %.2fi\n",realPart,imagPart);
printf("root2 = %.2f - %.2fi\n",realPart,imagPart);
}
return 0;
}
  