#include<time.h>
#include"screen.h"
#include"snake.h"
#include"food.h"

#define   console_wide 70
#define   console_height 23
Point2D direction;

bool endGame=false;


void mainloop(Point2D  *food,int &score,float &difficult_level,int &heart,float &time) {
	if (GetAsyncKeyState(VK_LEFT)) {
        if (direction.x != 1) {
            direction.x = -1; direction.y = 0;
        }
    }
    else if (GetAsyncKeyState(VK_RIGHT)) {
        if (direction.x != -1) {
            direction.x = 1; direction.y = 0;
        }
    }
    else if (GetAsyncKeyState(VK_UP)) {
        if (direction.y != 1) {
            direction.y = -1; direction.x = 0;
        }
    }
    else if (GetAsyncKeyState(VK_DOWN)) {
        if (direction.y != -1) {
            direction.y = 1; direction.x = 0;
        }
    }
    
    move_snake(direction,console_wide,console_height);
	for(int i=3;i<snakelenght-1;i++)
		if (i != 0 && (snake[0].x == snake[i].x && snake[0].y == snake[i].y)) heart--;
	if(time<0)
	{
			time=15; // refrest time
			heart--;	
	};
	if(heart<0) endGame= true;
	
	
	if(snake[0].x==(food+1)->x&& snake[0].y==(food+1)->y) 
	{
		heart++;
		delete_food(food+1);
	};
	
	
    if(snake[0].x==food->x&& snake[0].y==food->y)
	{
		printf("%c",7);
		score+=1;
    	snakelenght+=1;
    	time=15;			// refrest time
    	if(difficult_level>=20) 
		{
			difficult_level=difficult_level-20;
    		if(difficult_level<40) difficult_level=40;
    		if (score%10==0) difficult_level=200-score*2;
    		
		}; 
    	
    	
		draw_food_lv1(food,console_wide,console_height);
				
		
		if((score-5)%10==0) draw_food_lv2(food+1,console_wide,console_height);
	}
	
    
}
int main(){
	srand(time(NULL));
	
	snake[0].x=30;snake[0].y=15;
	snake[1].x=30;snake[1].y=14;
	direction.x=1,direction.y=0;

	Point2D food[2];
	food[0].x=rand()%30;food[0].y=rand()%14;
	
	draw_khung(console_wide,console_height);	
	int score=0,heart=0;
	float time=15,difficult_level=200;
	
	draw_food_lv1(&food[0],console_wide,console_height);
	draw_snake(snake[0],snake[1],snake[2]);
	while(!endGame){
		Sleep(difficult_level);
		mainloop(&food[0],score,difficult_level,heart,time);
		draw_snake(snake[0],snake[1],snake[snakelenght-1]);
		printf_time(time,difficult_level,heart,endGame);
		printf_score(score);
		printf_heart(heart);
	};
	
	Sleep(3000);
	gameover(score);
	
	
}
