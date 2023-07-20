#include <iostream>
#include "figure.h"
#include "funcs.h"

using namespace std;

void print_info(Figure* p) {
	cout << p->get_name();
	switch (p->get_sides()) {
	case 3:
		cout << " (c������ " << p->get_a() << ", " << p->get_b() << ", " << p->get_c() << "; ";
		cout << "���� " << p->get_A() << ", " << p->get_B() << ", " << p->get_C() << ") ������" << endl;
		break;
	case 4:
		cout << " (������� " << p->get_a() << ", " << p->get_b() << ", " << p->get_c() << ", " << p->get_d() << "; ";
		cout << "���� " << p->get_A() << ", " << p->get_B() << ", " << p->get_C() << ", " << p->get_D() << ") ������" << endl;
		break;
	}
	std::cout << std::endl;
}