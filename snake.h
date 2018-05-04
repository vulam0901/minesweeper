#include<stdio.h>
#include"cosole.h"
#include"Point2D.h"
Point2D snake[1000];
int snakelenght=3;

void move_snake(Point2D &dir,int consolewide,int consoleheight){
        
        for(int i=snakelenght-1;i>0;i--)
		{
        	snake[i]=snake[i-1];
		}
//        snake[0].x += dir.x; snake[0].y += dir.y;
		snake[0]=snake[0].add(dir);

        if (snake[0].x >= consolewide) snake[0].x = 0;
        if (snake[0].x < 0) snake[0].x = consolewide-1;
        if (snake[0].y >= consoleheight+1) snake[0].y = 0;
        if (snake[0].y < 0) snake[0].y = consoleheight;
         
        
       
}
void draw_snake(Point2D & snake_head,Point2D &snake_body,Point2D &snake_tail){
	SetTeColor(11);
	int check=0;
	for(int i=0;i<snakelenght-1;i++){
		if(snake_tail.x==snake[i].x&&snake_tail.y==snake[i].y) check=1;
	};
	if(check==0) {
		gotoxy(snake_tail.x,snake_tail.y);
		printf(" ");
	};
	gotoxy(snake_head.x,snake_head.y);
	printf("%c",1);
	gotoxy(snake_body.x,snake_body.y);
	printf("#");

	SetTeColor(15);
}
