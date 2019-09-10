#include "rectangle.h"
#include <stdio.h>
/*����Rectangle��صķ���*/
Rectangle *rectangle_create(int x, int y, int width, int height){
	Rectangle *r = malloc(sizeof(Rectangle));
	ShapeVtbl vptr = {rectangle_area, NULL};
	shape_ini((Shape*)r, &vptr, x, y); //��vptr��x��y���г�ʼ�� 
	r->width = width;
	r->height = height;
	return r;
}

/*�麯��������ʵ��*/
float rectangle_area(Shape *this){
	Rectangle *r = (Rectangle*)this;
	float area = r->width * r->height;
	return area;
}

