void draw_food_lv1(Point2D *food,int consolewide,int consoleheight){
	while(1)
	{
		origin:
		food->x = rand()%consolewide;
		food->y = rand()%consoleheight;
		for(int i = 0 ; i < snakelenght ; i ++)
		{
			if(snake[i].x == food->x && snake[i].y == food->y)
			{
				goto origin;
			}	
		}
		if(food->x==(food+1)->x&&food->y==(food+1)->y) goto origin;
		SetTeColor(9);
		gotoxy(food->x,food->y);
		printf("*");
		SetTeColor(15);
		break;
	};
}
void draw_food_lv2(Point2D *food,int consolewide,int consoleheight)
{
	while(1)
	{
		origin:
		food->x = rand()%consolewide;
		food->y = rand()%consoleheight;
		for(int i = 0 ; i < snakelenght ; i ++)
		{
			if(snake[i].x == food->x && snake[i].y == food->y)
			{
				goto origin;
			}	
		}
		if(food->x==(food-1)->x&&food->y==(food-1)->y) goto origin;
		SetTeColor(14);
		gotoxy(food->x,food->y);
		printf("%c",4);
		SetTeColor(15);
		break;
	};
}
void delete_food(Point2D *food){
	gotoxy(food->x,food->y);
	printf(" ");
}


