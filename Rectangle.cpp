#include "Rectangle.hpp"
#include <iostream>
#include <cmath>

using namespace std;


Rectangle(float length, float height) {
	this->length = length;
	this->height = height;
}

float getArea()
{
	return width * length;
};
	
float getPerimeter()
{
	return (width * 2) + (length * 2);
};

