//FISH APP
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; // static file

    initgraph(&gd, &gm, data);

    int i, y = 200;
    for (i = 0; i < 300; i++)
    {
        // Fish 1
        line(150 + i, 250, 190 + i, 290);
        line(150 + i, 250, 90 + i, 310);
        line(90 + i, 270, 150 + i, 330);
        line(190 + i, 290, 150 + i, 330);
        line(90 + i, 310, 90 + i, 270);
        circle(170 + i, 290, 3);


        //-----------------Fish Tank Body---------------------
        // Border of tank
        line(50, 100, 50, 400);
        line(550, 100, 550, 400);
        line(50, 400, 550, 400);


        setfillstyle(SOLID_FILL,BLUE);
        floodfill(60, 390, WHITE);


        delay(50);       
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
