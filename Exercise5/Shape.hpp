#pragma once
#include <iostream>
#include <vector>
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
	
	virtual void setSize(const vector<float>& size) = 0;
	virtual float getArea() = 0;
};