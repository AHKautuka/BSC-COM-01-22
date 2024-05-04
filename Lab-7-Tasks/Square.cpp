#include "Square.hpp"
using namespace shapes;

Square::Square()
{
	
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