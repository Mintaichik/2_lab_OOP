#pragma once
#include "Point.h"

class Circle : public Point {
private: 
	int radius;
public:
	Circle();
	Circle(int x, int y, string color, int radius);
	Circle(const Circle& circle);
	~Circle();
};