#pragma once
#ifndef RECTANGLE_HPP
#define	RECTANGLE_HPP
#endif

class Rectangle : public Shape
{
	public:
		void getArea();
		void getPerimeter();
	private:
		int length;
		int width;
};
