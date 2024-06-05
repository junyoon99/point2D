#include "point2D.h"

void point2D::SetXY(int x, int y)
	{
		mX = x;
		mY = y;
	}

void point2D::Print() const
	{
		std::cout << "( " << mX << ", " << mY << " )" << std::endl;
	}

float point2D::Distance() const
	{
		return sqrt(mX * mX + mY * mY);
	}

void point2D::GetXY(int &x, int &y) const
	{
		x = mX;
		y = mY;
	}