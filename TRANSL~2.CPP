#include<iostream.h>
#include<conio.h>
#include<graphics.h>
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
	closegraph();
}


int main()
{

	clrscr();
	int P[2][2]={150,180, 120, 180};
	int T[]={200,100};

	translateLine(P,T);
	getch();

	return 0;
}
