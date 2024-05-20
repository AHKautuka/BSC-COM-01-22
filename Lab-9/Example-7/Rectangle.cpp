#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : Polygon(width, height)
{
	
}

int Rectangle::Area()
{
	return mWidth * mHeight;
}