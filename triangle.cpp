#include <iostream>
#include <exception>
#include <stdexcept>
#include <typeinfo>
#include "triangle.h"

Triangle::Triangle() {};

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	this->sides_count = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = "Треугольник";
	if ((A + B + C) != 180) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180°\n");
};