#pragma once
#include <string>

using namespace std;

class Color {
private: 
	string color;
public:
	Color();
	Color(string color);
	Color(const Color& color);
	~Color();
};