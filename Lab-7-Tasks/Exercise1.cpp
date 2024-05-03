#include "UserInput.hpp"
#include "Rectangle.hpp"

using namespace std;

int main()
{
	Rectangle rectangle;
	
	cout << "Enter the length of the Rectangle (a nonnegative decimal number):\n";
	float length = enterNonNegativeNumber();
	rectangle.setLength(length);
	
	cout << "Enter the width of the Rectangle (a nonnegative decimal number):\n";
	float width = enterNonNegativeNumber();
	rectangle.setWidth(width);
	
	cout << "\nThe rectangle has an area of " << rectangle.getArea() << ".\n";
	
	cout << endl;
	
	return 0;
}
