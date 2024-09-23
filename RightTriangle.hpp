#pragma once
#ifndef RIGHTTRIANGLE_HPP
#define	RIGHTTRIANGLE_HPP
#endif

class RightTriangle : public Shape
{
	public:
		void getArea();
		void getPerimeter();
	private:
		int length;
		int width;
};
