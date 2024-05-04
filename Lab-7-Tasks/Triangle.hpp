#pragma once

namespace shapes
{
	class Triangle
	{
	private:
		float mBaseLength;
		float mHeight;
	public:
		Triangle();
		~Triangle();
		
		float getBaseLength() const;
		void setBaseLength(float newBaseLength);
		
		float getHeight() const;
		void setHeight(float newHeight);
	};
}
