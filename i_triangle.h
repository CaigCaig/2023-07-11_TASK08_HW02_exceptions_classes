#pragma once
#include "triangle.h"

class I_triangle : public Triangle {
public:
	I_triangle(int a, int b, int A, int B);
	I_triangle(int a, int b, int c, int A, int B, int C);
};