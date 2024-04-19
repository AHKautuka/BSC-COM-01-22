#include "Shape.hpp"

Shape::Shape(string name)
{
	this->name = name;
}

string Shape::getName()
{
	return name;
}