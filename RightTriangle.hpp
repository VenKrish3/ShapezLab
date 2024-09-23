#pragma once
#ifndef RIGHTTRIANGLE_HPP
#define	RIGHTTRIANGLE_HPP
#endif

class RightTriangle : public Shape
{
	public:
		RightTriangle(float, float);
		float getArea();
		float getPerimeter();
	private:
		float height;
		float base;
};
