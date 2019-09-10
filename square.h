#ifndef _SQUARE_H_
#define _SQUARE_H_

#include <stdlib.h>
#include "shape.h" 

/*声明Square数据结构*/ 
struct Square_;
typedef struct Square_ Square; 

/*声明Square数据结构*/ 
struct Square_{
	Shape base;
	int side;		
}; 

/*声明Square相关的方法*/
Square *square_create(int x, int y, int side);

/*虚函数派生类实现*/
float Square_area(Shape *this);

#endif
