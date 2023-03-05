#pragma once
#include <iostream>
#include <string>

using namespace std;

class Color {
protected: 
	string color;
public:
	Color() : color("none") {
		cout << "Color()" << endl;
	}

	Color(string color) : color(color){
		cout << "Color(string color)" << endl;
	}

	Color(const Color& color) : color(color.color) {
		cout << "Color(const Color& color)" << endl;
	}

	~Color() {
		cout << "~Color() " << color << endl;
	}

	void setColor(string color) {
		cout << "setColor(string color)" << endl;
		this->color = color;
	}
};