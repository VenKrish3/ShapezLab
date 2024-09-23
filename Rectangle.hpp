#pragma once
#ifndef RECTANGLE_HPP
#define	RECTANGLE_HPP
#endif

class Rectangle : public Shape
{
	public:
		Rectangle(float, float);
		float getArea();
		float getPerimeter();
	private:
		float length;
		float width;
};
