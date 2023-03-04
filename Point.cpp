#include "Point.h"
#include <iostream>

Color* Point::get_Color()const {
	cout << "get_Color()" << endl;
	return color;
}
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
	this->color = new Color(*(p.get_Color()));
}

Point::~Point() {
	cout << "~Point() " << x << " " << y << endl;
	delete color;
}
