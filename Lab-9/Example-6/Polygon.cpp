#include <iostream>

#include "Polygon.h"

using namespace std;

void Polygon::SetValues(int width, int height)
{
	mWidth = width;
	mHeight = height;
}

void Polygon::PrintArea()
{
	cout << this->Area() << '\n';
}