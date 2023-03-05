#include <iostream>
#include "Point.h"

Point::Point() : x(0), y(0), color("black") {
	cout << "Point()" << endl;
}

Point::Point(int x, int y, string color) : x(x), y(y), color(color) {
	cout << "Point(int x, int y, string color)" << endl;

}

Point::Point(const Point& p) : x(p.x), y(p.y), color(p.color) {
	cout << "Point(const Point& p)" << endl;

}

Point::Point(const Point* p) : x(p->x), y(p->y), color(p->color) {
	cout << "Point(const Point* p)" << endl;
}

Point::~Point() {
	cout << "~Point() " << x << y << endl;
}