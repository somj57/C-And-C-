#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a;
 clrscr();
 gotoxy(1,11);printf("*");
 gotoxy(1,12);printf("**");
 gotoxy(1,13);printf("***");
 gotoxy(1,14);printf("**");
 gotoxy(1,15);printf("*");
 for(i=11;i<=15;i++)
 {
  for(j=40;j<80;j++)
 { gotoxy(j,i);printf("*");}
 }
 getch();
 for(j=4;j<80;j++)
 {
  gotoxy(j,13);printf("-");delay(150);
  if(j>38)
  {
   for(i=11;i<16;i++)
   {
    gotoxy(j+1,i);printf(" ");
   }
  }
 }






 getch();
}