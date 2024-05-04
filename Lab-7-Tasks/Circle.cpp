#include "Circle.hpp"
using namespace shapes;

Circle::Circle()
{
	
}

Circle::~Circle()
{
	
}

float Circle::getRadius() const
{
	return mRadius;
}

void Circle::setRadius(float newRadius)
{
	mRadius = newRadius;
}