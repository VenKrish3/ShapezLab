#include "RightTriangle.hpp"
#include <iostream>
#include <cmath>

using namespace std;

RightTriangle::RightTriangle(float base, float height) {
	this->base = base;
	this->height = height;
}
float RightTriangle::getArea()
{
	return (base * height) / 2;
};
	
float RightTriangle::getPerimeter()
{
	return (base + height) + sqrt((base * base) + (height * height));
};

