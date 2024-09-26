#include "square.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Square::Square(float base) {
	this->base = base;
}
float Square::getArea()
{
	return pow(base,2);
};
	
float Square::getPerimeter()
{
	return base * 4;
};
