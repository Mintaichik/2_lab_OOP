#include <iostream>
#include "Color.h"

using namespace std;

int main() {
	{
		Color a;
		Color b("black");
		Color c(b);
	}

	Color *a = new Color;
	Color *b = new Color("black");
	Color *c = new Color(*b);

	delete a;
	delete b;
	delete c;
}