#include "UserInput.hpp"
#include "Rectangle.hpp"

using namespace std;

int main()
{
	Rectangle rectangle1;
	
	cout << "Enter the length of the first Rectangle (a nonnegative decimal number):\n";
	rectangle1.setLength(enterNonNegativeNumber());
	
	cout << "Enter the width of the first Rectangle (a nonnegative decimal number):\n";
	rectangle1.setWidth(enterNonNegativeNumber());
	
	cout << "The first rectangle has an area of " << rectangle1.getArea() << ".\n";
	
	cout << "Enter the length of the second Rectangle (a nonnegative decimal number):\n";
	float length = enterNonNegativeNumber();
	
	cout << "Enter the width of the second Rectangle (a nonnegative decimal number):\n";
	float width = enterNonNegativeNumber();
	
	Rectangle rectangle2(length, width);
	
	cout << "The second rectangle has an area of " << rectangle2.getArea() << ".\n";
	
	cout << endl;
	
	return 0;
}
