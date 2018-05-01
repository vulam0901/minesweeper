#ifndef POINT2D_H
#define POINT2D_H
struct Point2D{
	int x,y;
	Point2D add(const Point2D& other) const{
		Point2D sum;
		
		sum.x=other.x+x;
		sum.y=other.y+y;
		return sum;
	}

//	Point2D(int _x,int _y){
//		x=_x;
//		y=_y;
//	};
	
};
#endif
