#pragma once

#include "Polygon.h"

class Triangle : public Polygon {
public:
	Triangle(int baseLength, int height);
	
	int Area() override;
};