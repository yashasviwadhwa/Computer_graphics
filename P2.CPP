#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int x1,x2,y1,y2,mx,my,depth;
void scale();
void rotate();
void translate()
{
 int a1=x1,a2=x2,b1=y1,b2=y2,dep,x,y;
 cout<<"Enter The tranlsate coordiante";
 cin>>x>>y;
a1= a1+x;
a2=a2+x;
b1 =b1+y;
b2=b2+y;
dep=(a2-a1)/4;
bar3d(a1,b1,a2,b2,dep,1);
cout<<"by";




}

void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

cout<<"Enter The coordiantes";
cin>>x1>>y1>>x2>>y2;
depth=(x2-x1)/4;
mx=(x1+x2)/4;
my=(y1+y2)/4;
bar3d(x1,y1,x2,y2,depth,1);
	setcolor(5);
getch();
//translate();
scale();
getch();

}
 void scale()
 {
 int a11,a12,b11,b12,dp;
 int x,y;
 cout<<"Enter The value to scale";
 cin>>x>>y;
 a11=mx+(x1-mx)*x;
 a12=mx+(x2-mx)*x;
 b11=my+(y1-my)*y;
 b12=my+(y2-my)*y;
 dp=(a12-a11)/4;
 bar3d(a11,b11,a12,b12,dp,1);


 }
 void rotate()
 {


  int a1,b1,a1,a2,dep;
  double t;
  cout<<"Enter The valeue of the rotation";
    t = t * (3.14 / 180);
   a1 =x2+mx+(x1-mx)*cos(t) -(y1-my) * sin(t);
   b1 =mx+(x1-mx)*sin(t)+(y1-my) * cos(t);
   a2= x2+my+(x2-mx)*cos(t)- (y2-my) * sin(t);
   b2 =my+(x2-mx)*sin(t)+(y2-my) * cos(t);
   dep = abs(a2-a1)/4;
   setcolor(5);
   bar3d(a2, b2, a1, b1, dep, 1);
   getch();
}



 }
