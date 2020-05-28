#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"");
time_t now;
time(&now);
printf("%s",ctime(&now));

 getch();
 }
