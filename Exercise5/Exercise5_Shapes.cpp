#include "Exercise5_Shapes.hpp"

Square::Square() : Shape("Square")
{}

void Square::setSize(const vector<float>& size)
{
	if(size.size() != 1)
	{
		throw exception();
	}
	sideLength = size[0];
}

float Square::getArea()
{
	return sideLength * sideLength;
}

Rectangle::Rectangle() : Shape("Rectangle")
{}

void Rectangle::setSize(const vector<float>& size)
{
	if(size.size() != 2)
	{
		throw exception();
	}
	width = size[0];
	height = size[1];
}

float Rectangle::getArea()
{
	return width * height;
}

Triangle::Triangle() : Shape("Triangle")
{}

void Triangle::setSize(const vector<float>& size)
{
	if(size.size() != 2)
	{
		throw exception();
	}
	baseLength = size[0];
	height = size[1];
}

float Triangle::getArea()
{
	return baseLength * height * 0.5f;
}