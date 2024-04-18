#pragma once
#include <iostream>
using namespace std;

class Shape
{
private:
	string name;
protected:
	Shape(string name);
public:
	virtual ~Shape();
	
	string getName();
	
	virtual float getArea() = 0;
};