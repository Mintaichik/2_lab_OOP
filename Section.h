#pragma once
#include "Point_ptr.h"

class Section  {
private:
	Point_ptr *p1;
	Point_ptr *p2;
public:
	Section();
	Section(int x1, int y1, string color1, int x2, int y2, string color2);
	Section(const Section& s);
	~Section();
};