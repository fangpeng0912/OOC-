#include "square.h"

/*����Square��صķ���*/
Square *square_create(int x, int y, int side){
	Square *sq = (Square*)malloc(sizeof(Square));
	ShapeVtbl vptr = {Square_area, NULL};
	shape_ini((Shape*)sq, &vptr, x, y);  //��vptr��x��y���г�ʼ�� 
	sq->side = side;
	return sq; 
}

/*�麯��������ʵ��*/
float Square_area(Shape *this){
	Square *sq = (Square*)this;
	float area = sq->side * sq->side;
	return area;
}

