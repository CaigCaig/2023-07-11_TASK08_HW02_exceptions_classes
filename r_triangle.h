#pragma once
#include "triangle.h"

class R_triangle : public Triangle {
public:
	R_triangle(int a, int b, int c, int A, int B);
	R_triangle(int a, int b, int c, int A, int B, int C);
};