#include "Rectangle.hpp"

Rectangle::Rectangle()
{
	mLength = 0;
	mWidth = 0;
}

Rectangle::~Rectangle()
{
	
}

float Rectangle::getLength() const
{
	return mLength;
}

void Rectangle::setLength(float newLength)
{
	mLength = newLength;
}

float Rectangle::getWidth() const
{
	return mWidth;
}

void Rectangle::setWidth(float newWidth)
{
	mWidth = newWidth;
}