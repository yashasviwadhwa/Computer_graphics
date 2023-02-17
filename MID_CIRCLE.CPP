#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void drawcircle(int x0, int y0, int rd) {
  int x = rd;
  int y = 0;
  int err = 0;
  while (x >= y) {
    putpixel(x0 + x, y0 + y, 7);
    putpixel(x0 + y, y0 + x, 7);
    putpixel(x0 - y, y0 + x, 7);
    putpixel(x0 - x, y0 + y, 7);
    putpixel(x0 - x, y0 - y, 7);
    putpixel(x0 - y, y0 - x, 7);
    putpixel(x0 + y, y0 - x, 7);
    putpixel(x0 + x, y0 - y, 7);
    if (err <= 0) {
      y += 1;
      err += 2 * y + 1;
    }
    if (err > 0) {
      x -= 1;
      err -= 2 * x + 1;
    }
  } //while
}
void main() {
  int x0, y0, radius;
  int gd = DETECT, gm;
  initgraph( & gd, & gm, "C:\\TURBOC3\\BGI");
  printf("\n\n\n");
  printf("Enter The Values Of x0 and y0:");
  scanf("%d%d", & x0, & y0);
  printf("Enter The Value Of Radius:");
  scanf("%d", & radius);
  drawcircle(x0, y0, radius);
  getch();
  closegraph();
}
