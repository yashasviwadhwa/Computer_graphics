#include<graphics.h>
#include<stdlib.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setcolor(13);
circle(300,50,100);
getch();
errorcode = graphresult();
 if( errorcode != grOk)
    {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));

      printf("Press any key to exit.");
      getch();
      exit(1);
    }
 getch();
closegraph();

 return 0;
}
