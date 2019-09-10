#include "square.h"

/*声明Square相关的方法*/
Square *square_create(int x, int y, int side){
	Square *sq = (Square*)malloc(sizeof(Square));
	ShapeVtbl vptr = {Square_area, NULL};
	shape_ini((Shape*)sq, &vptr, x, y);  //对vptr、x、y进行初始化 
	sq->side = side;
	return sq; 
}

/*虚函数派生类实现*/
float Square_area(Shape *this){
	Square *sq = (Square*)this;
	float area = sq->side * sq->side;
	return area;
}

