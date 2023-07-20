#include <iostream>
#include <Windows.h>
#include <string>
#include "triangle.h"
#include "r_triangle.h"
#include "i_triangle.h"
#include "e_triangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "funcs.h"

using namespace std;
#define NO_ERRORS

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
#ifdef NO_ERRORS
		Triangle triangle{ 10, 20, 30, 50, 60, 70 };			// Треугольник
#else
		Triangle triangle{ 10, 20, 30, 50, 60, 80 };			// Треугольник
#endif // NO_ERRORS
		print_info(&triangle);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		R_triangle r_triangle{ 10, 20, 30, 50, 60 };			// Прямоугольный треугольник
#else
		R_triangle r_triangle{ 10, 20, 30, 50, 60, 80 };		// Прямоугольный треугольник
#endif // NO_ERRORS
		print_info(&r_triangle);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		I_triangle i_triangle{ 10, 20, 50, 60 };				// Равнобедренный треугольник
#else
		I_triangle i_triangle{ 10, 20, 30, 50, 60, 80 };				// Равнобедренный треугольник
#endif // NO_ERRORS
		print_info(&i_triangle);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		E_triangle e_triangle{ 30 };							// Равносторонний треугольник
#else
		E_triangle e_triangle{ 10, 20, 30, 50, 60, 80 };							// Равносторонний треугольник
#endif // NO_ERRORS
		print_info(&e_triangle);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		Quadrangle quadrangle{ 10, 20, 30, 40, 80, 100, 70, 110 };	// Четырёхугольник
#else
		Quadrangle quadrangle{ 10, 20, 30, 40, 50, 60, 70, 80 };	// Четырёхугольник
#endif // NO_ERRORS
		print_info(&quadrangle);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		Rectangle_ rectangle{ 10, 20 };								// Прямоугольник
#else
		Rectangle_ rectangle{ 10, 20, 30, 40, 50, 60, 70, 80 };	// Прямоугольник
#endif // NO_ERRORS
		print_info(&rectangle);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		Square square{ 20 };										// Квадрат
#else
		Square square{ 10, 20, 30, 40, 50, 60, 70, 80 };
#endif // NO_ERRORS
		print_info(&square);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		Parallelogram parallelogram{ 20, 30, 30, 40 };				// Параллелограмм
#else
		Parallelogram parallelogram{ 10, 20, 30, 40, 50, 60, 70, 80 };
#endif // NO_ERRORS
		print_info(&parallelogram);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}
	try {
#ifdef NO_ERRORS
		Rhomb rhomb{ 30, 30, 40 };									// Ромб
#else
		Rhomb rhomb{ 10, 20, 30, 40, 50, 60, 70, 80 };
#endif // NO_ERRORS
		print_info(&rhomb);
	}
	catch (const domain_error& ex) {
		cout << ex.what() << endl;
	}

	system("pause");
}