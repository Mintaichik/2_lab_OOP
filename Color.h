#pragma once
#include <iostream>
#include <string>

using namespace std;

class Color {
protected: 
	string color;
public:
	Color() {
		cout << "Color()" << endl;
		color = "white";
	}
	Color(string color) {
		cout << "Color(string color)" << endl;
		this->color = color;
	}
	Color(const Color& color) {
		cout << "Color(const Color& color)" << endl;
		this->color = color.color;
	}
	~Color() {
		cout << "~Color() " << color << endl;
	}
};