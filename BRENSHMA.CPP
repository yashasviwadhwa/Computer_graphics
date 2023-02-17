#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void drawline(int x1,int y1,int x2,int y2)
{
 int dx,dy,p,x,y;
 dx=x2-x1;
 dy=y2-y1;
 x=x1;
 y=y1;
 p=2*dy-dx;
 while(x<=x2)
 {
   putpixel(x,y,RED);
   x++;
   if(p>=0)
   {y=y+1;
   p=p+2*dy-2*dx;
   }
   else
 {
 putpixel(x,y,RED);
  p=p+2*dy;

  }
  x=x+1;
  }
}
void equal()
{
int x1=300,x2=200,y1=100,y2=200,x3=400,y3=200;
 drawline(150,150,450,150);
 drawline(150,150,300,300);
 drawline(450,150,300,300);

}


void main()
{
  int gd=DETECT,gm;
//  int x1,y1,x2,y2;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
// cout<<"Enter The First Coordinate";
 //cin>>x1>>y1;
 //cout<<"Enter THe Second Coordinate";
 //cin>>x2>>y2;
 //drawline(x1,y1,x2,y2);
 equal();
 getch();

}