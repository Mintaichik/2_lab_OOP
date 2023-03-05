#include "Ellipse.h"
#include <iostream>

Ellipse::Ellipse() : Circle() {
	cout << "Ellipse()" << endl;
	radius2 = 0;
}

Ellipse::Ellipse(int x, int y, string color, int radius, int radius2) : Circle(x, y, color, radius) {
	cout << "Ellipse(int x, int y, string color, int radius, int radius2)" << endl;
	this->radius2 = radius2;
}

Ellipse::Ellipse(const Ellipse& el) : Circle((Circle&)el){
	cout << "Ellipse(const Ellipse& el)" << endl;
	radius2 = el.radius2;
}

Ellipse::~Ellipse() {
	cout << "~Ellipse() "<< radius2 << endl;
}