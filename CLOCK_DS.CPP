#include<graphics.h>
#include<conio.h>
void main()

{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(0,0,getmaxx(),getmaxy());
//circle(320,240,80);
for(int i=1;i<5;i++)
{
 setcolor(CYAN);
 circle(320,240,200);


}

getch();
}
