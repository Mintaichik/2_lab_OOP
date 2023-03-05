#pragma once
#include "Point.h"

class Section  {
protected:
	Point *p1;
	Point *p2;
public:
	Section();
	Section(int x1, int y1, string color1, int x2, int y2, string color2);
	Section(const Section& s);
	~Section();
};