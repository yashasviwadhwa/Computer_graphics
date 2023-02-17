#include<graphics.h>
#include<conio.h>
#include<math.h>

main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    int x1=100,y1=200,x2=200,y2=200;
    int dx,dy,steps;
    int xinc,yinc;
    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>abs(dy)){
	steps=abs(dx);
    }
    else{
	steps=abs(dy);
    }
       xinc=dx/steps;
    yinc=dy/steps;
    for(int i=1;i<=steps;i++){
	putpixel(x1,y1,WHITE);
	x1+=xinc;
	y1+=yinc;
	// delay(50);
    }

    getch();
    closegraph();

    return 0;
}