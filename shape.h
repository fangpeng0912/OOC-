#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <stdlib.h>

/*声明Shape数据结构*/ 
struct Shape_;  
typedef struct Shape_ Shape;  

/*声明ShapeVtbl虚函数表*/ 
typedef struct{
	float (*area)(Shape *this);
	float (*circumference)(Shape *this);
}ShapeVtbl; 

/*声明Shape数据结构*/ 
struct Shape_{
	ShapeVtbl *vptr;  //虚函数表 
	int x;
	int y;	
}; 

/*声明Shape相关的方法*/
Shape *shape_create(int x, int y);
void shape_ini(Shape *this, ShapeVtbl *vptr, int x, int y); //供创建派生类对象时调用 
void shape_move(Shape *this, int dx, int dy);
int get_x(Shape *this);
int get_y(Shape *this);

/*虚函数*/
float shape_area(Shape *this);
float shape_circumference(Shape *this);

#endif
