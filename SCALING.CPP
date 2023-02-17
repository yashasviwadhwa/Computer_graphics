#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>

int x1, y1, x2, y2, x3, y3, mx, my;
void draw();
void scale();
void main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi\\");
   printf("Enter the 1st point for the triangle:");
   scanf("%d%d", &x1, &y1);
   printf("Enter the 2nd point for the triangle:");
   scanf("%d%d", &x2, &y2);
   printf("Enter the 3rd point for the triangle:");
   scanf("%d%d", &x3, &y3);
   draw();

   scale();
}


void draw() {
   line(x1, y1, x2, y2);
   line(x2, y2, x3, y3);
   line(x3, y3, x1, y1);
}

void scale() {
   int x, y, a1, a2, a3, b1, b2, b3;
   int mx, my;

   printf("Enter the scalling coordinates");
   scanf("%d%d", &x, &y);

   mx = (x1 + x2 + x3) / 3;//100+200+150=450/3=150
   my = (y1 + y2 + y3) / 3;//500/3=166

   cleardevice();

   a1 = mx + (x1 - mx) * x;//150-100=50
   b1 = my + (y1 - my) * y;//166+200-166*2=234
   a2 = mx + (x2 - mx) * x;//150+200-150*2=250
   b2 = my + (y2 - my) * y;//166+200-166*2=234
   a3 = mx + (x3 - mx) * x;//150+150-150*2=150
   b3 = my + (y3 - my) * y;//166+100-166*2=34

   line(a1, b1, a2, b2);
   line(a2, b2, a3, b3);
   line(a3, b3, a1, b1);

   draw();
   getch();
}