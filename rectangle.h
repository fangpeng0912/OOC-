#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <stdlib.h>
#include "shape.h" 

/*����Rectangle���ݽṹ*/ 
struct Rectangle_;
typedef struct Rectangle_ Rectangle; 

/*����Rectangle���ݽṹ*/ 
struct Rectangle_{
	Shape base;
	int width;
	int height;		
};

/*����Rectangle��صķ���*/
Rectangle *rectangle_create(int x, int y, int width, int height);

/*�麯��������ʵ��*/
float rectangle_area(Shape *this);

#endif
