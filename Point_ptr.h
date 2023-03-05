#pragma once
#include "Color.h"

class Point_ptr {
private:
	int x;
	int y;
	Color *color;
public:
	Point_ptr();
	Point_ptr(int x, int y, string color);
	Point_ptr(const Point_ptr& p);
	Point_ptr(const Point_ptr *p);
	~Point_ptr();
};