#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void rotation(int p[][2])
{
double angle,s,c;
cout<<"Enter The angle";
cin>>angle;
c=cos(angle*3.14/180);
s=sin(angle*3.14/180);
line(p[0][0],p[0][1],p[1][0],p[1][1]);
p[0][0]=floor(p[0][0]*c+p[0][1]*s);
p[0][1]=floor(-p[0][1]*s+p[0][0]*c);
p[1][0]=floor(p[1][0]*c+p[1][1]*s);
p[1][1]=floor(-p[1][1]*s+p[1][0]*s);
line(p[0][0],p[0][1],p[1][0],p[1][1]);
}

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
int p[][2]={100,200,300,200};
rotation(p);
  getch();

}
