#pragma once

#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"

namespace shapes{
class Area
	{
	public:
		static float calculateArea(const Square& square);
		static float calculateArea(const Triangle& triangle);
		static float calculateArea(const Circle& circle);
	};
}