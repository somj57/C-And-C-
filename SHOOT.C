#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a;
 clrscr();
 getch();
 for(i=1;i<=80;i++)
 {delay(30);
  gotoxy(i,24);
  printf("*");
 }
 gotoxy(77,20);printf("0");
 gotoxy(76,21);printf("***");
 gotoxy(75,22);printf("* * *");
 gotoxy(76,23);printf("***");
 for(i=1;i<=71;i++)
 {
   gotoxy(i,22);delay(60);
   printf("-->");
 }




























 getch();
}