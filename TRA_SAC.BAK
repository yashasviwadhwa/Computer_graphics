#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include<iostream.h>
#include<stdlib.h>
    float a, i, x, y;
void translate(int tri[][2])
{   for (int i = 0; i < 4; i++)
    {
	tri[i][0] -= 3;
	tri[i][1] -= 4;
    }


}
 void rotate (int tri[][2])
 {
    printf("Enter the angle");
    scanf("%f", &a);
    a = (3.14 * a) / 180;
    for (i = 0; i < 4; i++)
    {
	x = tri[i][0];
	y = tri[i][1];
	tri[i][0] = (x * cos(a) - y * sin(a));
	tri[i][1] = (x * sin(a) + y * cos(a));
    }
    for (i = 0; i < 4; i++)
    {
	tri[i][0] += 3;
	tri[i][1] += 4;
    }
 }
void triangle(int tri[3][2])


{
    line(tri[0][0], tri[0][1], tri[1][0], tri[1][1]);
    line(tri[3][0], tri[3][1], tri[1][0], tri[1][1]);
    line(tri[2][0], tri[2][1], tri[0][0], tri[0][1]);
    line(tri[2][0], tri[2][1], tri[3][0], tri[3][1]);
}
void scale(int tri[][2])
{
 double sx,sy;
    cout<<"Enter The value of sx and sy";
    cin>>sx>>sy;
    for (i = 0; i < 4; i++)
    {
	tri[i][0] -= 3*sx;
	tri[i][1] -= 4*sy;
	 }
    triangle(tri);
 }
void main()
{
    float a, i, x, y;
    int tri[4][2] = {	290, 10, 390, 10, 290, 110, 390, 110};
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    int choice;

    while(1)
    { cout<<"Enter 1 The transalate\n";
      cout<<"Enter 2 The rotate\n";
      cout<<"Enter 3 The scale\n";
      cout<<"Enter 4 to exit";
      cin>>choice;
      switch(choice)
    {
    case 1: translate(tri);
	 triangle(tri);
	 break;
 case 2:  rotate(tri);
	 triangle(tri);
	 break;

    case 3:scale(tri);
	triangle(tri);
	break;
	case 4:exit(0);
	break;
    cleardevice();
    getch();
    closegraph();
}
     }}