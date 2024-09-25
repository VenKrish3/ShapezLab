#include "Rectangle.hpp"
#include <iostream>
#include <cmath>

using namespace std;


Rectangle::Rectangle(float length, float width) {
	this->length = length;
	this->width = width;
}

float Rectangle::getArea()
{
	return width * length;
};
	
float Rectangle::getPerimeter()
{
	return (width * 2) + (length * 2);
};

