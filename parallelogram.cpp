#include <iostream>
#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) {
	this->sides_count = 4;
	this->a = a;
	this->b = b;
	this->c = a;
	this->d = b;
	this->A = A;
	this->B = B;
	this->C = A;
	this->D = B;
	this->name = "Параллелограмм";
};

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
	this->sides_count = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = "Параллелограмм";
	if ((a != c) || (b != d) || (A != 90) || (B != 90) || (C != 90) || (D != 90)) throw std::domain_error("Ошибка создания фигуры. Причина: стороны попарно не равны, или не все углы равны 90°\n");
};