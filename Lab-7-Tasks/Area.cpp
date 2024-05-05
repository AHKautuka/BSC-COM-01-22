#include "Area.hpp"
using namespace shapes;

float Area::calculateArea(const Square& square)
{
	const float sideLength = square.getSideLength();
	return sideLength * sideLength;
}

float Area::calculateArea(const Triangle& triangle)
{
	return triangle.getBaseLength() * triangle.getHeight();
}

float Area::calculateArea(const Circle& circle)
{
	const float radius = circle.getRadius();
	return (float) (PI * radius * radius);
}