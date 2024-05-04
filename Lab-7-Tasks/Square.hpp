#pragma once

namespace shapes
{
	class Square
	{
	private:
		float mSideLength;
	public:
		Square();
		~Square();
		
		float getSideLength() const;
		void setSideLength(float newSideLength);
	};
}
