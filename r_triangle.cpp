#include <iostream>
#include "r_triangle.h"

R_triangle::R_triangle(int a, int b, int c, int A, int B) {
	this->sides_count = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = 90;
	this->name = "Прямоугольный треугольник";
};

R_triangle::R_triangle(int a, int b, int c, int A, int B, int C) {
	this->sides_count = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = "Прямоугольный треугольник";
	if (C != 90) throw std::domain_error("Ошибка создания фигуры. Причина: угол C не равен 90°\n");
};