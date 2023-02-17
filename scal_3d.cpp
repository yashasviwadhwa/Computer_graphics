#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <process.h>
#include <graphics.h>

int x1, x2, y12, y2, mx, my, depth;

void draw();
void scale();

int main()
{
    int gd = DETECT, gm, c;
    initgraph(&gd, &gm, data);
    outtextxy(300, 10, "05921402020");
    printf("\n\t\t3D Transformation Scalling\n\n");
    printf("\nEnter 1st top value(x1,y12):");
    scanf("%d%d", &x1, &y12);
    printf("Enter right bottom value(x2,y2):");
    scanf("%d%d", &x2, &y2);
    depth = (x2 - x1) / 4;
    mx = (x1 + x2) / 2;
    my = (y12 + y2) / 2;
    draw();
    getch();
    scale();
    getch();
    return 0;
}

void draw()
{
    bar3d(x1, y12, x2, y2, depth, 1);
}

void scale()
{
    int x, y, a1, a2, b1, b2, dep;
    printf("\n\n Enter scalling co-ordinates:");
    scanf("%d%d", &x, &y);
    a1 = mx + (x1 - mx) * x;
    a2 = mx + (x2 - mx) * x;
    b1 = my + (y12 - my) * y;
    b2 = my + (y2 - my) * y;
    dep = (a2 - a1) / 4;
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);
    draw();
