#include "StrangeEllipse.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

StrangeEllipse::StrangeEllipse() : Circle() {
	cout << "Ellipse()" << endl;
	radius2 = 0;
}

StrangeEllipse::StrangeEllipse(int x, int y, string color, int radius, int radius2) : Circle(x, y, color, radius) {
	cout << "Ellipse(int x, int y, string color, int radius, int radius2)" << endl;
	this->radius2 = radius2;
}

StrangeEllipse::StrangeEllipse(const StrangeEllipse& el) : Circle((Circle&)el){
	cout << "Ellipse(const Ellipse& el)" << endl;
	radius2 = el.radius2;
}

StrangeEllipse::~StrangeEllipse() {
	cout << "~Ellipse() "<< radius2 << endl;
}

double StrangeEllipse::perimeter() {
	double result = 2.0 * M_PI * sqrt((radius * radius + radius2 * radius2) / 2);
	return result;
}