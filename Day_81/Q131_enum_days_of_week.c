#include <stdio.h>
enum Day{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main(void){const char*n[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};for(int i=SUNDAY;i<=SATURDAY;i++)printf("%s = %d\n",n[i],i);return 0;}
