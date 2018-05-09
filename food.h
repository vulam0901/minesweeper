
void draw_food_lv1(Point2D *food,int consolewide,int consoleheight){
	while(1)
	{
		origin:
		food->x = rand()%consolewide;		// tao vi tri food_lv1 ngau nhien
		food->y = rand()%consoleheight;
		for(int i = 0 ; i < snakelenght ; i ++)
		{
			if(snake[i].x == food->x && snake[i].y == food->y)	//kiem tra xem food_lv1 vua tao co trùng voi các dôt ran hay không
			{
				goto origin;	// nêu có thì tao lai vi trí food_lv1
			}	
		}
		if(food->x==(food+1)->x&&food->y==(food+1)->y) goto origin;// pkiem tra xem food_lv1 co trùng voi food_lv2 hay không nêu có thì tao lai
		SetTeColor(9);					// tao food_lv1
		gotoxy(food->x,food->y);
		printf("*");
		SetTeColor(15);
		break;
	};
}
void draw_food_lv2(Point2D *food,int consolewide,int consoleheight)		// tuong tu voi food_lv1
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
	food->x=80; // cho food den vi trí mà ran không thê an duoc( do em chua nghi ra cách nào nên phai dùng cách này)
	food->y=26;
}


