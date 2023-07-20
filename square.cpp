#include <iostream>
#include "square.h"

Square::Square(int a) {
	this->sides_count = 4;
	this->a = a;
	this->b = a;
	this->c = a;
	this->d = a;
	this->A = 90;
	this->B = 90;
	this->C = 90;
	this->D = 90;
	this->name = "Квадрат";
};

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) {
	this->sides_count = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = "Квадрат";
	if ((a != b) || (b != c) || (c != d) || (A != 90) || (B != 90) || (C != 90) || (D != 90)) throw std::domain_error("Ошибка создания фигуры. Причина: не все стороны равны, или не все углы равны 90°\n");
};