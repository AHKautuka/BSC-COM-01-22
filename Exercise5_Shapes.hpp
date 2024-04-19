#pragma once
#include "Shape.hpp"

class Square : public Shape
{
private:
	float sideLength;
public:
	Square();
	
	virtual void setSize(const vector<float>& size);
	virtual float getArea();
};

class Rectangle : public Shape
{
private:
	float width;
	float height;
public:
	Rectangle();
	
	virtual void setSize(const vector<float>& size);
	virtual float getArea();
};

class Triangle : public Shape
{
private:
	float baseLength;
	float height;
public:
	Triangle();
	
	virtual void setSize(const vector<float>& size);
	virtual float getArea();
};