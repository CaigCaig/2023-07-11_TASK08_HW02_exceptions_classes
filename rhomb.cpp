#include <iostream>
#include "rhomb.h"

Rhomb::Rhomb(int a, int A, int B) {
	this->sides_count = 4;
	this->a = a;
	this->b = a;
	this->c = a;
	this->d = a;
	this->A = A;
	this->B = B;
	this->C = A;
	this->D = B;
	this->name = "����";
};

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) {
	this->sides_count = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = "����";
	if ((a != b) || (b != c) || (c != d) || (A != C) || (B != D) || (A+B != 180)) throw std::domain_error("������ �������� ������. �������: ���� ������� �� �����, ��� �� ��� ������� �����, ��� ����� �������� ����� �� ����� 180�\n");
};