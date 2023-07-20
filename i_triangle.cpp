#include <iostream>
#include "i_triangle.h"

I_triangle::I_triangle(int a, int b, int A, int B) {
	this->sides_count = 3;
	this->a = a;
	this->b = b;
	this->c = a;
	this->A = A;
	this->B = B;
	this->C = A;
	this->name = "Равнобедренный треугольник";
};

I_triangle::I_triangle(int a, int b, int c, int A, int B, int C) {
	this->sides_count = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = "Равнобедренный треугольник";
	if ((A + B + C) != 180) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180°\n");
};