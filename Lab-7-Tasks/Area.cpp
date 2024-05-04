#include "Area.hpp"
using namespace shapes;

static float calculateArea(const Square& square)
{
	const float sideLength = square.getSideLength();
	return sideLength * sideLength;
}

static float calculateArea(const Triangle& triangle)
{
	return triangle.getBaseLength() * triangle.getHeight();
}

static float calculateArea(const Circle& circle)
{
	const float radius = circle.getRadius();
	return (float) (PI * radius * radius);
}