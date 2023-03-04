#pragma once
#include "Color.h"

class Point {
private:
	int x;
	int y;
	Color *color;
	Color* get_Color()const;
public:
	Point();
	Point(int x, int y, string color);
	Point(const Point& p);
	~Point();
};