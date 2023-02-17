
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm,color;
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
putpixel(85,35,GREEN);
putpixel(30,40,RED);
putpixel(135,50,CYAN);
getch();
closegraph();
return 0;
}