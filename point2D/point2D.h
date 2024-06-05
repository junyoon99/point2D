#include <iostream>
#pragma once

class point2D 
{
private:
	int mX;
	int mY;
public:
	void SetXY(int x, int y);
	void Print() const;
	float Distance() const;
	void GetXY(int &x, int &y) const;

	point2D()
	{
		std::cout << "construct" << std::endl;
	}
	~point2D()
	{
		std::cout << "destruct" << std::endl;
	}
};