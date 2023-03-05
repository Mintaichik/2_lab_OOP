#pragma once
#include "Circle.h"

class Ellipse : public Circle
{
private:
	int radius2;
public:
	Ellipse();
	Ellipse(int x, int y, string color, int radius, int radius2);
	Ellipse(const Ellipse& el);
	~Ellipse();
};

