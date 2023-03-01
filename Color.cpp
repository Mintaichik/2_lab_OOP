#include "Color.h"
#include <iostream>


Color::Color() {
	cout << "Color()" << endl;
	color = "white";
}

Color::Color(string color) {
	cout << "Color(string color)" << endl;
	this->color = color;
}

Color::Color(const Color& color) {
	cout << "Color(const Color& color)" << endl;
	this->color = color.color;
}

Color::~Color() {
	cout << "~Color() " << color << endl;
}