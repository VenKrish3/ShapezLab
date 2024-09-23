#include "Circle.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(float radius)
{
	this->radius = radius;
}

float getArea()
{
	return pow((pi*radius),2);
};
	
float getPerimeter()
{
	return 2*pi*radius;
};

