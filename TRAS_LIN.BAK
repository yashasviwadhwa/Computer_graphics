#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void translate(int p[][2],int t[])
{
setcolor(5);
rectangle(p[0][0],p[0][1],p[1][0],p[1][1]);
   p[0][0]=p[0][0]+t[0];
   p[0][1]=p[0][1]+t[1];
   p[1][0]=p[1][0]+t[0];
   p[1][1]=p[1][1]+t[1];
   setcolor(RED);
rectangle(p[0][0],p[0][1],p[1][0],p[1][1]);



}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 cleardevice();
int  p[2][2]={100,200,300,200};
 int t[]={100,200};
 translate(p,t);
 getch();

}