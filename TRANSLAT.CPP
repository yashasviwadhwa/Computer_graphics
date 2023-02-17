	#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void translation(int p[],int t[])
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 cout<<"The ogriginal cordiantes "<<p[0]<<":"<<p[1]<<endl;
 putpixel(p[0],p[1],CYAN);
//setbkcolor()
  p[0]=p[0]+t[0];
  p[1]=p[1]+t[1];
  cout<<"AFTER translated coordinates "<<p[0]<<":"<<p[1]<<endl;
    putpixel(p[0],p[1],CYAN);


}
void main()
{

clrscr();
int p[2]={150,280};
int t[]={200,100};
translation(p,t);
getch();


}