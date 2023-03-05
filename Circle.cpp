#include "Circle.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

Circle::Circle() {
	cout << "Circle()" << endl;
	radius = 0;
}

Circle::Circle(int x, int y, string color, int radius) : Point(x, y, color) {
	cout << "Circle(int x, int y, string color, int radius)" << endl;
	this->radius = radius;
}

Circle::Circle(const Circle& circle) : Point((Point&)circle) {
	cout << "Circle(const Circle& circle)" << endl;
	radius = circle.radius;
}

Circle::~Circle() {
	cout << "~Circle() " << radius << endl;
}

double Circle::perimeter() {
	double result = 2 * M_PI * radius;
	return radius;
}