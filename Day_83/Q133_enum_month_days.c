#include <stdio.h>
#include <string.h>
enum Month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
int main(void){char s[10];const char*n[]={"","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};if(scanf("%9s",s)!=1)return 1;int m=0;for(int i=1;i<=12;i++)if(!strcmp(s,n[i]))m=i;if(!m)puts("Invalid month");else if(m==FEB)puts("28 or 29 days");else if(m==APR||m==JUN||m==SEP||m==NOV)puts("30 days");else puts("31 days");return 0;}
