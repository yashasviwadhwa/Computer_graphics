#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void translateLine(int P[][2],int T[])
{

	setcolor(CYAN);
	cout<<P[0][0]<<":"<<P[0][1]<<":"<<P[1][0]<<":"<<P[1][1]<<endl;
	line(P[0][0],P[0][1],P[1][0],P[1][1]);
	P[0][0] = P[0][0] + T[0];
	P[0][1] = P[0][1] + T[1];
	P[1][0] = P[1][0] + T[0];
	P[1][1] = P[1][1] + T[1];
	setcolor(CYAN);
	cout<<P[0][0]<<":"<<P[0][1]<<":"<<P[1][0]<<":"<<P[1][1]<<endl;
	line(P[0][0], P[0][1], P[1][0], P[1][1]);

}


int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
    int P1[2][2]={120,180, 150, 180};
      int P2[2][2]={120,180,135,130 };
      int P3[2][2]={135,130, 150, 180};
	int T[]={200,100};
	 clrscr();
	translateLine(P1,T);
	translateLine(P2,T);
	translateLine(P3,T);
		getch();
	closegraph();
return 0;
}
