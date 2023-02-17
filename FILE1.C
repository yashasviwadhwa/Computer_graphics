#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void arc2()
{
int gd=DETECT,gm;
int x,y;
int font,direction,font_size;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(0,0,getmaxx(),getmaxy());
arc(250,250,0,300,100);
x=40;
y=400;

font=8; direction=0;
 font_size=2;
settextstyle(font,direction,font_size);
outtextxy(x,y,"05921402020");
outtextxy(x+200,y,"YASHASVI WADHWA");

getch();
}
void ellipses2()
{
 int gd=DETECT,gm;
 int x,y;
int font,direction,font_size;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

rectangle(0,0,getmaxx(),getmaxy());
ellipse(200,250,0,360,100,50);
x=20;
y=400;

font=8; direction=0;
 font_size=2;
settextstyle(font,direction,font_size);
outtextxy(x,y,"05921402020");
outtextxy(x+200,y,"YASHASVI WADHWA");

getch();
closegraph();
}
void circle2()
{
int gd=DETECT,gm;
// max_x=getmaxx();

// max_y=getmaxy();
 int x,y;
int font,direction,font_size;
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
rectangle(0,0,getmaxx(),getmaxy());
circle(300,245,134);
x=20;
y=400;

font=8; direction=0;
 font_size=2;
settextstyle(font,direction,font_size);
outtextxy(x,y,"05921402020");
outtextxy(x+200,y,"YASHASVI WADHWA");

getch();
closegraph();
}
 void line2()
{
int gd=DETECT,gm;//the auto detection for the graphics
//int max_x=getmaxx();
//int max_y=getmaxy();
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");//
rectangle(0,0,getmaxx(),getmaxy());
line(250,250,270,250);
getch();
closegraph();
}
 void pixel2()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
rectangle(0,0,getmaxx(),getmaxy());
putpixel(50,80,RED);
putpixel(100,80,GREEN);
putpixel(150,80,CYAN);
putpixel(250,80,YELLOW);
putpixel(290,80,WHITE);
putpixel(50,90,CYAN);
putpixel(70,90,LIGHTBLUE);
putpixel(100,80,LIGHTGREEN);
getch();
closegraph();
}
void rectangle2()
{
 int gd=DETECT,gm;
//int max_x=getmaxx();
//int max_y=getmaxy();
initgraph(&gd,&gm,"c:\\turboc3\\BGI\\");
rectangle(0,0,getmaxx(),getmaxy());
rectangle(250,150,450,250);
getch();
closegraph();
}
void  main()
{
int i=1;
 while(i)
{
int choice;

//cleardevice();
clrscr();
printf("Enter 1 for  the Circle\n");
printf("Enter  2 for the pixel\n");
printf("Enter 3 for the rectangle\n");
printf("Enter 4 for The Line \n");
printf("Enter 5 for the arc");
printf("\nEnter 6 for the Ellipses");
printf("\nEnter 7 to the exit");
printf("\nEnter The choice");
scanf("%d",&choice);
//
//getch();
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
 case 5:arc2();
    break;
 case 6:ellipses2();
    break;
default:

  printf("exit");
  getch();
  exit(0);
}
i++;
}
}

