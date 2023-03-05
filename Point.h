#pragma once
#include "Color.h"

class Point {
private:
	int x;
	int y;
	Color *color;
public:
	Point();
	Point(int x, int y, string color);
	Point(const Point& p);
	Point(const Point *p);
	~Point();
};