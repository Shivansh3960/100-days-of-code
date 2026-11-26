#include <stdio.h>
#include <string.h>
enum Light{RED,YELLOW,GREEN};
int main(void){char s[20];if(scanf("%19s",s)!=1)return 1;enum Light x;if(!strcmp(s,"RED"))x=RED;else if(!strcmp(s,"YELLOW"))x=YELLOW;else if(!strcmp(s,"GREEN"))x=GREEN;else{puts("Invalid traffic light");return 1;}switch(x){case RED:puts("Stop");break;case YELLOW:puts("Wait");break;case GREEN:puts("Go");break;}return 0;}
