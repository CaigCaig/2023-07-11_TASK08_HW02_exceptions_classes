#include <iostream>
#include "e_triangle.h"

E_triangle::E_triangle(int a) {
	this->sides_count = 3;
	this->a = a;
	this->b = a;
	this->c = a;
	this->A = 60;
	this->B = 60;
	this->C = 60;
	this->name = "Равносторонний треугольник";
};

E_triangle::E_triangle(int a, int b, int c, int A, int B, int C) {
	this->sides_count = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = "Равносторонний треугольник";
	if ((A + B + C) != 180) throw std::domain_error("Ошибка создания фигуры. Причина: не все углы равны 60\n");
};