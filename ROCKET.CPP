// _________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL ___________
//_______ C++ PROGRAMMING TO CREATE CHANDRAYAAN 3 LAUNCH ANIMATION ________


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void rocket();
void text();
int gd=DETECT,gm,i,j,k;
void main()
{
text();
getch();
cleardevice();
rocket();
getch();
}

void text()
{
initgraph(&gd,&gm,"C:\\TC\\BGI");

setbkcolor(11);

settextstyle(0,0,2);
setcolor(12);
outtextxy(50,35,"I");
outtextxy(50,55,"S");
outtextxy(50,75,"R");
outtextxy(50,95,"O");

settextstyle(1,0,4);
setcolor(9);
outtextxy(100,30,"Indian Space");
outtextxy(100,65,"Research Organisation");

settextstyle(0,0,1);
setcolor(8);
outtextxy(50,130,"WELCOME TO INDIAN SPACE REASERCH ORGANISATION.");
delay(150);
outtextxy(50,150,"TODAY 14-JULY-2023 ROCKET LVM3 M4 IS READY TO LAUNCH.");
delay(150);
outtextxy(50,170,"MISSION OBJECTIVES OF CHANDRAYAAN-3: ");
delay(150);
outtextxy(50,190,"TO DEMONSTRATE SAFE AND SOFT LANDING ON LUNAR SURFACE.");
delay(150);
outtextxy(50,210,"TO DEMONSTRATE ROVER ROVING ON THE MOON AND");
delay(150);
outtextxy(50,230,"TO CONDUCT IN-SITU SCIENTIFIC EXPERIMENTS.");
delay(150);
setcolor(RED);
outtextxy(50,255,"LAUNCH MASS => 3900 KG");
delay(150);
outtextxy(50,280,"PAYLOAD MASS => 3900 KG");
delay(150);
outtextxy(50,305,"LAUNCH SITE => SATISH DHAWAN SPACE CENTER");
delay(150);
outtextxy(50,330,"DISTANCE TRAVELL: 3,84,000 KM DISTANCE B/W EARTH AND MOON");
delay(150);
outtextxy(450,420,"'COMPUTER SOFT SKILLS'");
delay(150);
outtextxy(50,450,"PRESS ENTER KEY TO CONTINUE...");
delay(150);
}

void rocket()
{
setbkcolor(8);
setcolor(BLUE);

// .......EARTH ........
for(i=30;i<=400;i++)
{
setcolor(11);

arc(500-i,200+i,0,120,200);
arc(500-i,200+i,0,120,300);
arc(500-i,200+i,0,120,400);
arc(500-i,200+i,0,120,500);

setcolor(10);
outtextxy(318,330-i,"L");
outtextxy(318,340-i,"V");
outtextxy(318,350-i,"M");
outtextxy(318,360-i,"3");
outtextxy(310,385-i,"M4");

//...... ROCKET .............
setcolor(15);
outtextxy(10,400+i,"EARTH");
for(j=0;j<=7;j++)
{
setcolor(RED);
circle(320,300-i,0+j);
}
for(k=0;k<=15;k++)
{
setcolor(YELLOW);
circle(300,410-i,0+k);
circle(340,410-i,0+k);
circle(320,410-i,0+k);
circle(280,410-i,0+k);
circle(360,410-i,0+k);
}
setcolor(WHITE);
line(0,420+i,620,420+i);
line(340,400-i,340,320-i);
line(300,400-i,300,320-i);
line(330,370-i,330,330-i);
line(310,370-i,310,330-i);
line(310,330-i,330,330-i);
line(310,370-i,330,370-i);
line(300,380-i,340,380-i);
line(270,400-i,370,400-i);
line(270,400-i,300,380-i);
line(340,380-i,370,400-i);
line(300,320-i,340,320-i);
line(300,320-i,320,300-i);
line(340,320-i,320,300-i);
delay(50);
cleardevice();
}

setbkcolor(1);
setcolor(11);
settextstyle(10,0,2);
outtextxy(80,100,"CONGRATULATIONS");
outtextxy(150,150,"MISSION");
outtextxy(120,200,"SUCCESSFUL");

setcolor(4);
settextstyle(1,0,1);
outtextxy(400,380,"Created by :- ");
setcolor(11);
outtextxy(400,400,"COMPUTER SOFT SKILLS");
setcolor(6);
outtextxy(400,420,"(ROHIT)");

getch();
}


//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________


