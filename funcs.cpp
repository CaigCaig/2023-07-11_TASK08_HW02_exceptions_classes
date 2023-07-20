#include <iostream>
#include "figure.h"
#include "funcs.h"

using namespace std;

void print_info(Figure* p) {
	cout << p->get_name();
	switch (p->get_sides()) {
	case 3:
		cout << " (cтороны " << p->get_a() << ", " << p->get_b() << ", " << p->get_c() << "; ";
		cout << "углы " << p->get_A() << ", " << p->get_B() << ", " << p->get_C() << ") создан" << endl;
		break;
	case 4:
		cout << " (стороны " << p->get_a() << ", " << p->get_b() << ", " << p->get_c() << ", " << p->get_d() << "; ";
		cout << "углы " << p->get_A() << ", " << p->get_B() << ", " << p->get_C() << ", " << p->get_D() << ") создан" << endl;
		break;
	}
	std::cout << std::endl;
}