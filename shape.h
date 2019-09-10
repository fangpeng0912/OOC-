#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <stdlib.h>

/*����Shape���ݽṹ*/ 
struct Shape_;  
typedef struct Shape_ Shape;  

/*����ShapeVtbl�麯����*/ 
typedef struct{
	float (*area)(Shape *this);
	float (*circumference)(Shape *this);
}ShapeVtbl; 

/*����Shape���ݽṹ*/ 
struct Shape_{
	ShapeVtbl *vptr;  //�麯���� 
	int x;
	int y;	
}; 

/*����Shape��صķ���*/
Shape *shape_create(int x, int y);
void shape_ini(Shape *this, ShapeVtbl *vptr, int x, int y); //���������������ʱ���� 
void shape_move(Shape *this, int dx, int dy);
int get_x(Shape *this);
int get_y(Shape *this);

/*�麯��*/
float shape_area(Shape *this);
float shape_circumference(Shape *this);

#endif
