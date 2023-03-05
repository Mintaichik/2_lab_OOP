#include "Section.h"
#include <iostream>

Section::Section() {
	cout << "Section()" << endl;
	p1 = new Point_ptr;
	p2 = new Point_ptr;
}

Section::Section(int x1, int y1, string color1, int x2, int y2, string color2) {
	cout << "Section(int x1, int y1, int x2, int y2)" << endl;
	p1 = new Point_ptr(x1, y1, color1);
	p2 = new Point_ptr(x2, y2, color2);
}

Section::Section(const Section& s) {
	cout << "Section(const Section& s)" << endl;
	p1 = new Point_ptr(*(s.p1));
	p2 = new Point_ptr(*(s.p2));
}

Section::~Section() {
	cout << "~Section()" << endl;
	delete p1;
	delete p2;
}