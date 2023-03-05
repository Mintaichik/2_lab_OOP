#include "Point.h"
#include <iostream>

Point::Point() {
	cout << "Point()" << endl;
	x = 0;
	y = 0;
	color = new Color;
}

Point::Point(int x, int y, string color) {
	cout << "Point(int x, int y, string color)" << endl;
	this->x = x;
	this->y = y;
	this->color = new Color(color);
}

Point::Point(const Point& p) {
	cout << "Point(const Point& p)" << endl;
	this->x = p.x;
	this->y = p.y;
	this->color = new Color(*(p.color));
}

Point::~Point() {
	cout << "~Point() " << x << " " << y << endl;
	delete color;
}
