#pragma once
#ifndef SQUARE_HPP
#define	SQUARE_HPP
#endif

class Square : public Rectangle
{
	public:
		Square(float);
		float getArea() override;
		float getPerimeter() override;
	private:
		float base;
};
