#include "Exercise5_Shapes.hpp"

Square::Square(float side_length) : Shape("Square")
{
	this->side_length = side_length;
}

float Square::getArea()
{
	return side_length * side_length;
}

Rectangle::Rectangle(float width, float height) : Shape("Rectangle")
{
	this->width = width;
	this->height = height;
}

float Rectangle::getArea()
{
	return width * height;
}

Triangle::Triangle(float base_length, float height) : Shape("Triangle")
{
	this->base_length = base_length;
	this->height = height;
}

float Triangle::getArea()
{
	return base_length * height * 0.5f;
}