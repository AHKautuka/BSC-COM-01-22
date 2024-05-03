#pragma once

class Rectangle
{
private:
	float mLength;
	float mWidth;
public:
	Rectangle();
	~Rectangle();
	
	float getLength() const;
	void setLength(float newLength);
	
	float getWidth() const;
	void setWidth(float newWidth);
};