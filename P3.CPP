#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
line(200,170,200,500);
line(200,170,200,500);


rectangle(200,200,500,260);
 setfillstyle(SOLID_FILL,RED);
floodfill(201,201,getmaxcolor());
rectangle(200,261,500,321);
 setfillstyle(SOLID_FILL,WHITE);
floodfill(250,263,getmaxcolor());
 rectangle(200,323,500,383);
 setfillstyle(SOLID_FILL,GREEN);
floodfill(399,382,getmaxcolor());
int x=350,y=290,r=30;
setcolor(BLUE);
circle(x,y,r);
 setfillstyle(SOLID_FILL,YELLOW);
floodfill(x+2,y+2,getmaxcolor());
for(int i=0;i<10;i++)
{
line(x,y,x+r/2,y+r/2) ;
}
//rectangle();
//line(200,275,320,275);
//line(200,260,320,260);
getch();


}