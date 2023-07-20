#pragma once
#include "figure.h"
#include "quadrangle.h"

class Square : public Quadrangle {
public:
	Square(int a);
	Square(int a, int b, int c, int d, int A, int B, int C, int D);
};