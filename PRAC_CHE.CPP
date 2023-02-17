#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void ddaline(int x1,int y1,int x2,int y2,int color=CYAN)
{
float s;
float dx=x2-x1;
float dy=y2-y1;
if(abs(dx)>abs(dy))
 s=abs(dx);
 else
 s=abs(dy);
float xinc=dx/s;
float yinc=dy/s;
float x,y;
x=x1;
y=y1;
putpixel(x1+0.5,y1+0.5,color);
for(int i=0;i<s;i++)
{
putpixel(x,y,color);
x+=xinc;
y+=yinc;
}

}
void fill(int x,int y,int color=CYAN)
{
for(int i=x;i<x+50;i++)
{
ddaline(i,y,i,y+50,color);
}
}

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
ddaline(100,100,600,100,CYAN);
ddaline(100,100,100,470,CYAN);
ddaline(600,100,600,470,CYAN);
ddaline(100,467,600,467,CYAN);
int c=0;
       for(int i=100;i<600;i=i+50)
       {
       for(int j=100;j<470;j=j+50)
       {
       if(c%2==0)
       {
       fill(i,j,CYAN);
       }
       else
       {
       fill(i,j,YELLOW);
       c++;

       }

       }}
//ddaline();
//for(
getch();
}