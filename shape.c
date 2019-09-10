#include "shape.h"

/*����Shape��صķ���*/
Shape *shape_create(int x, int y){
	Shape *s = malloc(sizeof(Shape));
	s->vptr = NULL;   //Shape���ʼ��ʱ��vptr��ʼ��ΪNULL 
	s->x = x;
	s->y = y;
	return s;
}

void shape_ini(Shape *this, ShapeVtbl *vptr, int x, int y){
	if(this != NULL){
		ShapeVtbl *v = malloc(sizeof(ShapeVtbl));  //����Ҫ��̬����һ���ڴ� 
		*v = *vptr;     //���������麯��ʵ�ָ�ֵ��v 
		this->vptr = v;  //��vptrָ���������ڴ� 
		this->x = x;
		this->y = y;
	}
}

void shape_move(Shape *this, int dx, int dy){
	if(this != NULL){
		this->x += dx;
		this->y +=dy;
	}
}

int get_x(Shape *this){
	return this->x;
}

int get_y(Shape *this){
	return this->y;
}

/*�麯��*/ 
float shape_area(Shape *this){
	if(this != NULL){
		(this->vptr->area)(this);
	}		
} 

float shape_circumference(Shape *this){
	if(this != NULL){
		(this->vptr->circumference)(this);
	}		
}

