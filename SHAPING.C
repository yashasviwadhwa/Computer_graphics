#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
int max_x,max_y;
void circle2()
{
int gd=DETECT,gm;
 max_x=getmaxx();
 max_y=getmaxy();
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
circle(300,245,134);
getch();
closegraph();
}
 void line2()
{
int gd=DETECT,gm;//the auto detection for the graphics
//int max_x=getmaxx();
//int max_y=getmaxy();
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");//
line(250,250,270,250);
getch();
closegraph();
}
 void pixel2()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
putpixel(50,80,RED);
putpixel(200,250,GREEN);
putpixel(250,250,CYAN);
putpixel(270,350,YELLOW);
putpixel(290,350,WHITE);
getch();
closegraph();
}
void rectangle2()
{
 int gd=DETECT,gm;
//int max_x=getmaxx();
//int max_y=getmaxy();
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
rectangle(250,150,450,250);
getch();
closegraph();
}
void  main()
{
int i=1;
 while(i<=4)
{
int choice;
//cleardevice();
clrscr();
textcolor(RED);
cprintf("Enter 1 for  the Circle\n");
cprintf("Enter  2 for the pixel\n");
cprintf("enter 3 for the rectangle\n");
cprintf("Enter 4 for The Line \n");
cprintf("Enter 5 to the exit");
cprintf("\nEnter The choice");
scanf("%d",&choice);

switch(choice)
{
 case 1:circle2();
   break;
  case 2:pixel2();
   break;
 case 3:rectangle2();
  break;
 case 4:line2();
  break;
default:

  printf("exit");
  getch();
  exit(0);
}
i++;
}
}

