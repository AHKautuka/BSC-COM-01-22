#pragma once

namespace shapes
{
	class Circle
	{
	private:
		float mRadius;
	public:
		Circle();
		~Circle();
		
		float getRadius() const;
		void setRadius(float newRadius);
	};
}
