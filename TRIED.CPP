#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void translate(int p[],int t[])
{

  int x1=p[0];
  int x2=p[1];
  int y1=p[0];
  int y2=p[1];
  line(x1+t[0],y1+t[1],x2+t[0],y2+t[1]);
  cout<<"after tralsating";
  getch();

}
  void  rotation(int t[])
  {
  int x1=p[0];
  int x2=p[1];
  int y1=p[0];
  int y2=p[1];
   double  angle,c,s;
cout<<"Enter The Angle";
cin>>angle;
s=sin(angle*3.14/180);
c=cos(angle*3.14/180);
//x=angle(x*c+y*s);
//y=angle(-x*s+y*c);
x1=floor(x1*c+y1*s);
y1=floor(-x1*s+y1*c);
x2=floor(x2*c+y2*s);
y2=floor(-x2*s+y2*c);
x3=floor(x3*c+y3*s);
y3=floor(-x3*s+y3*c);
 line(x1,y1,x2,x2);



  }

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 int t[]={20,20};
 int p[]={200,400,200,600};
 translate(p,t);

/* int sx,sy;
 cout<<"Enter The value of The  scale up";
 cin>>sx>>sy;
 x1=x1*sx;
 y1=y1*sy;
 x2=x2*sx;
 y2=y2*sy;
 line(x1,y1,x2,y2);
 getch();*/
}