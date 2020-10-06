#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=8;i<=24;i+=8)
 {for(j=1;j<=80;j++)
  { gotoxy(j,i);printf("*");}
 }

 for(i=1;i<=75;i++)
 {
  gotoxy(i,5);printf("  **");
  gotoxy(i,6);printf("  ***");
  gotoxy(i,7);printf("  0 0");

  gotoxy(i,12);printf("   *");
  gotoxy(i,13);printf("  ***");
  gotoxy(i,14);printf(" *   *");
  gotoxy(i,15);printf(" 0   0");

  gotoxy(i,21);printf(" **");
  gotoxy(i,22);printf(" ***");
  gotoxy(i,23);printf(" 0 0");
  delay(60);

 }        delay(200);
 gotoxy(1,5);printf(">-**");
 gotoxy(1,6);printf(">-***");
 gotoxy(1,7);printf(">-**");

 gotoxy(1,13);printf(">-**");
 gotoxy(1,14);printf(">-***");
 gotoxy(1,15);printf(">-**");

 gotoxy(1,21);printf(">-**");
 gotoxy(1,22);printf(">-***");
 gotoxy(1,23);printf(">-**");
 delay(100);

 for(i=6;i<=80;i++)
 {delay(50);

  gotoxy(i,5);printf(" ");
  gotoxy(i,6);printf("-");
  gotoxy(i,7);printf(" ");

  gotoxy(i,12);printf(" ");
  gotoxy(i,13);printf(" ");
  gotoxy(i,14);printf("-");
  gotoxy(i,15);printf(" ");

  gotoxy(i,21);printf(" ");
  gotoxy(i,22);printf("-");
  gotoxy(i,23);printf(" ");
 }






 getch();
}