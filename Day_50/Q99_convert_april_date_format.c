/* Q99: Convert April date format
   Standalone C solution. Compile with: gcc Q99_convert_april_date_format.c -o program
*/
#include <stdio.h>
int main(void) {
    int day,month,year;
    if(scanf("%d/%d/%d",&day,&month,&year)!=3)return 0;
    if(month==4)printf("%02d-Apr-%04d",day,year);
    else printf("%02d/%02d/%04d",day,month,year);
    return 0;
}
