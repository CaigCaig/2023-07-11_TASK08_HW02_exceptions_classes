#pragma once
#include "figure.h"
#include "quadrangle.h"

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int a, int b, int A, int B);
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
};