#pragma once
#include "figure.h"
#include "quadrangle.h"

class Rectangle_ : public Quadrangle {
public:
	Rectangle_(int a, int b);
	Rectangle_(int a, int b, int c, int d, int A, int B, int C, int D);
};