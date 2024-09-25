#include "Circle.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(float radius)
{
	this->radius = radius;
}

float Circle::getArea()
{
	return this->pi * pow(this->radius,2);
};
	
float Circle::getPerimeter()
{
	return 2*(this->pi)*(this->radius);
};

