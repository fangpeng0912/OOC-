#ifndef _SQUARE_H_
#define _SQUARE_H_

#include <stdlib.h>
#include "shape.h" 

/*����Square���ݽṹ*/ 
struct Square_;
typedef struct Square_ Square; 

/*����Square���ݽṹ*/ 
struct Square_{
	Shape base;
	int side;		
}; 

/*����Square��صķ���*/
Square *square_create(int x, int y, int side);

/*�麯��������ʵ��*/
float Square_area(Shape *this);

#endif
