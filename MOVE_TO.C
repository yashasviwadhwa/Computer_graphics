#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{

int gd=DETECT,gm;
char arr[100];
initgraph(&gd,&gm,"c:\\turboc3:\\BGI\\");
 sprintf(arr, "X = %d, Y = %d", getx(), gety());
 outtext(arr);
moveto(70, 40);
 sprintf(arr, "X = %d, Y = %d", getx(), gety());
 outtext(arr);
    getch();
   closegraph();
return 0;


}