#pragma once

class Rectangle
{
private:
	float mLength;
	float mWidth;
public:
	Rectangle();
	Rectangle(float length, float width);
	~Rectangle();
	
	float getLength() const;
	void setLength(float newLength);
	
	float getWidth() const;
	void setWidth(float newWidth);
	
	float getArea() const;
};