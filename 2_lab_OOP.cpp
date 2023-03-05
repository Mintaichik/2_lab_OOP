#include <iostream>
#include "Color.h"
#include "Point.h"
#include "Point_ptr.h"
#include "Circle.h"
#include "Section.h"
#include "StrangeEllipse.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
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

	cout << "\n\n";

	Point_ptr *p_ptr = new Point_ptr;
	Point_ptr *p2_ptr = new Point_ptr(1, 2, "black");
	Point_ptr *p3_ptr = new Point_ptr(*p2_ptr);
	Point_ptr *p4_ptr = new Point_ptr(p3_ptr);

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
	{
		Section s;
		Section s1(1, 2, "black", 3, 4, "white");
		Section s2(s1);

	}

	cout << endl;

	Circle* c = new Circle;
	Circle *c2 = new Circle(1, 2, "black", 5);
	Circle* c3 = new Circle(*c);
	delete c;
	delete c3;

	cout << endl;

	StrangeEllipse* el = new StrangeEllipse;
	StrangeEllipse* el2 = new StrangeEllipse(1, 2, "black", 5, 6);
	StrangeEllipse* el3 = new StrangeEllipse(*el);
	delete el;
	delete el3;

	cout << "Периметр круга = " << c2->perimeter() << endl;
	cout << "Периметр эллипса = " << el2->perimeter() << endl;
	c2->setX(10);
	c2->setY(10);
	el2->setX(10);
	el2->setY(10);
	c2->setRadius(10);
	el2->setRadius(10);
	el2->setColor("red");
	c2->setColor("green");
	cout << "Периметр круга = " << c2->perimeter() << endl;
	cout << "Периметр эллипса = " << el2->perimeter() << endl;
	delete c2;
	delete el2;

	cout << "\n\n";

	Point_ptr *pa = new StrangeEllipse(1, 2, "red", 3, 4);
	delete pa;

	//StrangeEllipse *pq = new Point_ptr(1, 2);
}