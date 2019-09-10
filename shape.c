#include "shape.h"

/*声明Shape相关的方法*/
Shape *shape_create(int x, int y){
	Shape *s = malloc(sizeof(Shape));
	s->vptr = NULL;   //Shape类初始化时将vptr初始化为NULL 
	s->x = x;
	s->y = y;
	return s;
}

void shape_ini(Shape *this, ShapeVtbl *vptr, int x, int y){
	if(this != NULL){
		ShapeVtbl *v = malloc(sizeof(ShapeVtbl));  //这里要动态申请一块内存 
		*v = *vptr;     //将派生类虚函数实现赋值给v 
		this->vptr = v;  //将vptr指向新申请内存 
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

/*虚函数*/ 
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

