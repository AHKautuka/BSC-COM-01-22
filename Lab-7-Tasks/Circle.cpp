#include "Circle.hpp"
using namespace shapes;

Circle::Circle()
{
	mRadius = 0;
}

Circle::Circle(float radius)
{
	mRadius = radius;
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