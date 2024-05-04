#pragma once

namespace shapes
{
	const double PI = 3.1415926535897932384626433832795f;
	
	class Circle
	{
	private:
		float mRadius;
	public:
		Circle();
		Circle(float radius);
		~Circle();
		
		float getRadius() const;
		void setRadius(float newRadius);
	};
}
