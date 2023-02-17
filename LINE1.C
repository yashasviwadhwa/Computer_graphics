#include<graphics.h>
int main(void)
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
 line(150,150,450,250);
 getch();
 closegraph();
 return 0;
 }
