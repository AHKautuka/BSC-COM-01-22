#include <iostream>

#include "Polygon.h"

using namespace std;

Polygon::Polygon(int width, int height)
{
	SetValues(width, height);
}

void Polygon::SetValues(int width, int height)
{
	mWidth = width;
	mHeight = height;
}

void Polygon::PrintArea()
{
	cout << this->Area() << '\n';
}