
void draw_food_lv1(Point2D *food,int consolewide,int consoleheight){
	while(1)
	{
		origin:
		food->x = rand()%consolewide;		// tao vi tri food_lv1 ngau nhien
		food->y = rand()%consoleheight;
		for(int i = 0 ; i < snakelenght ; i ++)
		{
			if(snake[i].x == food->x && snake[i].y == food->y)	//kiem tra xem food_lv1 vua tao co tr�ng voi c�c d�t ran hay kh�ng
			{
				goto origin;	// n�u c� th� tao lai vi tr� food_lv1
			}	
		}
		if(food->x==(food+1)->x&&food->y==(food+1)->y) goto origin;// pkiem tra xem food_lv1 co tr�ng voi food_lv2 hay kh�ng n�u c� th� tao lai
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
	food->x=80; // cho food den vi tr� m� ran kh�ng th� an duoc( do em chua nghi ra c�ch n�o n�n phai d�ng c�ch n�y)
	food->y=26;
}


