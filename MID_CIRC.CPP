#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
int x_mid,y_mid,x=0,y,r;
cout<<"Enter The x_mid and Y_mid value";
cin>>x_mid>>y_mid ;
cout<<"Enter The radius";
cin>>r;
y=r;
int d=3-2*r;
do
{
putpixel(x_mid+x,y_mid+y,RED);//1
putpixel(x_mid+y,y_mid+x,GREEN); //2
putpixel(x_mid-y,y_mid+x,CYAN);     //3
putpixel(x_mid-x,y_mid+y,CYAN);        //4
putpixel(x_mid-x,y_mid-y,RED);           //5
putpixel(x_mid-y,y_mid-x,CYAN);
putpixel(x_mid+y,y_mid-x,RED);                          //6
putpixel(x_mid+x,y_mid-y,YELLOW ) ;


if(d>=0)
{
y=y-1;
d=d+2*x-2*y+1;
}
else
{
d=d+2*x+1;
}
x=x+1;
}
while(x<y);

getch();





}
