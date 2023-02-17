#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void ddaline(int x1, int y1, int x2, int y2,int color=CYAN) {
	int s, m, dx, dy;
	float xi, yi, x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	if (abs(dx) > abs(dy))
		s = abs(dx);
		else
		s = abs(dy);
	xi = dx / (float) s;
	yi = dy / (float) s;
	x = x1;
	y = y1;
	putpixel(x1 + 0.5, y1 + 0.5, color);
	for (m = 0; m < s; m++) {
		x += xi;
		y += yi;
		putpixel(x + 0.5, y + 0.5,color);
	}
}
/*void fill(int x, int y,int color=CYAN) {
	int i, j;
	for (i = x; i < (x + 50); i++)
		ddaline(i, y, i, y + 50,color);
} */
void issocles()
{
	int gd = DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");	cleardevice();
	setcolor(CYAN);
	ddaline(0, 0, getmaxx(),0);
	ddaline(0, 0, 0, getmaxy());
	ddaline(getmaxx(), 0 ,getmaxx(),getmaxy());
	ddaline(0, getmaxy(), getmaxx(),getmaxy());
     ddaline(50,200,120,150);
     ddaline(120,150,170,200);
      ddaline(50,200,170,200);
      getch();
}
void scalane()
{
	int gd = DETECT,gm;
      int maxx=getmaxx();
  int  max_y=getmaxy();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cleardevice();
	setcolor(CYAN);
	ddaline(0, 0, getmaxx(),0);
   ddaline(0, 0, 0, getmaxy());
	ddaline(getmaxx(), 0 ,getmaxx(),getmaxy());
	ddaline(0, getmaxy(), getmaxx(),getmaxy());
       ddaline(200,300,220,250);
       ddaline(220,250,280,330);
       ddaline(200,300,280,330);
     getch();


}
void equa()
{

	int gd = DETECT,gm;
 //     int maxx=getmaxx();
 // int  max_y=getmaxy();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 cleardevice();
	setcolor(CYAN);
	ddaline(0, 0, getmaxx(),0);
   ddaline(0, 0, 0, getmaxy());
	ddaline(getmaxx(), 0 ,getmaxx(),getmaxy());
	ddaline(0, getmaxy(), getmaxx(),getmaxy());
	ddaline(250,300,380,300);
ddaline(250,300,320,230);
getch();
}
void main() {
	int i, j;
//	issocles();
//scalane();
while(1)
{
  // clrscr();
 cleardevice();
 printf("\nEnter option 1 For Equalitiral Triangle");
  printf("\nEnter option 2 For Salane Triangle");
  printf("\nEnter option 3 for The issocles Traingle");
  printf("\nEnter The option 4 for Exit");
  int choice;
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:equa();
  break;
  case 2:issocles();
  break;
  case 3:scalane();
  break;
 default:
 printf("Exit");
 exit(0);
 getch();


  }



}


}