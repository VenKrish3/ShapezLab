#pragma once
#ifndef RECTANGLE_HPP
#define	RECTANGLE_HPP
#endif

class Rectangle : public Shape
{
	public:
		float getArea();
		float getPerimeter();
	private:
		int length;
		int width;
};
