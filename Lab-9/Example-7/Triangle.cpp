#include "Triangle.h"

Triangle::Triangle(int baseLength, int height) : Polygon(baseLength, height)
{
	
}

int Triangle::Area()
{
	return mWidth * mHeight / 2;
}