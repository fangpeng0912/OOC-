#include "rectangle.h"
#include <stdio.h>
/*声明Rectangle相关的方法*/
Rectangle *rectangle_create(int x, int y, int width, int height){
	Rectangle *r = malloc(sizeof(Rectangle));
	ShapeVtbl vptr = {rectangle_area, NULL};
	shape_ini((Shape*)r, &vptr, x, y); //对vptr、x、y进行初始化 
	r->width = width;
	r->height = height;
	return r;
}

/*虚函数派生类实现*/
float rectangle_area(Shape *this){
	Rectangle *r = (Rectangle*)this;
	float area = r->width * r->height;
	return area;
}

