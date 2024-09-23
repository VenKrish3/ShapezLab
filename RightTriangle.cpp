#include "RightTriangle.hpp"
#include <iostream>
#include <cmath>

using namespace std;

RightTriangle(float base, float height) {
	this->base = base;
	this->height = height;
}
float getArea()
{
	return (base * height) / 2;
};
	
float getPerimeter()
{
	return (base + height) + sqrt((base * base) + (height * height);
};

