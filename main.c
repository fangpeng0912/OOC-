#include <stdio.h>
#include <stdlib.h>
#include "shape.h"
#include "rectangle.h"
#include "square.h"

int main(int argc, char *argv[]){
	/*创建类*/ 
	Shape *s = shape_create(5, 6);
	Rectangle *r = rectangle_create(7, 9, 4, 3);
	Square *sq = square_create(10, 5, 5);
	printf("s:  x = %d\ty = %d\n", get_x(s), get_y(s));
	printf("r:  x = %d\ty = %d\n", get_x((Shape*)r), get_y((Shape*)r));
	printf("sq: x = %d\ty = %d\n", get_x((Shape*)sq), get_y((Shape*)sq));
	printf("\n");
	/*调试用，查看vptr指向的值*/
	*(r->base.vptr);
	*(sq->base.vptr); 
		
	/*派生类调用父类方法*/ 
	shape_move((Shape*)r, 1, 2);
	shape_move((Shape*)sq, 3, 4);
	printf("r:  x + dx = %d\ty + dy = %d\n", get_x((Shape*)r), get_y((Shape*)r));
	printf("sq: x + dx = %d\ty + dy = %d\n", get_x((Shape*)sq), get_y((Shape*)sq));
	printf("\n");
	
	/*多态*/ 
	float r_area = shape_area((Shape*)r);
	float sq_area = shape_area((Shape*)sq);
	printf("r:  area = %.2f\n", r_area);
	printf("sq: area = %.2f\n", sq_area);
	
	return 0;
}
