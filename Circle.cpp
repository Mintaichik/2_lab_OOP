#include "Circle.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

Circle::Circle() : radius(0) {
	cout << "Circle()" << endl;
}

Circle::Circle(int x, int y, string color, int radius) : Point_ptr(x, y, color), radius(radius) {
	cout << "Circle(int x, int y, string color, int radius)" << endl;
}

Circle::Circle(const Circle& circle) : Point_ptr((Point_ptr&)circle), radius(circle.radius) {
	cout << "Circle(const Circle& circle)" << endl;
}

Circle::~Circle() {
	cout << "~Circle() " << radius << endl;
}

double Circle::perimeter() {
	double result = 2 * M_PI * radius;
	return result;
}

void Circle::setRadius(int radius) {
	cout << "setRadius(int radius)" << endl;
	this->radius = radius;
}