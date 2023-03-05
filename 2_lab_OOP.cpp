#include <iostream>
#include "Color.h"
#include "Point.h"
#include "Circle.h"
#include "Section.h"
#include "StrangeEllipse.h"

using namespace std;

int main() {
	{
		Point p;
		Point p2(3, 4, "black");
		Point p3(p2);
	}

	cout << endl;

	Point *p = new Point;
	Point *p2 = new Point(1, 2, "black");
	Point *p3 = new Point(*p2);
	Point *p4 = new Point(p3);

	delete p;
	delete p2;
	delete p3;
	delete p4;

	cout << endl;

	Section* s = new Section;
	Section* s1 = new Section(1, 2, "black", 3, 4, "white");
	Section* s2 = new Section(*s1);
	delete s;
	delete s1;
	delete s2;

	cout << endl;

	Circle* c = new Circle;
	Circle c2 = Circle(1, 2, "black", 5);
	Circle* c3 = new Circle(*c);
	double x = c2.perimeter();
	cout << x << endl;
	delete c;
	delete c3;

	cout << endl;

	StrangeEllipse* el = new StrangeEllipse;
	StrangeEllipse el2 = StrangeEllipse(1, 2, "black", 5, 6);
	StrangeEllipse* el3 = new StrangeEllipse(*el);
	double y = el2.perimeter();
	cout << y << endl;
	delete el;
	delete el3;

	cout << endl;

	Point *pa = new StrangeEllipse(1, 2, "red", 3, 4);
	delete pa;
}