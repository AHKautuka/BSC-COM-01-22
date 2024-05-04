#include "Triangle.hpp"
using namespace shapes;

Triangle::Triangle()
{
	mBaseLength = 0;
	mHeight = 0;
}

Triangle::~Triangle()
{
	
}

float Triangle::getBaseLength() const
{
	return mBaseLength;
}

void Triangle::setBaseLength(float newBaseLength)
{
	mBaseLength = newBaseLength;
}

float Triangle::getHeight() const
{
	return mHeight;
}

void Triangle::setHeight(float newHeight)
{
	mHeight = newHeight;
}