#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void draw_tri(int x1,int y1, int x2, int y2, int x3, int y3)
{
     line (x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
}
void rotate_tri()
{
   setbkcolor(BLACK);
    double s,c, angle;
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);
    setbkcolor(WHITE);
//     converting degree to radiance since function is defined for angle in radiance   */


    c = cos(angle * 3.14/180);
     s = sin(angle *3.14/180);
   /*performing anticlockwise rotation */
/* x= xcos𝚹+ysin𝚹 and y= -xsin𝚹+ycos𝚹*/
int x1,y1,x2,y2,x3,y3;
   x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);
    draw_tri(x1,y1,x2,y2,x3,y3);
   getch();
}
void main()
{
    int gd=0,gm,x1,y1,x2,y2,x3,y3;
    double s,c, angle;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(RED);
    printf("Enter coordinates of triangle: ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);
    setbkcolor(WHITE);
    cleardevice();
   draw_tri(x1,y1,x2,y2,x3,y3);
    getch();
    rotate_tri();
    closegraph();
}
