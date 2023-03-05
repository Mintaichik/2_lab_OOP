#include "Section.h"
#include <iostream>

Section::Section() {
	cout << "Section()" << endl;
	p1 = new Point;
	p2 = new Point;
}

Section::Section(int x1, int y1, string color1, int x2, int y2, string color2) {
	cout << "Section(int x1, int y1, int x2, int y2)" << endl;
	p1 = new Point(x1, y1, color1);
	p2 = new Point(x2, y2, color2);
}

Section::Section(const Section& s) {
	cout << "Section(const Section& s)" << endl;
	p1 = new Point(*(s.p1));
	p2 = new Point(*(s.p2));
}

Section::~Section() {
	cout << "~Section()" << endl;
	delete p1;
	delete p2;
}