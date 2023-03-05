#include <iostream>
#include "Color.h"
#include "Point.h"
#include "Point_ptr.h"
#include "Circle.h"
#include "Section.h"
#include "StrangeEllipse.h"

using namespace std;

int main() {
	{
		Point_ptr p;
		Point_ptr p2(3, 4, "black");
		Point_ptr p3(p2);
	}

	cout << endl;

	Point_ptr *p_ptr = new Point_ptr;
	Point_ptr *p2_ptr = new Point_ptr(1, 2, "black");
	Point_ptr *p3_ptr = new Point_ptr(*p2_ptr);
	Point_ptr *p4_ptr = new Point_ptr(p3_ptr);

	cout << "\n\n";

	Point *p = new Point;
	Point *p2 = new Point(1, 2, "black");
	Point *p3 = new Point(*p2);
	Point *p4 = new Point(p3);

	cout << endl;

	delete p_ptr;
	delete p2_ptr;
	delete p3_ptr;
	delete p4_ptr;

	cout << "\n\n";

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

	Point_ptr *pa = new StrangeEllipse(1, 2, "red", 3, 4);
	delete pa;
}