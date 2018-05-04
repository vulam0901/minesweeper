#ifndef screen_h
#define screen_h
#include<stdio.h>
#include"cosole.h"
void draw_khung(int console_wide,int console_height)
{
	for(int i=0;i<=console_height+1;i++){
		gotoxy(console_wide,i);
		printf("%c",'|');
	}
	for(int i=0;i<console_wide;i++){
		gotoxy(i,console_height+1);
		printf("%c",196);
	}
	gotoxy(73,2);
	printf("score");
	gotoxy(73,7);
	printf("heart");
	gotoxy(73,12);
	printf("time");
}
void printf_score(int &score)
{
	gotoxy(75,3);
	printf("%d",score);
}
void printf_heart(int & heart){
	gotoxy(75,8);
	if(heart>=0) printf("%d",heart);
}
void printf_time(float &time,float &difficult_level,int &heart,bool & endGame){
	gotoxy(74,13);
	time=time-difficult_level/1000;
	if(time>0) printf("%2.f",time);
	else if(heart<=0 && time<=0){
		gotoxy(71,13);
		SetTeColor(12);
		printf("time out!");
		SetTeColor(15);
		endGame= true;
	}
}
void gameover(int &score)
{
	system("cls");
	gotoxy(34,12);
	printf("game over!!!");
	gotoxy(34,13);
	printf("your score: %d",score);
	Sleep(3000);
}
#endif
