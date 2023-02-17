#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
  clrscr();
  int x1, y1, x2, y2, x3, y3,i = 0;
  float t = 0, x, y;
  int gd = DETECT, gm;
  printf("Enter the values for the four points  ");
  scanf("%d%d%d%d%d%d", & x1, & y1, & x2, & y2, & x3, & y3);
         initgraph( & gd, & gm, "c:\\turboc3//bgi");
  setcolor(WHITE);
  while (t <= 1) {


  x = (1 - t) * (1 - t) * x1 + 2 * (1 - t) * t * x2 +  t*t*x3;
    y = (1 - t) * (1 - t) * y1 + 2 * (1 - t) * t * y2 +  t*t*y3;

 

    putpixel(x, y, 15);
    t = t + 0.001;
  }
 
    getch();
  closegraph();
