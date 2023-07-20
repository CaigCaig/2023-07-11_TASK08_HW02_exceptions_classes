#include <iostream>
#include "rectangle.h"

Rectangle_::Rectangle_(int a, int b) {
	this->sides_count = 4;
	this->a = a;
	this->b = b;
	this->c = a;
	this->d = b;
	this->A = 90;
	this->B = 90;
	this->C = 90;
	this->D = 90;
	this->name = "Прямоугольник";
};

Rectangle_::Rectangle_(int a, int b, int c, int d, int A, int B, int C, int D) {
	this->sides_count = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = "Прямоугольник";
	if ((A + B + C + D) != 360) throw std::domain_error("Ошибка создания фигуры. Причина: стороны попарно не равны, или не все углы равны 90°\n");
};