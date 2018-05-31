#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
class lanes
{
  public:
  void moverow1(int i)
  {
    setcolor(05);
    setfillstyle(2,05);
    rectangle(235,i,265,i+30);
    floodfill(250,i+1,05);
  }
  void moverow2(int i)
  {
    setcolor(04);
    setfillstyle(2,04);
    rectangle(285,i,315,i+30);
    floodfill(300,i+1,04);
  }
  void moverow3(int i)
  {
    setcolor(02);
    setfillstyle(2,02);
    rectangle(335,i,365,i+30);
    floodfill(350,i+1,02);
  }
}lane;
class cars
{
  public:
  void circular(int q)
  {
    setcolor(04);
    setfillstyle(1,04);
    circle(300+q,441,8);
    floodfill(293+q,441,04);
    floodfill(307+q,441,04);
    setcolor(02);
    setfillstyle(1,02);
    rectangle(290+q,450,292+q,436);
    rectangle(308+q,436,310+q,450);
    floodfill(291+q,449,02);
    floodfill(309+q,449,02);
    setcolor(12);
    setfillstyle(1,12);
    rectangle(292+q,453,308+q,447);
    floodfill(293+q,450,12);
    floodfill(307+q,450,12);
    setcolor(01);
  }
  void triangle(int q)
  {
    setcolor(14);
    setfillstyle(1,14);
    line(300+q,433,293+q,444);
    line(300+q,433,307+q,444);
    line(293+q,444,307+q,444);
    line(293+q,444,292+q,450);
    line(307+q,444,308+q,450);
    line(292+q,450,307+q,444);
    line(308+q,450,293+q,444);
    line(293+q,444,300+q,454);
    line(307+q,444,300+q,454);
    setcolor(14);
    setfillstyle(1,14);
    floodfill(295+q,443,14);
    floodfill(305+q,443,14);
    floodfill(297+q,447,14);
    floodfill(303+q,447,14);
    setcolor(01);
    setfillstyle(1,01);
    line(300+q,433,293+q,444);
    line(300+q,433,307+q,444);
    line(293+q,444,307+q,444);
    line(293+q,444,292+q,450);
    line(307+q,444,308+q,450);
    line(292+q,450,307+q,444);
    line(308+q,450,293+q,444);
    line(293+q,444,300+q,454);
    line(307+q,444,300+q,454);
    floodfill(293+q,447,01);
    floodfill(307+q,447,01);
    floodfill(298+q,445,01);
    floodfill(302+q,445,01);
    floodfill(298+q,450,01);
    floodfill(302+q,450,01);
    setcolor(01);
  }
  void rocket(int q)
  {
    setcolor(07);
    setfillstyle(1,07);
    rectangle(294+q,450,306+q,438);
    floodfill(295+q,440,07);
    floodfill(305+q,440,07);
    setcolor(05);
    setfillstyle(1,05);
    line(300+q,433,294+q,438);
    line(300+q,433,306+q,438);
    line(294+q,438,306+q,438);
    circle(294+q,450,4);
    circle(306+q,450,4);
    floodfill(291+q,450,05);
    floodfill(297+q,450,05);
    floodfill(303+q,450,05);
    floodfill(309+q,450,05);
    floodfill(296+q,437,05);
    floodfill(304+q,437,05);
    setcolor(01);
  }
}car;
void tree(int t, int q)//q=i
{
  int r=15;
  setcolor(BROWN);
  setfillstyle(1,BROWN);
  rectangle(8+t, q, 28+t, q-50);
  floodfill(9+t,q-49,06);
  floodfill(9+t,q-1,06);
  setcolor(GREEN);
  setfillstyle(1, GREEN);
  fillellipse(t,q-43,r,r);
  fillellipse(18+t,q-60,r,r);
  fillellipse(33+t,q-50,r,r);
  fillellipse(38+t,q-40,r,r);
}
void main()
{
  int d=DETECT, m;
  initgraph(&d, &m,"C//TC//BGI");
  int n[2], i, q=0, ch, speed=2, eliminate=1,t,w,v,r,j,score=-1;
  char menu=99, option, sc[25],carchoice;
  for(int any=100; any<350; any++)
  {
    cleardevice();
    setbkcolor(RED);
    setcolor(YELLOW);
    settextstyle(0,0,6);
    outtextxy(any-300,200,"RACER MANIA");
    if(any>250)
    {
      sound(any+150);
    }
    delay(20);
    nosound();
  }
  settextstyle(0,0,1);
  outtextxy(200,300,"press any key to continue");
  getch();
  cleardevice();
  ofstream fin;
  fin.open("new.txt");
  char str1[]="RACER MANIA DESIGNED BY -SHIVIN DASS AND AVIRAL SHARMA";
  fin<<str1;
  fin.close();
  ifstream fout;
  fout.open("new.txt");
  cout<<"\n\n\n\n\n\t\t\t\t\t";
  int tellgvar=fout.tellg();
  char character;
  while(fout.tellg()!=(tellgvar+12))
  {
    fout.get(character);
    cout<<character;
    delay(100);
  }
  cout<<"\n\n\n\t\t";
  while(!fout.eof())
  {
    fout.get(character);
    cout<<character;
    delay(100);
  }
  cout<<"\n\n\n\n\t\t\t(press any key to continue)";
  getch();
  cleardevice();
  cout<<"\n\n\t\t\tINSTRUCTIONS";
  cout<<"\n\n\t\t1. AVOID THE APPROACHING OBJECTS";
  cout<<"\n\n\t\t2. PRESS 'a' TO MOVE LEFT AND 'd' TO MOVE RIGHT";
  cout<<"\n\n\t\t\t(press any key to continue)";
  getch();
  cleardevice();
  setbkcolor(WHITE);
  setcolor(CYAN);
  settextstyle(3,0,6);
  outtextxy(10,40,"RACER MANIA");
  for(j=100; j<900; j+=100)
  {
    nosound();
    sound(j);
    delay(100);
    nosound();
  }
  for(;;)
  {
    if(kbhit())
    {
      option=getch();
      if(option==110||option==101)
      {
	break;
      }
    }
    else
    {
      setcolor(DARKGRAY);
      rectangle(130,360,540,150);
      int rect1[10]={145,165,525,165,525,243,145,243,145,165};
      int rect2[10]={145,300,525,300,525,248,145,248,145,300};
      int rect3[10]={145,305,525,305,525,355,145,355,145,305};
      setfillstyle(1,BLUE);
      fillpoly(5,rect1);
      delay(100);
      setfillstyle(1,YELLOW);
      fillpoly(5,rect2);
      delay(100);
      fillpoly(5,rect3);
      setcolor(CYAN);
      settextstyle(10,0,3);
      outtextxy(205,240,"NEW GAME(n)");
      setcolor(CYAN);
      settextstyle(10,0,3);
      outtextxy(280,300,"EXIT(e)");
      setcolor(WHITE);
      settextstyle(2,0,8);
    }
  }
  cleardevice();
  if(option==110)
  {
    setcolor(00);
    settextstyle(1,0,2);
    cout<<"\n\n\t\t\tCHOOSE VEHICLE:-\n\n\t\tpress 1\t\tpress 2\t\tpress 3";
    car.circular(-125);
    car.triangle(0);
    car.rocket(125);
    do
    {
      carchoice=getch();
    }while(!(carchoice==49||carchoice==50||carchoice==51));
    randomize();
    setcolor(01);
    while(menu==99)
    {
      speed=2;
      q=0;
      score=-1;
      eliminate--;
      for(;;)
      {
	score++;
	itoa(score,sc,10);
	t=300;
	w=300;
	v=300;
	r=300;
	while(!(t>390&&t<(getmaxx()-150)))
	{
	  t=random(getmaxx());
	}
	while(!((w<180)&&w>110))
	{
	  w=random(172);
	}
	while(!(r>(getmaxx()-90)&&r<(getmaxx()-53)))
	{
	  r=random(getmaxx());
	}
	while(!((v<80)&&v>15))
	{
	  v=random(172);
	}
	if(eliminate)
	{
	  break;
	}
	if(speed<18)
	{
	  speed++;
	}
	n[0]=random(3);
	n[1]=random(3);
	for(i=0; i<500; i+=speed)
	{
	  settextstyle(1,0,3);
	  outtextxy(50,50,"SCORE:");
	  outtextxy(150,50,sc);
	  line(225,0,225,500);
	  line(275,0,275,500);
	  line(325,0,325,500);
	  line(375,0,375,500);
	  if(kbhit())
	  {
	    ch=getche();
	    if(ch==97)//a
	    {
	      if(q>-50)
	      {
		q-=5;
	      }
	    }
	    if(ch==100)//d
	    {
	      if(q<50)
	      {
		q+=5;
	      }
	    }
	  }
	  tree(t,i);
	  tree(w,i);
	  tree(v,i);
	  tree(r,i);
	  if((n[0]==0||n[0]==1)&&(n[1]==0||n[1]==1))
	  {
	    lane.moverow1(i);
	    lane.moverow2(i);
	    if(carchoice==49)
	    {
	      car.circular(q);
	    }
	    else if(carchoice==50)
	    {
	      car.triangle(q);
	    }
	    else
	    {
	      car.rocket(q);
	    }
	    delay(50);
	    cleardevice();
	  }
	  else if((n[0]==1||n[0]==2)&&(n[1]==1||n[1]==2))
	  {
	    lane.moverow2(i);
	    lane.moverow3(i);
	    if(carchoice==49)
	    {
	      car.circular(q);
	    }
	    else if(carchoice==50)
	    {
	      car.triangle(q);
	    }
	    else
	    {
	      car.rocket(q);
	    }
	    delay(50);
	    cleardevice();
	  }
	  else
	  {
	    lane.moverow1(i);
	    lane.moverow3(i);
	    if(carchoice==49)
	    {
	      car.circular(q);
	    }
	    else if(carchoice==50)
	    {
	      car.triangle(q);
	    }
	    else
	    {
	      car.rocket(q);
	    }
	    delay(50);
	    cleardevice();
	  }
	  if((n[0]==0||n[0]==1)&&(n[1]==0||n[1]==1)) //moverow 1,2
	  {
	    if((i+30)>433&&(292+q)<315&&i<450)
	    {
	      eliminate++;
	      break;
	    }
	  }
	  else if((n[0]==1||n[0]==2)&&(n[1]==1||n[1]==2))//moverow 2,3
	  {
	    if((i+30)>433&&(308+q)>285&&i<450)
	    {
	      eliminate++;
	      break;
	    }
	  }
	  else //moverow 1,3
	  {
	    if((i+30)>433&&((292+q)<265||(308+q)>335)&&i<450)
	    {
	      eliminate++;
	      break;
	    }
	  }
	}
      }
      for(int k=500; k>350; k-=5)
      {
	cleardevice();
	setcolor(05);
	settextstyle(4,0,6);
	outtextxy(500-k,200,"GAME OVER");
	if(k<500&&k>400)
	{
	  sound(k);
	}
	delay(50);
	nosound();
      }
      settextstyle(1,0,4);
      outtextxy(150,300,"YOUR SCORE:");
      outtextxy(360,300,sc);
      settextstyle(1,0,2);
      outtextxy(100,400,"PRESS 'c' TO CONTINUE AND 'e' TO EXIT");
      for(;;)
      {
	if(kbhit())
	{
	  menu=getch();
	  if(menu==99||menu==101)
	  {
	    break;
	  }
	}
      }
    }
  }
}