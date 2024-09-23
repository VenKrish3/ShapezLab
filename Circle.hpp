#pragma once
#ifndef CIRCLE_HPP
#define	CIRCLE_HPP
#endif


class Circle : public Shape
{
	public:
		void getArea();
		void getPerimeter();
	private:
		int radius;	
		float pi = 3.14;
};
