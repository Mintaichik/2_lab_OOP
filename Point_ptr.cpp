#include "Point_ptr.h"
#include <iostream>

Point_ptr::Point_ptr() {
	cout << "Point_ptr()" << endl;
	x = 0;
	y = 0;
	color = new Color;
}

Point_ptr::Point_ptr(int x, int y, string color) {
	cout << "Point_ptr(int x, int y, string color)" << endl;
	this->x = x;
	this->y = y;
	this->color = new Color(color);
}

Point_ptr::Point_ptr(const Point_ptr& p) {
	cout << "Point_ptr(const Point& p)" << endl;
	this->x = p.x;
	this->y = p.y;
	this->color = new Color(*(p.color));
}

Point_ptr::Point_ptr(const Point_ptr *p) {
	cout << "Point_ptr(const Point* p)" << endl;
	this->x = p->x;
	this->y = p->y;
	this->color = new Color(*(p->color));
}

Point_ptr::~Point_ptr() {
	cout << "~Point_ptr() " << x << " " << y << endl;
	delete color;
}

void Point_ptr::setX(int x) {
	cout << "setX(int x)" << endl;
	this->x = x;
}

void Point_ptr::setY(int y) {
	cout << "setY(int y)" << endl;
	this->y = y;
}

void Point_ptr::setColor(string color) {
	cout << "setColor(string color)" << endl;
	this->color->setColor(color);
}
