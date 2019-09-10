#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <stdlib.h>
#include "shape.h" 

/*声明Rectangle数据结构*/ 
struct Rectangle_;
typedef struct Rectangle_ Rectangle; 

/*声明Rectangle数据结构*/ 
struct Rectangle_{
	Shape base;
	int width;
	int height;		
};

/*声明Rectangle相关的方法*/
Rectangle *rectangle_create(int x, int y, int width, int height);

/*虚函数派生类实现*/
float rectangle_area(Shape *this);

#endif
