#pragma once
#include "figure.h"
#include "quadrangle.h"

class Rhomb : public Quadrangle {
public:
	Rhomb(int a, int A, int B);
	Rhomb(int a, int b, int c, int d, int A, int B, int C, int D);
};