#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,a=1,b=8,k;
  clrscr();
  for(i=1;i<=9;i++)
  {
    for(j=1;j<=7;j++)
    {
      if((i==1||i==9)||(j==i-1)||(j==b))
      { gotoxy(j,i);delay(50);printf("*");}
    }
    b--;
  }

for(k=1;k<10;k++)
{
  b=8;a=2;
  for(i=2;i<9;i++)
  {
   for(j=2;j<7;j++)
   {
     if(i<5)
     {
      if(j>=a&&j<b-1)
      { gotoxy(j,i);printf("*");}
     }
     if(i>5)
     {
      if(j>=b&&j<a-1)
      { gotoxy(j,i);printf(" ");}
     }
   }
   a++;b--;
  }
  delay(400);
  b=8;a=2;
  for(i=2;i<9;i++)
  {
   for(j=2;j<7;j++)
   {
     if(i<5)
     {
      if(j>=a&&j<b-1)
      { gotoxy(j,i);printf(" ");}
     }
     if(i>5)
     {
      if(j>=b&&j<a-1)
      { gotoxy(j,i);printf("*");}
     } delay(100);
   }
   a++;b--;
  }
}
  getch();
}