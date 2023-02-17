#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 int i;
 int x,y;
int font,direction,font_size;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 printf("%d:%d",getmaxx(),getmaxy());
 rectangle(0,0,getmaxx(),getmaxy());
 //road

 //Wheel
 for(i=0;i<500;i++)
 {

 cleardevice();
rectangle(0,0,getmaxx(),getmaxy());
x=20;
y=450;
textcolor(RED);
//printf("%d:%d",getmaxx(),getmaxy());
font=8; direction=0;
font_size=2;
settextstyle(font,direction,font_size);
outtextxy(x,y,"05921402020");
outtextxy(x+200,y,"YASHASVI WADHWA");
 circle(40+i,370,30);
 circle(150+i,370,30);
 line(40+i,370,100+i,370);
 line(40+i,370,60+i,340);
 line(100+i,370,120+i,340);
 line(120+i,340,60+i,340);
 line(60+i,340,60+i,335);
 line(55+i,335,65+i,335);
 line(150+i,370,100+i,320);
line(100+i,320,90+i,320);
 line(0,405,getmaxx(),405);
 line(0,410,getmaxx(),410);
 delay(20);
  }
 getch();


}