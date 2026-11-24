/* Q95: String rotation check
   Standalone C solution. Compile with: gcc Q95_string_rotation_check.c -o program
*/
#include <stdio.h>
#include <string.h>
int main(void) {
    char a[2000],b[2000],d[4000];fgets(a,sizeof(a),stdin);fgets(b,sizeof(b),stdin);
    a[strcspn(a,"\r\n")]=0;b[strcspn(b,"\r\n")]=0;
    int n=strlen(a);
    if(n!=(int)strlen(b)){printf("Not rotation");return 0;}
    strcpy(d,a);strcat(d,a);
    printf(strstr(d,b)?"Rotation":"Not rotation");
    return 0;
}
