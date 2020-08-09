#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void end()
{
 clrscr();
 textbackground(WHITE);
 textcolor(BLACK);
 clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(26,7);printf("***************************");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,8);printf("*        THANKYOU         *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,9);printf("*                         *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,10);printf("*      TEAM MEMBERS:-     *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,11);printf("*    HARSH GIRI GOSWAMI   *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,12);printf("*    PRAKHAR SHRIVASTAV   *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,13);printf("*      SOMYA JAISWAL      *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,14);printf("*      SATYAM KHARE       *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,15);printf("*    PRATHMESH KULKARNI   *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,16);printf("*    ADITYA KUMAR DIXIT   *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,17);printf("*PRADEEP KUMAR VISHWKARMA *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,18);printf("*     AHATISAMUL HAQUE    *");sound(100);delay(210);nosound();sound(250);delay(100);nosound();delay(200);
 gotoxy(26,19);printf("***************************");sound(100);delay(210);nosound();sound(100);delay(250);nosound();sound(250);delay(100);nosound();sound(250);delay(1000);nosound();
 gotoxy(30,20);printf("INSPIRED BY: PAC-MAN");sound(100);delay(50);nosound();delay(50);
 gotoxy(15,21);printf("Big thanks to eveyone who motivated and guided us");
 getch();
 textbackground(BLACK);
 textcolor(WHITE);
 clrscr();exit(0);
}

void color(int r)
{
 int i,k,p,c=176;
 for(i=2;i<=24;++i)
 p=r%15;if(p==0)p=1;
  //C
 textcolor(p);
 gotoxy(17,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(17,12);
 cprintf("%c",c);
 gotoxy(17,13);
 cprintf("%c",c);
 gotoxy(17,14);
 cprintf("%c",c);
 gotoxy(17,15);
 cprintf("%c%c%c",c,c,c);

 //r
 gotoxy(22,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(22,12);
 cprintf("%c",c);
 gotoxy(24,12);cprintf("%c",c);
 gotoxy(22,13);
 cprintf("%c",c);
 gotoxy(22,14);
 cprintf("%c",c);
 gotoxy(22,15);
 cprintf("%c",c);

 //A
 gotoxy(27,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(27,12);
 cprintf("%c",c);
 gotoxy(29,12);
 cprintf("%c",c);
 gotoxy(27,13);
 cprintf("%c%c%c",c,c,c);
 gotoxy(27,14);
 cprintf("%c",c);
 gotoxy(29,14);
 cprintf("%c",c);
 gotoxy(27,15);
 cprintf("%c",c);
 gotoxy(29,15);
 cprintf("%c",c);

 //Z
 gotoxy(32,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(34,12);
 cprintf("%c",c);
 gotoxy(34,13);
 cprintf("%c",c);
 gotoxy(34,14);
 cprintf("%c",c);
 gotoxy(34,15);
 cprintf("%c%c%c",c,c,c);

 //Y
 gotoxy(39,11);
 cprintf("%c",c);
 gotoxy(41,11);
 cprintf("%c",c);
 gotoxy(39,12);
 cprintf("%c",c);
 gotoxy(41,12);
 cprintf("%c",c);
 gotoxy(39,13);
 cprintf("%c%c%c",c,c,c);
 gotoxy(41,14);
 cprintf("%c",c);
 gotoxy(39,15);
 cprintf("%c%c%c",c,c,c);

 //M
 gotoxy(46,11);
 cprintf("%c%c%c%c%c",c,c,c,c,c);
 gotoxy(46,12);
 cprintf("%c",c);
 gotoxy(48,12);
 cprintf("%c",c);
 gotoxy(50,12);
 cprintf("%c",c);
 gotoxy(46,13);
 cprintf("%c",c);
 gotoxy(48,13);
 cprintf("%c",c);
 gotoxy(50,13);
 cprintf("%c",c);
 gotoxy(46,14);
 cprintf("%c",c);
 gotoxy(50,14);
 cprintf("%c",c);
 gotoxy(46,15);
 cprintf("%c",c);
 gotoxy(50,15);
 cprintf("%c",c);

 //I
 gotoxy(53,11);
 cprintf("%c",c);
 gotoxy(53,12);
 cprintf("%c",c);
 gotoxy(53,13);
 cprintf("%c",c);
 gotoxy(53,14);
 cprintf("%c",c);
 gotoxy(53,15);
 cprintf("%c",c);

 //N
 gotoxy(56,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(56,12);
 cprintf("%c",c);
 gotoxy(58,12);
 cprintf("%c",c);
 gotoxy(56,13);
 cprintf("%c",c);
 gotoxy(58,13);
 cprintf("%c",c);
 gotoxy(56,14);
 cprintf("%c",c);
 gotoxy(58,14);
 cprintf("%c",c);
 gotoxy(56,15);
 cprintf("%c",c);
 gotoxy(58,15);
 cprintf("%c",c);


 //D
 gotoxy(61,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(61,12);
 cprintf("%c  %c",c,c);
 gotoxy(61,13);
 cprintf("%c  %c",c,c);
 gotoxy(61,14);
 cprintf("%c  %c",c,c);
 gotoxy(61,15);
 cprintf("%c%c%c",c,c,c);
 //sound(250);delay(1);nosound();
 //sound(200);delay(20);nosound();
 textcolor(WHITE);
}

void main()
{ textbackground(BLACK);textcolor(WHITE);clrscr();
 int i,x=13,y=14,j=0,k=1,a[81][25],r=0,x1=8,y1=22,e1=0,x11=8,y11=22;
int x2=73,y2=22,e2=0,x22=73,y22=22,x3=63,y3=5,e3=0,x33=63,y33=5,x4=40,y4=8,e4=0,x44=40,y44=8;
char q,c=176,cha,en1=15,en2=3,en3=1,en4=148,n[20];
clrscr();
_setcursortype(_NOCURSOR);
  textcolor(RED);
  for(i=1;i<=24;i++)
   {for(j=1;j<=80;j++)
     {if((j==1||j==80)||(i==1||i==24))
     {delay(15);
      cprintf("÷");sound(50);delay(1);nosound();
     }
     else
     printf(" ");
     }
   }
    j=5;
    for(i=2;i<=23;i++)
    {
     gotoxy(j,i);delay(10);
     if(i==1)printf("");
     else cprintf(" \\");

     gotoxy(79-j,i);delay(10);
     if(i==1)cprintf("/");
     else cprintf(" /");

     j+=3;
     printf("\n");
    }

 for(i=1;i<=15;i++)
{ textcolor(i);
 //c
 gotoxy(17,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(17,12);
 cprintf("%c",c);
 gotoxy(17,13);
 cprintf("%c",c);
 gotoxy(17,14);
 cprintf("%c",c);
 gotoxy(17,15);
 cprintf("%c%c%c",c,c,c);

 //r
 gotoxy(22,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(22,12);
 cprintf("%c",c);
 gotoxy(24,12);cprintf("%c",c);
 gotoxy(22,13);
 cprintf("%c",c);
 gotoxy(22,14);
 cprintf("%c",c);
 gotoxy(22,15);
 cprintf("%c",c);

 //A
 gotoxy(27,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(27,12);
 cprintf("%c",c);
 gotoxy(29,12);
 cprintf("%c",c);
 gotoxy(27,13);
 cprintf("%c%c%c",c,c,c);
 gotoxy(27,14);
 cprintf("%c",c);
 gotoxy(29,14);
 cprintf("%c",c);
 gotoxy(27,15);
 cprintf("%c",c);
 gotoxy(29,15);
 cprintf("%c",c);

 //Z
 gotoxy(32,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(34,12);
 cprintf("%c",c);
 gotoxy(34,13);
 cprintf("%c",c);
 gotoxy(34,14);
 cprintf("%c",c);
 gotoxy(34,15);
 cprintf("%c%c%c",c,c,c);

 //Y
 gotoxy(39,11);
 cprintf("%c",c);
 gotoxy(41,11);
 cprintf("%c",c);
 gotoxy(39,12);
 cprintf("%c",c);
 gotoxy(41,12);
 cprintf("%c",c);
 gotoxy(39,13);
 cprintf("%c%c%c",c,c,c);
 gotoxy(41,14);
 cprintf("%c",c);
 gotoxy(39,15);
 cprintf("%c%c%c",c,c,c);

 //M
 gotoxy(46,11);
 cprintf("%c%c%c%c%c",c,c,c,c,c);
 gotoxy(46,12);
 cprintf("%c",c);
 gotoxy(48,12);
 cprintf("%c",c);
 gotoxy(50,12);
 cprintf("%c",c);
 gotoxy(46,13);
 cprintf("%c",c);
 gotoxy(48,13);
 cprintf("%c",c);
 gotoxy(50,13);
 cprintf("%c",c);
 gotoxy(46,14);
 cprintf("%c",c);
 gotoxy(50,14);
 cprintf("%c",c);
 gotoxy(46,15);
 cprintf("%c",c);
 gotoxy(50,15);
 cprintf("%c",c);

 //I
 gotoxy(53,11);
 cprintf("%c",c);
 gotoxy(53,12);
 cprintf("%c",c);
 gotoxy(53,13);
 cprintf("%c",c);
 gotoxy(53,14);
 cprintf("%c",c);
 gotoxy(53,15);
 cprintf("%c",c);

 //N
 gotoxy(56,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(56,12);
 cprintf("%c",c);
 gotoxy(58,12);
 cprintf("%c",c);
 gotoxy(56,13);
 cprintf("%c",c);
 gotoxy(58,13);
 cprintf("%c",c);
 gotoxy(56,14);
 cprintf("%c",c);
 gotoxy(58,14);
 cprintf("%c",c);
 gotoxy(56,15);
 cprintf("%c",c);
 gotoxy(58,15);
 cprintf("%c",c);


 //D
 gotoxy(61,11);
 cprintf("%c%c%c",c,c,c);
 gotoxy(61,12);
 cprintf("%c  %c",c,c);
 gotoxy(61,13);
 cprintf("%c  %c",c,c);
 gotoxy(61,14);
 cprintf("%c  %c",c,c);
 gotoxy(61,15);
 cprintf("%c%c%c",c,c,c);
 textcolor(WHITE);delay(100);gotoxy(55,23);cprintf("press space to continue\b");sound(100);delay(50);nosound();
 if(i==15)i=1;
 if(kbhit())
 {clrscr();break;}
}
l100:textbackground(BLACK);clrscr();textcolor(WHITE);
gotoxy(25,12);
cprintf("Enter the NAME: ");
cscanf("%s",n);

clrscr();
for(i=0;i<=24;++i)
{for(j=0;j<=80;++j)
 a[j][i]=0;
}
while(1)
{
gotoxy(30,12);
cprintf("UP - %c      LEFT - %c",24,25);
gotoxy(30,13);
cprintf("LEFT - %c    RIGHT - %c",27,26);
gotoxy(30,14);
cprintf("PRESS \"D\" TO CONTINUE");
gotoxy(31,15);cprintf("PRESS \"Q\" TO PAUSE");
gotoxy(30,16);cprintf("PRESS \"X\" TO EXIT");
c=getch();
if(c=='d'||c=='D')break;
if(c=='x'||c=='X')end();

} clrscr();
///////////



	for(i=1;i<=80;++i)
	{a[i][1]=1;a[i][2]=1;a[i][24]=1; }
 gotoxy(1,2);
 for(i=2;i<=24;i++)   // *    *
 {
  gotoxy(1,i);
  a[1][i]=1;
  gotoxy(80,i);
  a[80][i]=1;
 }

 gotoxy(1,2);
 for(i=2;i<=24;i++)   // *    *
 {
  gotoxy(1,i);
  if(a[1][i]==1)
  printf("%c",c);
  gotoxy(80,i);
  if(a[80][i]==1)
  printf("%c",c);
 }

 y=2;
 for(i=1;i<=4;i++)
 {                 //**********
  x=2;gotoxy(x,y);
  for(j=1;j<=7;j++)
  {
   a[x][y]=1;x++;
  }
   if(i==1||i==3)
   y=y+7;
   else if(i==2||i==4)
   y=y+8;
 }

 y=2;
 for(i=1;i<=4;i++)
 {                 //******
  gotoxy(2,y);
  for(j=1;j<=7;j++)
  {
   if(a[2][y]==1)
   printf("%c",c);
  }

   if(i==1||i==3)
   y=y+7;
   else if(i==2||i==4)
   y=y+8;
 }


 for(i=2;i<=24;i++)  //***
 {                   //***

  if(i==2||i==3||i==23||i==24)
  {

   gotoxy(9,i);
   a[9][i]=1;
   gotoxy(10,i);
   a[10][i]=1;
  }

  else if(i==8||i==10||i==16||i==18)
  {
    gotoxy(8,i);
    a[8][i]=1;
    gotoxy(9,i);
    a[9][i]=1;
    gotoxy(10,i);
    a[10][i]=1;
  }

  else if(i==9||i==17)
  {
  gotoxy(8,i);
  a[8][i]=1;
  gotoxy(10,i);
  a[10][i]=1;
 }
}


for(i=2;i<=24;i++)  //***
 {                   //***

  if(i==2||i==3||i==23||i==24)
  {
   gotoxy(9,i);
   if(a[9][i]==1)
   printf("%c%c",c,c);
  }

  else if(i==8||i==10||i==16||i==18)
  {
    gotoxy(8,i);
    if(a[8][i]==1)
    printf("%c%c%c",c,c,c);
  }

  else if(i==9||i==17)
  {
  gotoxy(8,i);
  if(a[8][i]==1)
  printf("%c %c",c,c);
 }
}

 for(i=4;i<=22;i++)
 {
  x=2;gotoxy(x,i);
  for(j=1;j<=5;j++)
  {
   if(i==4||i==6||i==12||i==14||i==20||i==22)
   a[x][i]=1;x++;
  }
   if(i==5||i==13||i==21)
   {
    gotoxy(6,i);
    a[6][i]=1;
   }
 }

 for(i=4;i<=22;i++)
 {
  gotoxy(2,i);
  for(j=1;j<=5;j++)
  {
   if(i==4||i==6||i==12||i==14||i==20||i==22)
   {if(a[2][i]==1)
   printf("%c",c);}
  }
   if(i==5||i==13||i==21)
   {
    gotoxy(6,i);
    {if(a[6][i]==1)
    printf("%c",c);}
   }
 }

 for(i=7;i<=12;i++)
 {
  gotoxy(i,13);
  a[i][13]=1;
 }
 for(i=11;i<=15;i++)
 {
  gotoxy(13,i);
  a[13][i]=1;
 }
 gotoxy(14,11);
 a[14][11]=1;
 gotoxy(14,15);
 a[14][15]=1;


 for(i=7;i<=12;i++)
 {
  gotoxy(i,13);
  if(a[i][13]==1)
  printf("%c",c);
 }
 for(i=11;i<=15;i++)
 {
  gotoxy(13,i);
  if(a[13][i]==1)
  printf("%c",c);
 }
 gotoxy(14,11);
 if(a[14][11]==1)
  printf("%c",c);
 gotoxy(14,15);
 if(a[14][15]==1)
  printf("%c",c);



 y=2;
 for(i=1;i<=4;i++)
 {                 //******
  x=73;gotoxy(x,y);
  for(j=1;j<=7;j++)
  {
   a[x][y]=1;x++;
  }
   if(i==1||i==3)
   y=y+7;
   else if(i==2||i==4)
   y=y+8;
 }


 y=2;
 for(i=1;i<=4;i++)
 {                 //******
  gotoxy(73,y);
  for(j=1;j<=7;j++)
  {
   if(a[73][y]==1)
   printf("%c",c);
  }
   if(i==1||i==3)
   y=y+7;
   else if(i==2||i==4)
   y=y+8;
 }


 for(i=2;i<=24;i++)  //***
 {                   //***

  if(i==2||i==3||i==23||i==24)
  {
   gotoxy(71,i);
   a[71][i]=1;
   gotoxy(72,i);
   a[72][i]=1;
  }

  else if(i==8||i==10||i==16||i==18)
  {
    gotoxy(71,i);
    a[71][i]=1;
    gotoxy(72,i);
    a[72][i]=1;
    gotoxy(73,i);
    a[73][i]=1;
  }

  else if(i==9||i==17)
  {
  gotoxy(71,i);
  a[71][i]=1;
  gotoxy(73,i);
   a[73][i]=1;
 }
}

for(i=2;i<=24;i++)  //***
 {                   //***

  if(i==2||i==3||i==23||i==24)
  {
   gotoxy(71,i);
   if(a[71][i]==1)
   printf("%c%c",c,c);
  }

  else if(i==8||i==10||i==16||i==18)
  {
    gotoxy(71,i);
    if(a[71][i]==1)
    printf("%c%c%c",c,c,c);
  }

  else if(i==9||i==17)
  {
  gotoxy(71,i);
  if(a[71][i]==1)
  printf("%c %c",c,c);
  }
}

 for(i=4;i<=22;i++)
 {
  x=75;gotoxy(x,i);
  for(j=1;j<=5;j++)
  {
   if(i==4||i==6||i==12||i==14||i==20||i==22)
   a[x][i]=1;x++;
  }
   if(i==5||i==13||i==21)
   {
    gotoxy(75,i);
    a[75][i]=1;
   }
 }

 for(i=4;i<=22;i++)
 {
  gotoxy(75,i);
  for(j=1;j<=5;j++)
  {
   if(i==4||i==6||i==12||i==14||i==20||i==22)
   {if(a[75][i]==1)
   printf("%c",c);}
  }
   if(i==5||i==13||i==21)
   {
    gotoxy(75,i);
    {if(a[75][i]==1)
    printf("%c",c);}
   }
 }


  for(i=11;i<=15;i++)
 {
  gotoxy(68,i);
  a[68][i]=1;
 }
 for(i=69;i<=74;i++)
 {
  gotoxy(i,13);
  a[i][13]=1;
 }
 gotoxy(67,11);
 a[67][11]=1;
 gotoxy(67,15);
 a[67][15]=1;



 for(i=11;i<=15;i++)
 {
  gotoxy(i,68);
  if(a[i][68]==1)
  printf("%c",c);
 }
 for(i=69;i<=74;i++)
 {
  gotoxy(13,i);
  if(a[13][i]==1)
  printf("%c",c);
 }
 gotoxy(67,11);
 if(a[67][11]==1)
  printf("%c",c);
 gotoxy(67,15);
 if(a[67][15]==1)
  printf("%c",c);


 for(i=14;i<=27;i++)  //*        *
 {                    //**********
  gotoxy(i,3);
  a[i][3]=1;
 }
 gotoxy(14,2);
 a[14][2]=1;
 gotoxy(27,2);
 a[27][2]=1;


 for(i=14;i<=27;i++)  //*        *
 {                    //**********
  gotoxy(i,3);
  if(a[i][3]==1)
  printf("%c",c);
 }
 gotoxy(14,2);
 if(a[14][2]==1)
 printf("%c",c);
 gotoxy(27,2);
 if(a[27][2]==1)
 printf("%c",c);



 for(i=14;i<=27;i++)  //*        *
 {                    //**********
  gotoxy(i,23);
  a[i][23]=1;
 }
 gotoxy(14,24);
 a[14][24]=1;
 gotoxy(27,24);
 a[27][24]=1;



 for(i=14;i<=27;i++)  //*        *
 {                    //**********
  gotoxy(i,23);
  if(a[i][23]==1)
  printf("%c",c);
 }
 gotoxy(14,24);
 if(a[14][24]==1)
 printf("%c",c);
 gotoxy(27,24);
 if(a[27][24]==1)
 printf("%c",c);



 for(i=55;i<=67;i++)  //*        *
 {                    //**********
  gotoxy(i,3);
  a[i][3]=1;
 }
 gotoxy(55,2);
 a[55][2]=1;
 gotoxy(67,2);
 a[67][2]=1;



 for(i=55;i<=67;i++)  //*        *
 {                    //**********
  gotoxy(i,3);
  if(a[i][3]==1)
  printf("%c",c);
 }
 gotoxy(55,2);
 if(a[55][2]==1)
 printf("%c",c);
 gotoxy(67,2);
 if(a[67][2]==1)
 printf("%c",c);


 for(i=55;i<=67;i++)  //*        *
 {                    //**********
  gotoxy(i,23);
  a[i][23]=1;
 }
 gotoxy(55,24);
 a[55][24]=1;
 gotoxy(67,24);
 a[67][24]=1;


 for(i=55;i<=67;i++)  //*        *
 {                    //**********
  gotoxy(i,23);
  if(a[i][23]==1)
  printf("%c",c);
 }
 gotoxy(55,24);
 if(a[55][24]==1)
 printf("%c",c);
 gotoxy(67,24);
 if(a[67][24]==1)
 printf("%c",c);


 for(i=30;i<=51;i++)     //**
 {                       //**
  for(j=2;j<=4;j++)      //**
  {                      //**
  if(i==30||i==31||i==35||i==36||i==40||i==41||i==45||i==46||i==50||i==51)
   {
    gotoxy(i,j);
    a[i][j]=1;
    gotoxy(i+1,j);
    a[i+1][j]=1;
   }
  }
 }



 for(i=30;i<=51;i++)     //**
 {                       //**
  for(j=2;j<=4;j++)      //**
  {                      //**
  if(i==30||i==31||i==35||i==36||i==40||i==41||i==45||i==46||i==50||i==51)
   {
    gotoxy(i,j);
    if(a[i][j]==1)
    printf("%c%c",c,c);
   }
  }
 }




 for(i=30;i<=51;i++)         //**
 {                           //**
  for(j=22;j<=24;j++)        //**
  {
  if(i==30||i==31||i==35||i==36||i==40||i==41||i==45||i==46||i==50||i==51)
   {
    gotoxy(i,j);
    a[i][j]=1;
    gotoxy(i+1,j);
    a[i+1][j]=1;
   }
  }
 }




 for(i=30;i<=51;i++)            //**
 {                              //**
  for(j=22;j<=24;j++)           //**
  {
  if(i==30||i==31||i==35||i==36||i==40||i==41||i==45||i==46||i==50||i==51)
   {
    gotoxy(i,j);
    if(a[i][j]==1)
    printf("%c%c",c,c);
   }
  }
 }
//1
 for(i=12;i<=15;i++)
 {
  for(j=5;j<=8;j++)
  {
   if(i==12 || i==15)
   {gotoxy(i,j);
   a[i][j]=1;}
   else if((i==13 || i==14) && (j==5 || j==8))
   {gotoxy(i,j);
   a[i][j]=1;
   }
  }
 }

 for(i=12;i<=15;i++)
 {
  for(j=5;j<=8;j++)
  {
   if(i==12 || i==15)
   {
     gotoxy(i,j);
     if(a[i][j]==1)
     printf("%c",c);
   }
   else if((i==13 || i==14) && (j==5 || j==8))
   {gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }
}

//2
for(i=12;i<=15;i++)
 {
  for(j=18;j<=21;j++)
  {
   if(i==12 || i==15)
   {gotoxy(i,j);
   a[i][j]=1;}
   else if((i==13 || i==14) && (j==18 || j==21))
   {gotoxy(i,j);
   a[i][j]=1;
   }
  }
 }

 for(i=12;i<=15;i++)
 {
  for(j=18;j<=21;j++)
  {
   if(i==12 || i==15)
   {
     gotoxy(i,j);
     if(a[i][j]==1)
     printf("%c",c);
   }
   else if((i==13 || i==14) && (j==18 || j==21))
   {gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }
}

//3
for(i=66;i<=69;i++)
 {
  for(j=5;j<=8;j++)
  {
   if(i==66 || i==69)
   {gotoxy(i,j);
   a[i][j]=1;}
   else if((i==67 || i==68) && (j==5 || j==8))
   {gotoxy(i,j);
   a[i][j]=1;
   }
  }
 }

 for(i=66;i<=69;i++)
 {
  for(j=5;j<=8;j++)
  {
   if(i==66 || i==69)
   {
     gotoxy(i,j);
     if(a[i][j]==1)
     printf("%c",c);
   }
   else if((i==67 || i==68) && (j==5 || j==8))
   {gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }
}

//4
for(i=66;i<=69;i++)
 {
  for(j=18;j<=21;j++)
  {
   if(i==66 || i==69)
   {gotoxy(i,j);
   a[i][j]=1;}
   else if((i==67 || i==68) && (j==18 || j==21))
   {gotoxy(i,j);
   a[i][j]=1;
   }
  }
 }

 for(i=66;i<=69;i++)
 {
  for(j=18;j<=21;j++)
  {
   if(i==66 || i==69)
   {
     gotoxy(i,j);
     if(a[i][j]==1)
     printf("%c",c);
   }
   else if((i==67 || i==68) && (j==18 || j==21))
   {gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }
}





 for(i=18;i<=23;i++)    //*********
 {                      //*********
  for(j=7;j<=8;j++)
  {
   gotoxy(i,j);
   a[i][j]=1;
  }
 }


 for(i=18;i<=23;i++)    //*********
 {                      //*********
  for(j=7;j<=8;j++)
  {
   gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }


  for(i=18;i<=23;i++)    //*********
 {                       //*********
  for(j=18;j<=19;j++)
  {
   gotoxy(i,j);
   a[i][j]=1;
   printf("%c",c);
  }
 }

  for(i=18;i<=23;i++)    //*********
 {                       //*********
  for(j=18;j<=19;j++)
  {
   gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }



  for(i=58;i<=63;i++)    //*********
 {                       //*********
  for(j=7;j<=8;j++)
  {
   gotoxy(i,j);
   a[i][j]=1;
   printf("%c",c);
  }
 }




  for(i=58;i<=63;i++)    //*********
 {                       //*********
  for(j=7;j<=8;j++)
  {
   gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }


  for(i=58;i<=63;i++)    //*********
 {                       //*********
  for(j=18;j<=19;j++)
  {
   gotoxy(i,j);
   a[i][j]=1;
   printf("%c",c);
  }
 }


  for(i=58;i<=63;i++)    //*********
 {                       //*********
  for(j=18;j<=19;j++)
  {
   gotoxy(i,j);
   if(a[i][j]==1)
   printf("%c",c);
  }
 }



 //******************************
 //******************************
 for(i=7;i<=8;i++)
 {
   for(j=26;j<=37;j++)
  {
   gotoxy(j,i);
   a[j][i]=1;
  }
 }

 for(i=7;i<=8;i++)
 {
   for(j=26;j<=37;j++)
  {
   gotoxy(j,i);
   if(a[j][i]==1)
   printf("%c",c);
  }
 }

 //2.
 for(i=18;i<=19;i++)
 {
   for(j=26;j<=37;j++)
  {
   gotoxy(j,i);
   a[j][i]=1;
  }
 }

 for(i=18;i<=19;i++)
 {
   for(j=26;j<=37;j++)
  {
   gotoxy(j,i);
   if(a[j][i]==1)
   printf("%c",c);
  }
 }

 //3.
 for(i=7;i<=8;i++)
 {
   for(j=44;j<=55;j++)
  {
   gotoxy(j,i);
   a[j][i]=1;
  }
 }

 for(i=7;i<=8;i++)
 {
   for(j=44;j<=55;j++)
  {
   gotoxy(j,i);
   if(a[j][i]==1)
   printf("%c",c);
  }
 }

 //4.
 for(i=18;i<=19;i++)
 {
   for(j=44;j<=55;j++)
  {
   gotoxy(j,i);
   a[j][i]=1;
  }
 }

 for(i=18;i<=19;i++)
 {
   for(j=44;j<=55;j++)
  {
   gotoxy(j,i);
   if(a[j][i]==1)
   printf("%c",c);
  }
 }

 //C
 gotoxy(17,11);
 a[17][11]=1;
 a[18][11]=1;
 a[19][11]=1;
 gotoxy(17,12);
 a[17][12]=1;
 gotoxy(17,13);
 a[17][13]=1;
 gotoxy(17,14);
 a[17][14]=1;
 gotoxy(17,15);
 a[17][15]=1;
 a[18][15]=1;
 a[19][15]=1;

 //C
 gotoxy(17,11);
 if(a[17][11]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(17,12);
 if(a[17][12]==1)
 printf("%c",c);
 gotoxy(17,13);
 if(a[17][13]==1)
 printf("%c",c);
 gotoxy(17,14);
 if(a[17][14]==1)
 printf("%c",c);
 gotoxy(17,15);
 if(a[17][15]==1)
 printf("%c%c%c",c,c,c);


 //r
 gotoxy(22,11);
 a[22][11]=1;
 a[23][11]=1;
 a[24][11]=1;
 gotoxy(22,12);
 a[22][12]=1;
 a[24][12]=1;
 gotoxy(22,13);
 a[22][13]=1;
 gotoxy(22,14);
 a[22][14]=1;
 gotoxy(22,15);
 a[22][15]=1;


 //r
 gotoxy(22,11);
 if(a[22][11]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(22,12);
 if(a[22][12]==1)
 printf("%c %c",c,c);
 gotoxy(22,13);
 if(a[22][13]==1)
 printf("%c",c);
 gotoxy(22,14);
 if(a[22][14]==1)
 printf("%c",c);
 gotoxy(22,15);
 if(a[22][15]==1)
 printf("%c",c);


 //A
 gotoxy(27,11);
 a[27][11]=1;
 a[28][11]=1;
 a[29][11]=1;
 gotoxy(27,12);
 a[27][12]=1;
 a[29][12]=1;
 gotoxy(27,13);
 a[27][13]=1;
 a[28][13]=1;
 a[29][13]=1;
 gotoxy(27,14);
 a[27][14]=1;
 a[29][14]=1;
 gotoxy(27,15);
 a[27][15]=1;
 a[29][15]=1;


 //A
 gotoxy(27,11);
 if(a[27][11]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(27,12);
 if(a[27][12]==1)
 printf("%c %c",c,c);
 gotoxy(27,13);
 if(a[27][13]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(27,14);
 if(a[27][14]==1)
 printf("%c %c",c,c);
 gotoxy(27,15);
 if(a[27][15]==1)
 printf("%c %c",c,c);


 //Z
 gotoxy(32,11);
 a[32][11]=1;
 a[33][11]=1;
 a[34][11]=1;
 gotoxy(34,12);
 a[34][12]=1;
 gotoxy(34,13);
 a[34][13]=1;
 gotoxy(34,14);
 a[34][14]=1;
 gotoxy(34,15);
 a[34][15]=1;
 a[35][15]=1;
 a[36][15]=1;


 //Z
 gotoxy(32,11);
 if(a[32][11]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(32,12);
 if(a[32][12]==1)
 printf("  %c",c);
 gotoxy(32,13);
 if(a[32][13]==1)
 printf("  %c",c);
 gotoxy(32,14);
 if(a[32][14]==1)
 printf("  %c",c);
 gotoxy(32,15);
 if(a[32][15]==1)
 printf("  %c%c%c",c,c,c);


 //Y
 gotoxy(39,11);
 a[39][11]=1;
 a[41][11]=1;
 gotoxy(39,12);
 a[39][12]=1;
 a[41][12]=1;
 gotoxy(39,13);
 a[39][13]=1;
 a[40][13]=1;
 a[41][13]=1;
 gotoxy(39,14);
 a[41][14]=1;
 gotoxy(39,15);
 a[41][15]=1;
 a[40][15]=1;
 a[39][15]=1;


 //Y
 gotoxy(39,11);
 if(a[39][11]==1)
 printf("%c %c",c,c);
 gotoxy(39,12);
 if(a[39][12]==1)
 printf("%c %c",c,c);
 gotoxy(39,13);
 if(a[39][13]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(39,14);
 if(a[39][14]==1)
 printf("  %c",c);
 gotoxy(39,15);
 if(a[39][15]==1)
 printf("%c%c%c",c,c,c);


 //M
 gotoxy(46,11);
 a[46][11]=1;
 a[47][11]=1;
 a[48][11]=1;
 a[49][11]=1;
 a[50][11]=1;
 gotoxy(46,12);
 a[46][12]=1;
 a[48][12]=1;
 a[50][12]=1;
 gotoxy(46,13);
 a[46][13]=1;
 a[48][13]=1;
 a[50][13]=1;
 gotoxy(46,14);
 a[46][14]=1;
 a[50][14]=1;
 gotoxy(46,15);
 a[46][15]=1;
 a[50][15]=1;



 //M
 gotoxy(46,11);
 if(a[46][11]==1)
 printf("%c%c%c%c%c",c,c,c,c,c);
 gotoxy(46,12);
 if(a[46][12]==1)
 printf("%c %c %c",c,c,c);
 gotoxy(46,13);
 if(a[46][13]==1)
 printf("%c %c %c",c,c,c);
 gotoxy(46,14);
 if(a[46][14]==1)
 printf("%c   %c",c,c);
 gotoxy(46,15);
 if(a[46][15]==1)
 printf("%c   %c",c,c);



 //I
 gotoxy(53,11);
 a[53][11]=1;
 gotoxy(53,12);
 a[53][12]=1;
 gotoxy(53,13);
 a[53][13]=1;
 gotoxy(53,14);
 a[53][14]=1;
 gotoxy(53,15);
 a[53][15]=1;



 //I
 gotoxy(53,11);
 if(a[53][11]==1)
 printf("%c",c);
 gotoxy(53,12);
 if(a[53][12]==1)
 printf("%c",c);
 gotoxy(53,13);
 if(a[53][13]==1)
 printf("%c",c);
 gotoxy(53,14);
 if(a[53][14]==1)
 printf("%c",c);
 gotoxy(53,15);
 if(a[53][15]==1)
 printf("%c",c);



 //N
 gotoxy(56,11);
 a[56][11]=1;
 a[57][11]=1;
 a[58][11]=1;
 gotoxy(56,12);
 a[56][12]=1;
 a[58][12]=1;
 gotoxy(56,13);
 a[56][13]=1;
 a[58][13]=1;
 gotoxy(56,14);
 a[56][14]=1;
 a[58][14]=1;
 gotoxy(56,15);
 a[56][15]=1;
 a[58][15]=1;


 //N
 gotoxy(56,11);
 if(a[56][11]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(56,12);
 if(a[56][12]==1)
 printf("%c %c",c,c);
 gotoxy(56,13);
 if(a[56][13]==1)
 printf("%c %c",c,c);
 gotoxy(56,14);
 if(a[56][14]==1)
 printf("%c %c",c,c);
 gotoxy(56,15);
 if(a[56][15]==1)
 printf("%c %c",c,c);



 //D
 gotoxy(61,11);
 a[61][11]=1;
 a[62][11]=1;
 a[63][11]=1;
 gotoxy(61,12);
 a[61][12]=1;
 a[64][12]=1;
 gotoxy(61,13);
 a[61][13]=1;
 a[64][13]=1;
 gotoxy(61,14);
 a[61][14]=1;
 a[64][14]=1;
 gotoxy(61,15);
 a[61][15]=1;
 a[62][15]=1;
 a[63][15]=1;


 //D
 gotoxy(61,11);
 if(a[61][11]==1)
 printf("%c%c%c",c,c,c);
 gotoxy(61,12);
 if(a[61][12]==1)
 printf("%c  %c",c,c);
 gotoxy(61,13);
 if(a[61][13]==1)
 printf("%c  %c",c,c);
 gotoxy(61,14);
 if(a[61][14]==1)
 printf("%c  %c",c,c);
 gotoxy(61,15);
 if(a[61][15]==1)
 printf("%c%c%c",c,c,c);

a[80][24]=1;


a[9][9]=9;
a[9][17]=9;
for(i=2;i<=5;++i)
{a[i][5]=9;
}

for(i=2;i<=5;++i)
{a[i][13]=9;
}

for(i=2;i<=5;++i)
{a[i][21]=9;
}


a[72][9]=9;
a[72][17]=9;
for(i=76;i<=79;++i)
{a[i][5]=9;
}

for(i=76;i<=79;++i)
{a[i][13]=9;
}

for(i=76;i<=79;++i)
{a[i][21]=9;
}

a[28][12]=9;  ///////A
for(i=12;i<=14;++i)
{for(j=62;j<=63;++j)
a[j][i]=9;
}
for(i=26;i<=36;i++)
a[i][22]=6;

gotoxy(13,6);
a[13][6]=9;
gotoxy(14,6);
a[14][6]=9;
gotoxy(13,7);
a[13][7]=9;
gotoxy(14,7);
a[14][7]=9;

gotoxy(13,19);
a[13][19]=9;
gotoxy(14,19);
a[14][19]=9;
gotoxy(13,20);
a[13][20]=9;
gotoxy(14,20);
a[14][20]=9;

gotoxy(67,19);
a[67][19]=9;
gotoxy(68,19);
a[68][19]=9;
gotoxy(67,20);
a[67][20]=9;
gotoxy(68,20);
a[68][20]=9;

a[67][6]=9;a[68][6]=9;a[67][7]=9;a[68][7]=9;
a[35][22]=1;a[31][22]=1;a[30][22]=1;a[32][22]=1;a[36][22]=1;
/////////////
x=2;y=3;
for(i=2;i<=24;++i)
{for(j=1;j<=80;++j)
{if(a[j][i]==1)
{gotoxy(j,i);printf("%c",176);}
else if(a[j][i]==9)
printf(" ");
else
{gotoxy(j,i);printf("%c",250);}
}
}
gotoxy(x,y);textcolor(YELLOW);cprintf("");
while(1)
{gotoxy(1,1);textcolor(LIGHTCYAN);cprintf("%s",n);textcolor(WHITE);

	  while(1)
	  { l64:
	  x4=x44;y4=y44;
	  if(e4==0)
	  ++y4;
	  else if(e4==2)
	  --y4;
	  else if(e4==1)
	  --x4;
	  else
	  ++x4;
	  if(a[x4][y4]==1)
	  {e4=rand()%4;goto l64;}
	  if(x4==x&&y4==y)
	  goto l1;
	  if(x44==x&&y44==y)
	  goto l1;
	  gotoxy(x4,y4);
	  textcolor(RED);cprintf("%c",en4);textcolor(WHITE);
	  gotoxy(x44,y44);
	  if(a[x44][y44]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  x44=x4;y44=y4;

	  l63:
	  x3=x33;y3=y33;
	  if(e3==0)
	  ++y3;
	  else if(e3==2)
	  --y3;
	  else if(e3==1)
	  --x3;
	  else
	  ++x3;
	  if(a[x3][y3]==1)
	  {e3=rand()%4;goto l63;}
	  gotoxy(x3,y3);
	  textcolor(RED);cprintf("%c",en3);textcolor(WHITE);
	  gotoxy(x33,y33);
	  if(a[x33][y33]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x3==x&&y3==y)
	  goto l1;
	  if(x33==x&&y33==y)
	  goto l1;
	  x33=x3;y33=y3;

	  l62:
	  x2=x22;y2=y22;
	  if(e2==0)
	  ++y2;
	  else if(e2==2)
	  --y2;
	  else if(e2==1)
	  --x2;
	  else
	  ++x2;
	  if(a[x2][y2]==1)
	  {e2=rand()%4;goto l62;}
	  gotoxy(x2,y2);
	  textcolor(RED);cprintf("%c",en2);textcolor(WHITE);
	  gotoxy(x22,y22);
	  if(a[x22][y22]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x2==x&&y2==y)
	  goto l1;
	  x22=x2;y22=y2;

	  l6:
	  x1=x11;y1=y11;
	  if(e1==0)
	  ++y1;
	  else if(e1==2)
	  --y1;
	  else if(e1==1)
	  --x1;
	  else
	  ++x1;
	  if(a[x1][y1]==1)
	  {e1=rand()%4;goto l6;}
	  gotoxy(x1,y1);
	  textcolor(RED);cprintf("%c",en1);textcolor(WHITE);
	  gotoxy(x11,y11);
	  if(a[x11][y11]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x1==x&&y1==y)
	  goto l1;
	  if(x11==x&&y11==y)
	  goto l1;
	  x11=x1;y11=y1;
	   delay(100);
	  if(kbhit())
	  break;}

	  c=getch();
switch(c)
{ case 'Q':while(1){
				    sound(1500);
				    delay(110);
				    nosound();
				    sound(500);
				    delay(200);
				    nosound();
				    sound(2200);
				    delay(150);
				    nosound();
		     q=getch();
		     if(q=='q'||q=='Q'){
				    break;}
		     }break;
  case 'q':while(1){

				    sound(1500);
				    delay(110);
				    nosound();
				    sound(500);
				    delay(200);
				    nosound();
				    sound(2200);
				    delay(150);
				    nosound();
		     q=getch();
		     if(q=='q'||q=='Q'){
				    break;}break;
		     }
  case 72:while(1)
	  {if(r==500)goto l1;--y;
	  if(a[x][y]==1)
	  {++y;break;}
	  gotoxy(x,1+y);
	   cprintf(" ");
	   a[x][y]=2;
	  gotoxy(x,y);
	  textcolor(YELLOW);cprintf("\b");textcolor(WHITE);
	  /////////////////
	  l24:
	  x4=x44;y4=y44;
	  if(e4==0)
	  ++y4;
	  else if(e4==2)
	  --y4;
	  else if(e4==1)
	  --x4;
	  else
	  ++x4;
	  if(a[x4][y4]==1)
	  {e4=rand()%4;goto l24;}
	  gotoxy(x4,y4);
	  textcolor(RED);cprintf("%c",en4);textcolor(WHITE);
	  gotoxy(x44,y44);
	  if(a[x44][y44]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x4==x&&y4==y)
	  goto l1;
	  if(x44==x&&y44==y)
	  goto l1;
	  x44=x4;y44=y4;

	  l23:
	  x3=x33;y3=y33;
	  if(e3==0)
	  ++y3;
	  else if(e3==2)
	  --y3;
	  else if(e3==1)
	  --x3;
	  else
	  ++x3;
	  if(a[x3][y3]==1)
	  {e3=rand()%4;goto l23;}
	  gotoxy(x3,y3);
	  textcolor(RED);cprintf("%c",en3);textcolor(WHITE);
	  gotoxy(x33,y33);
	  if(a[x33][y33]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x3==x&&y3==y)
	  goto l1;
	  if(x33==x&&y33==y)
	  goto l1;
	  x33=x3;y33=y3;

	  l22:
	  x2=x22;y2=y22;
	  if(e2==0)
	  ++y2;
	  else if(e2==2)
	  --y2;
	  else if(e2==1)
	  --x2;
	  else
	  ++x2;
	  if(a[x2][y2]==1)
	  {e2=rand()%4;goto l22;}
	  gotoxy(x2,y2);
	  textcolor(RED);cprintf("%c",en2);textcolor(WHITE);
	  gotoxy(x22,y22);
	  if(a[x22][y22]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x2==x&&y2==y)
	  goto l1;
	  if(x22==x&&y22==y)
	  goto l1;
	  x22=x2;y22=y2;

	  l2:
	  x1=x11;y1=y11;
	  if(e1==0)
	  ++y1;
	  else if(e1==2)
	  --y1;
	  else if(e1==1)
	  --x1;
	  else
	  ++x1;
	  if(a[x1][y1]==1)
	  {e1=rand()%4;
	  goto l2;} /////////////
	  gotoxy(x1,y1);
	  textcolor(RED);cprintf("%c",en1);textcolor(WHITE);
	  gotoxy(x11,y11);
	  if(a[x11][y11]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x1==x&&y1==y)
	  goto l1;
	  if(x11==x&&y11==y)
	  goto l1;
	  x11=x1;y11=y1;
for(r=0,i=2;i<=24;++i)
{for(k=1;k<=80;++k)
{if(a[k][i]==2)
++r;}color(r);
}
gotoxy(20,1);
printf("Food=%d",r);
	    sound(100);delay(10);nosound();   	  delay(70);
	 if(kbhit())
	 break;}break;
case 75:while(1)
	  {if(r==500)goto l1;--x;
	  if(a[x][y]==1)
	  {++x;break;}//goto l1;
	  gotoxy(1+x,y);
	  cprintf(" ");
	   a[x][y]=2;
	  gotoxy(x,y);
	  textcolor(YELLOW);cprintf("\b");textcolor(WHITE);
	  l34:
	  x4=x44;y4=y44;
	  if(e4==0)
	  ++y4;
	  else if(e4==2)
	  --y4;
	  else if(e4==1)
	  --x4;
	  else
	  ++x4;
	  if(a[x4][y4]==1)
	  {e4=rand()%4;goto l34;}
	  gotoxy(x4,y4);
	  textcolor(RED);cprintf("%c",en4);textcolor(WHITE);
	  gotoxy(x44,y44);
	  if(a[x44][y44]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x4==x&&y4==y)
	  goto l1;
	  if(x44==x&&y44==y)
	  goto l1;
	  x44=x4;y44=y4;

	  l33:
	  x3=x33;y3=y33;
	  if(e3==0)
	  ++y3;
	  else if(e3==2)
	  --y3;
	  else if(e3==1)
	  --x3;
	  else
	  ++x3;
	  if(a[x3][y3]==1)
	  {e3=rand()%4;goto l33;}
	  gotoxy(x3,y3);
	  textcolor(RED);cprintf("%c",en3);textcolor(WHITE);
	  gotoxy(x33,y33);
	  if(a[x33][y33]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x3==x&&y3==y)
	  goto l1;
	  if(x33==x&&y33==y)
	  goto l1;
	  x33=x3;y33=y3;

	  l32:
	  x2=x22;y2=y22;
	  if(e2==0)
	  ++y2;
	  else if(e2==2)
	  --y2;
	  else if(e2==1)
	  --x2;
	  else
	  ++x2;
	  if(a[x2][y2]==1)
	  {e2=rand()%4;goto l32;}
	  gotoxy(x2,y2);
	  textcolor(RED);cprintf("%c",en2);textcolor(WHITE);
	  gotoxy(x22,y22);
	  if(a[x22][y22]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x2==x&&y2==y)
	  goto l1;
	  if(x22==x&&y22==y)
	  goto l1;
	  x22=x2;y22=y2;

	  l3:
	  x1=x11;y1=y11;
	  if(e1==0)
	  ++y1;
	  else if(e1==2)
	  --y1;
	  else if(e1==1)
	  --x1;
	  else
	  ++x1;
	  if(a[x1][y1]==1)
	  {e1=rand()%4;goto l3;} /////////////
	  gotoxy(x1,y1);
	  textcolor(RED);cprintf("%c",en1);textcolor(WHITE);
	  gotoxy(x11,y11);
	  if(a[x11][y11]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x1==x&&y1==y)
	  goto l1;
	  if(x11==x&&y11==y)
	  goto l1;
	  x11=x1;y11=y1;
	   delay(70);
for(r=0,i=2;i<=24;++i)
{for(k=1;k<=80;++k)
{if(a[k][i]==2)
++r;}color(r);
}
gotoxy(20,1);
printf("Food=%d",r);
sound(100);delay(10);nosound();
	  if(kbhit())
	  break;}break;
case 80:while(1)
	  {if(r==500)goto l1;++y;
	  if(a[x][y]==1)
	  {--y;break;}//goto l1;
	  gotoxy(x,y-1);
	  cprintf(" ");
	   a[x][y]=2;
	  gotoxy(x,y);
	  textcolor(YELLOW);cprintf("\b");textcolor(WHITE);
	  l44:
	  x4=x44;y4=y44;
	  if(e4==0)
	  ++y4;
	  else if(e4==2)
	  --y4;
	  else if(e4==1)
	  --x4;
	  else
	  ++x4;
	  if(a[x4][y4]==1)
	  {e4=rand()%4;goto l44;}
	  gotoxy(x4,y4);
	  textcolor(RED);cprintf("%c",en4);textcolor(WHITE);
	  gotoxy(x44,y44);
	  if(a[x44][y44]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x4==x&&y4==y)
	  goto l1;
	  if(x44==x&&y44==y)
	  goto l1;
	  x44=x4;y44=y4;

	  l43:
	  x3=x33;y3=y33;
	  if(e3==0)
	  ++y3;
	  else if(e3==2)
	  --y3;
	  else if(e3==1)
	  --x3;
	  else
	  ++x3;
	  if(a[x3][y3]==1)
	  {e3=rand()%4;goto l43;}
	  gotoxy(x3,y3);
	  textcolor(RED);cprintf("%c",en3);textcolor(WHITE);
	  gotoxy(x33,y33);
	  if(a[x33][y33]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x3==x&&y3==y)
	  goto l1;
	  if(y33==y&&x33==x)
	  {goto l1;}
	  x33=x3;y33=y3;

	  l42:
	  x2=x22;y2=y22;
	  if(e2==0)
	  ++y2;
	  else if(e2==2)
	  --y2;
	  else if(e2==1)
	  --x2;
	  else
	  ++x2;
	  if(a[x2][y2]==1)
	  {e2=rand()%4;goto l42;}
	  gotoxy(x2,y2);
	  textcolor(RED);cprintf("%c",en2);textcolor(WHITE);
	  gotoxy(x22,y22);
	  if(a[x22][y22]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x2==x&&y2==y)
	  goto l1;
	  if(y22==y&&x22==x)
	  {goto l1;}
	  x22=x2;y22=y2;

	  l4:
	  x1=x11;y1=y11;
	  if(e1==0)
	  ++y1;
	  else if(e1==2)
	  --y1;
	  else if(e1==1)
	  --x1;
	  else
	  ++x1;
	  if(a[x1][y1]==1)
	  {e1=rand()%4;goto l4;} /////////////
	  gotoxy(x1,y1);
	  textcolor(RED);cprintf("%c",en1);textcolor(WHITE);
	  gotoxy(x11,y11);
	  if(a[x11][y11]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x1==x&&y1==y)
	  goto l1;
	  if(y11==y&&x11==x)
	  {goto l1;}
	  x11=x1;y11=y1;
	    delay(70);
for(r=0,i=2;i<=24;++i)
{for(k=1;k<=80;++k)
{if(a[k][i]==2)
++r;}color(r);
}
gotoxy(20,1);
printf("Food=%d",r);
sound(100);delay(10);nosound();

	  if(kbhit())
	  break;}break;
case 77:while(1)
	  {if(r==500)goto l1;++x;
	   if(a[x][y]==1)
	    {--x; break;}
	  gotoxy(x-1,y);
	  cprintf(" ");
	  a[x][y]=2;
	  gotoxy(x,y);
	  textcolor(YELLOW);cprintf("\b");textcolor(WHITE);
	  l54:
	  x4=x44;y4=y44;
	  if(e4==0)
	  ++y4;
	  else if(e4==2)
	  --y4;
	  else if(e4==1)
	  --x4;
	  else
	  ++x4;
	  if(a[x4][y4]==1)
	  {e4=rand()%4;goto l54;}
	  gotoxy(x4,y4);
	  textcolor(RED);cprintf("%c",en4);textcolor(WHITE);
	  gotoxy(x44,y44);
	  if(a[x44][y44]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x4==x&&y4==y)
	  goto l1;
	  if(y44==y&&x44==x)
	  {goto l1;}
	  x44=x4;y44=y4;

	  l53:
	  x3=x33;y3=y33;
	  if(e3==0)
	  y3+=1;
	  else if(e3==2)
	  y3-=1;
	  else if(e3==1)
	  x3-=1;
	  else
	  x3+=1;
	  if(a[x3][y3]==1)
	  {e3=rand()%4;goto l53;}
	// gotoxy(1,1);	  printf("x1=%d y1=%d x=%d y=%d",x3,y3,x,y);delay(100);
	  if(y3==y&&x3==x)
	  {goto l1;}
	  if(y33==y&&x33==x)
	  {goto l1;}
	  gotoxy(x3,y3);
	  textcolor(RED);cprintf("%c",en3);textcolor(WHITE);
	  gotoxy(x33,y33);
	  if(a[x33][y33]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  x33=x3;y33=y3;

	  l52:
	  x2=x22;y2=y22;
	  if(e2==0)
	  ++y2;
	  else if(e2==2)
	  --y2;
	  else if(e2==1)
	  --x2;
	  else
	  ++x2;
	  if(a[x2][y2]==1)
	  {e2=rand()%4;goto l52;}
	  gotoxy(x2,y2);
	  textcolor(RED);cprintf("%c",en2);textcolor(WHITE);
	  gotoxy(x22,y22);
	  if(a[x22][y22]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x2==x&&y2==y)
	  goto l1;
	  if(y22==y&&x22==x)
	  {goto l1;}
	  x22=x2;y22=y2;

	  l5:
	  x1=x11;y1=y11;
	  if(e1==0)
	  ++y1;
	  else if(e1==2)
	  --y1;
	  else if(e1==1)
	  --x1;
	  else
	  ++x1;/////
	  if(a[x1][y1]==1)
	  {e1=rand()%4;goto l5;} /////////////
	  gotoxy(x1,y1);
	  textcolor(RED);cprintf("%c",en1);textcolor(WHITE);
	  gotoxy(x11,y11);
	  if(a[x11][y11]==2)
	  cprintf(" ");
	  else
	  cprintf("%c",250);
	  if(x1==x&&y1==y)
	  goto l1;
	  if(y11==y&&x11==x)
	  {goto l1;}
	  x11=x1;y11=y1;
	    delay(70);
for(r=0,i=2;i<=24;++i)
{for(k=1;k<=80;++k)
{if(a[k][i]==2)
++r;}color(r);
}
gotoxy(20,1);
printf("Food=%d",r);
sound(100);delay(10);nosound();
	if(kbhit())
	break;}break;

case 27 :goto l1;
}}
l1 :

textbackground(LIGHTGREEN);clrscr();
textcolor(RED);clrscr();if(r==500){gotoxy(36,13);cprintf("YOU WON");}
			else{gotoxy(35,13);cprintf("Game Over");}
			sound(100);
			delay(210);
			nosound();
			sound(250);
			delay(100);
			nosound();
			sound(100);
			delay(210);
			nosound();
			sound(250);
			delay(250);
			nosound();
delay(500);
clrscr();
gotoxy(36,13);
cprintf("SCORE=%d",r);
gotoxy(29,15);
cprintf("PRESS \"N\" FOR NEW GAME");
gotoxy(31,16);
cprintf("PRESS \"X\" TO EXIT");
while(1){
cha=getch();
if(cha=='N'||cha=='n')goto l100;
if(cha=='x'||cha=='X'){
end();}  }
}