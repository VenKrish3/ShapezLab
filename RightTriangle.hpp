#pragma once
#ifndef RIGHTTRIANGLE_HPP
#define	RIGHTTRIANGLE_HPP
#endif

class RightTriangle : public Shape
{
	public:
		float getArea();
		float getPerimeter();
	private:
		int length;
		int width;
};
