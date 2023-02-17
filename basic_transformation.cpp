#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float a, x, y;
    int i;
    int lne[2][4] = {100, 100, 0, 0, 200, 100, 0, 0};
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, "C;\\turboc3\\bgi");
    
    outtextxy(150, 10, "Yahasvi wadhwa");
    outtextxy(300, 10, "0592142020");
    line(lne[0][0], lne[0][1], lne[1][0], lne[1][1]);
    for (i = 0; i < 2; i++)
    {
        lne[i][0] -= 2;
        lne[i][1] -= 3;
    }
    printf("Enter the angle:");
    scanf("%f", &a);
    a = (3.14 * a) / 180;
    for (i = 0; i < 2; i++)
    {
        x = lne[i][0];
        y = lne[i][1];
        lne[i][0] = (x * cos(a) - y * sin(a));
        lne[i][1] = (x * sin(a) + y * cos(a));
    }
    for (i = 0; i < 4; i++)
    {
        lne[i][0] += 2;
        lne[i][1] += 3;
    }
    line(lne[0][0], lne[0][1], lne[1][0], lne[1][1]);
    getch();
    closegraph();
    return 0;
}
