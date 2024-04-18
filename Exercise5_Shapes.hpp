#pragma once
#include "Shape.hpp"

class Square : Shape
{
private:
	float side_length;
public:
	Square(float side_length);
	
	virtual float getArea();
};

class Rectangle : Shape
{
private:
	float width;
	float height;
public:
	Rectangle(float width, float height);
	
	virtual float getArea();
};

class Triangle : Shape
{
private:
	float base_length;
	float height;
public:
	Triangle(float base_length, float height);
	
	virtual float getArea();
};