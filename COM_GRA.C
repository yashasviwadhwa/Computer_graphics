
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
//#inlcude<stdlib.h>
void circle2()
{
//The auto dectection  ofThe  Driver

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi\\");
circle(200,200,55);
getch();
closegraph();

}
void rectnagle2()
{

}
void line21()
{

}
void elpse2()
{
}
int main()

{
 int choice;
 clrscr();
 printf("Enter The choice");
 printf("\n1Enter  the cirlce");
 printf("\n2Enter  the rectangle");
 printf("\n3Enter the line");
 printf("\n4Enter  The elipse");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:circle2();
	break;
  case 2:rectnagle2();
       break;
   case 3:line21();
    break;
    case 4: elpse2();
    break;
    default:
    printf("Please Try again");
  //    exit(0);


 }
  getch();
/* int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");*/



return 0;
}