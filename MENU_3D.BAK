#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void translateLine(int P[][2],int T[])
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	setcolor(CYAN);
	cout<<P[0][0]<<P[0][1]<<P[1][0]<<P[1][1]<<endl;
	line(P[0][0],P[0][1],P[1][0],P[1][1]);
	P[0][0] = P[0][0] + T[0];
	P[0][1] = P[0][1] + T[1];
	P[1][0] = P[1][0] + T[0];
	P[1][1] = P[1][1] + T[1];
	setcolor(CYAN);
	cout<<P[0][0]<<P[0][1]<<P[1][0]<<P[1][1]<<endl;
	line(P[0][0], P[0][1], P[1][0], P[1][1]);

}
    void axis()
{
int midx=320,midy=240,maxy=480,maxx=640;
getch();
cleardevice();
line(midx,0,midx,maxy);
line(0,midy,maxx,midy);
}
void scaling()
{
int x,y,z,o,x1,x2,y1,y2;
int gd=DETECT,gm;
int maxx,maxy,midx,midy;
//detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//setfillstyle(0,getmaxcolor());
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;

axis();

bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
printf("Enter scaling factors");
scanf("%d%d%d", &x,&y,&z);
//axis();
printf("After scaling");
bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);
//axis();
getch();
closegraph();

	}





int main()
{

	clrscr();
	int choice;
	int P[2][2]={150,180, 120, 180};
		 int T[]={200,100};
	while(1)
	{
	cout<<"Enter 1 for Translation\n";
	cout<<"Enter 2 for Scaling\n";
	cout<<"Enter 3 for Exit ";
	cin>>choice;

	switch(choice)
	{
	    case 1:
		 translateLine(P,T);
		getch();
		 cleardevice();
		 closegraph();
		break;
		case 2: scaling();
		break;
	      default:exit(0);
		break    ;
	}
	}

	getch();

	return 0;
}
