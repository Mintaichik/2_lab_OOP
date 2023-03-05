#pragma once
#include "Point_ptr.h"

class Circle : public Point_ptr {
protected: 
	int radius;
public:
	Circle();
	Circle(int x, int y, string color, int radius);
	Circle(const Circle& circle);
	~Circle();
	double perimeter();
	void setRadius(int radius);
};