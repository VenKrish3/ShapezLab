#include <iostream>
#include <cassert>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "RightTriangle.hpp"

using namespace std;

int main()
{
	Circle circle = new Circle();
	Rectangle rect = new rectangle();
	RightTriangle trang = new RightTriangle();
	assert(circle.getArea(3) == 28.27);
	assert(rect.getArea(3,3) == 9);
	assert(trang.getArea(3,3) == 4.5);
	assert(circle.getPerimeter(3) == 18.84);
	assert(rect.getPerimeter(3,3) == 12);
	assert(trang.getPerimeter(3,3) == 4.24);
}
