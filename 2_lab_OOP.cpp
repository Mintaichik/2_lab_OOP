#include <iostream>
#include "Color.h"
#include "Point.h"

using namespace std;

int main() {
	{
		Color a;
		Color b("black");
		Color c(b);
	}

	cout << endl;

	Color *a = new Color;
	Color *b = new Color("black");
	Color *c = new Color(*b);

	delete a;
	delete b;
	delete c;

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
}