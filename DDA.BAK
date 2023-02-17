


#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void dda(int x1, int y1, int x2, int y2) {
  int dx = x2 - x1;
 int dy = y2 - y1;
 float  s, k;
  float xinc, yinc, x = x1, y = y1;
  if (abs(dx) > abs(dy)) {
    s = dx;
  } else {
    s = dy;
  }
  xinc = dx / s;
  yinc = dy / s;

  putpixel(x, y,RED); //1st point
  for (k = 0; k <dx; k++) {
    x = x + xinc;
    y = y + yinc;
//    printf("%.2f:%.2f\n",x,y);
    putpixel(x,y,RED);
   // delay(50);
  }
}
void main() {
  int gd = DETECT, gm;
  initgraph( & gd, & gm, "c://Turboc3//bgi");
 // outtextxy(220, 10, "DD Algo");
 dda(150,150,450,150);
dda(150,150,300,300);
dda(450,150,300,300);
/* int x1,x2,y1,y2;
  cout<<"Enter The x1 ,y1 x2,y2";
 cin>>x1>>y1>>x2>>y2;
  dda(x1,y1,x2,y2);*/
  getch();
  getch();
  closegraph();
}

