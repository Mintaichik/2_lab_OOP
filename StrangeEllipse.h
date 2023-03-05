#pragma once
#include "Circle.h"

class StrangeEllipse : public Circle
{
private:
	int radius2;
public:
	StrangeEllipse();
	StrangeEllipse(int x, int y, string color, int radius, int radius2);
	StrangeEllipse(const StrangeEllipse& el);
	~StrangeEllipse();
	double perimeter();
};

