#include <iostream>
#include "Color.h"
#include "Point.h"
#include "Circle.h"
#include "Section.h"
#include "Ellipse.h"

using namespace std;

int main() {
	{
		Color a;
		Color b("black");
		Color e(b);
	}

	cout << endl;

	Color *a = new Color;
	Color *b = new Color("black");
	Color *e = new Color(*b);

	delete a;
	delete b;
	delete e;

	cout << endl;

	Point *p = new Point;
	Point *p2 = new Point(1, 2, "black");
	Point *p3 = new Point(*p2);

	delete p;
	delete p2;
	delete p3;

	cout << endl;

	Circle* c = new Circle;
	Circle* c2 = new Circle(1, 2, "black", 5);
	Circle* c3 = new Circle(*c2);
	delete c;
	delete c2;
	delete c3;

	cout << endl;

	Section* s = new Section;
	Section* s1 = new Section(1, 2, "black", 3, 4, "white");
	Section* s2 = new Section(*s1);
	delete s;
	delete s1;
	delete s2;

	cout << endl;

	Ellipse* el = new Ellipse;
	Ellipse* el2 = new Ellipse(1, 2, "black", 5, 6);
	Ellipse* el3 = new Ellipse(*el2);
	delete el;
	delete el2;
	delete el3;
}