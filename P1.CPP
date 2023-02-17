#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void translate(int p[][2],int t[2])
 {
cout<"Before The line translation";
line(p[0][0],p[0][1],p[1][0],p[1][1]);
p[0][0]=p[0][0]+t[0];
p[0][1]=p[0][1]+t[1];
p[1][0]=p[1][0]+t[0];
p[1][1]=p[1][1]+t[1];

cout<<"After The line Translation";
line(p[0][0],p[0][1],p[1][0],p[1][1]);
 getch();
 }
 void scale(int p[][2])
 {
 line(p[0][0],p[0][1],p[1][0],p[1][1]);
 int sx,sy;


 cout<<"Enter The after The line scaling";
 cin>>sx>>sy;
 p[0][0]=p[0][0]*sx;
 p[0][1]=p[0][1]*sy;
 p[1][0]=p[1][0]*sx;
 p[1][1]=p[1][1]*sy;
 line(p[0][0],p[0][1],p[1][0],p[1][1]);


 }
 void rotation(int p[][2])
 {
 line(p[0][0],p[0][1],p[1][0],p[1][1]);
 double s,c,angle;
 cout<<"Enter The angle";
 cin>>angle;
 c=cos(angle*3.14/180);
 s=sin(angle*3.14/180);
p[0][0]=floor(p[0][0]*c+p[0][1]*s);
p[0][1]=floor(-p[0][0]*s+p[0][1]*c);
p[1][0]=floor(p[1][0]*c+p[1][1]*s);
p[1][1]=floor(-p[1][0]*s+p[1][1]*c);

line(p[0][0],p[0][1],p[1][0],p[1][1]);




 }
 void reflection(int p[][2])
 {
 rectangle(0,0,getmaxx(),getmaxy());
  line(getmaxx()/2,0,getmaxx()/2,getmaxy());
  line(0,getmaxy()/2,getmaxx()	,getmaxy()/2);
  line(p[0][0],p[0][1],p[1][0],p[1][1]);
  line(getmaxx()-p[0][0],getmaxy()-p[0][1],getmaxx()-p[1][0],getmaxy()-p[1][1]);
 line(p[0][0],getmaxy()-p[0][1],p[1][0],getmaxy()-p[1][1]);
  line(getmaxx()-p[0][0],p[0][1],getmaxx()-p[1][0],p[1][1]);
     getch();


 }

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");

   int p[2][2]={100,100,300,100};
     int t[]={100,200};
     //translate(p,t);
    // cleardevice();
//scale(p);
//rotation(p);
reflection(p);
     getch();
	     }
