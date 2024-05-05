#include <iostream>

#include "Area.hpp"
#include "UserInput.hpp"

using namespace std;
using namespace shapes;

void promptOptions();
void selectOption(bool& running);

int main()
{
	bool running = true;
	while(running){
		promptOptions();
		selectOption(running);
	}
	
	cout << endl;
	
	return 0;
}

void promptOptions()
{
	cout << "Please select an option below, using the correct index:\n";
	
	cout << "1. Calculate the area of a square\n";
	cout << "2. Calculate the area of a triangle\n";
	cout << "3. Calculate the area of a circle\n";
	cout << "4. Quit\n";
	
	cout << "\n";
}

void selectOption(bool& running){
	cout << "Enter selection:\n";
	string input;
	getline(cin, input);
	cout << "\n";
	
	int selection;
	try
	{
		selection = stoi(input);
	}
	catch(const exception& e)
	{
		printInvalidInput(input);
		return;
	}
	
	switch (selection)
	{
		case 4:
		{
			running = false;
			return;
		}
		
		case 1:
		{
			cout << "You have chosen Square\n";
			
			cout << "Please enter the length of a side (as a non-negative decimal number):\n";
			Square square(enterNonNegativeNumber());
			
			cout << "The Area is " << Area::calculateArea(square) << "\n";
			break;
		}
		
		case 2:
		{
			cout << "You have chosen Triangle\n";
			
			cout << "Please enter the length of the base side (as a non-negative decimal number):\n";
			float baseLength = enterNonNegativeNumber();
			
			cout << "Please enter the height (as a non-negative decimal number):\n";
			float height = enterNonNegativeNumber();
			
			Triangle triangle(baseLength, height);
			
			cout << "The Area is " << Area::calculateArea(triangle) << "\n";
			break;
		}
		
		case 3:
		{
			cout << "You have chosen Circle\n";
			
			cout << "Please enter the radius (as a non-negative decimal number):\n";
			Circle circle(enterNonNegativeNumber());
			
			cout << "The Area is " << Area::calculateArea(circle) << "\n";
			break;
		}
		
		default:{
			printInvalidInput(selection);
			break;
		}
	}
	cout << "\n";
}