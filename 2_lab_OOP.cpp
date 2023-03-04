#include <iostream>
#include "Color.h"
#include "Point.h"
#include "Circle.h"

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

	{
		Point p;
		Point p2(1, 2, "black");
		Point p3(p2);
	}

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

}