#include <conio.h>
 #include<stdio.h>
int main(void)
{

//   char s[]="Yashasvi";
   gotoxy(-20,-20);
    clrscr();
//    printf(s"\n");
   printf("Current location  is , X: %d  Y: %d\r\n",wherex(), wherey());

   getch();

   return 0;
}
