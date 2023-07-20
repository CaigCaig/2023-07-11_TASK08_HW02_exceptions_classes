#pragma once

class Figure {
protected:
	int sides_count, a, b, c, d, A, B, C, D;
	std::string name;
public:
	int get_sides();
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();
	std::string get_name();
};