#include "Square.hpp"
using namespace shapes;

Square::Square()
{
	mSideLength = 0;
}

Square::~Square()
{
	
}

float Square::getSideLength() const
{
	return mSideLength;
}

void Square::setSideLength(float newSideLength)
{
	mSideLength = newSideLength;
}