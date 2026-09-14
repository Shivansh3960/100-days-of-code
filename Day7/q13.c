#include<stdio.h>
int main(){
    int y;
    printf("enter year\n");
    scanf ("%d",&y);
    if (y%400==0){
        printf("the year is leap year ");
    }
        
      else  if (y%4==0){
            printf ("the year is leap");
        }
        else if (y%100==0){
            printf ("the year is not leap year ");

        }
    
    else 
    printf ("year is not  leap year ");
    return 0;
}