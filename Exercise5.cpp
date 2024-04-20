#include <iostream>
#include <vector>
#include <string>

using namespace std;

void shapePrompt();
void selectShape(bool& running);
void printInvalidInput(const string& input);
void printInvalidInput(const int& input);
void printInvalidInput(const float& input);
bool isInRange(const int value, const int min, const int max);
float enterNonNegativeNumber();

int main()
{
	bool running = true;
	while(running){
		shapePrompt();
		selectShape(running);
	}
	
	return 0;
}

void shapePrompt()
{
	cout << "Please select the area of the shape to calculate\n";
	
	cout << "1. Square\n";
	cout << "2. Rectangle\n";
	cout << "3. Triangle\n";
	cout << "4. Quit Program\n";
	
	cout << "\n";
}

void selectShape(bool& running){
	cout << "Enter selection\n";
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
			
			cout << "Please enter the side length (as a non-negative decimal number):\n";
			float sideLength = enterNonNegativeNumber();
			
			cout << "The Area is " << (sideLength * sideLength) << "\n";
			break;
		}
		
		case 2:
		{
			cout << "You have chosen Rectangle\n";
			
			cout << "Please enter the width (as a non-negative decimal number):\n";
			float width = enterNonNegativeNumber();
			cout << "Please enter the height (as a non-negative decimal number):\n";
			float height = enterNonNegativeNumber();
			
			cout << "The Area is " << (width * height) << "\n";
			break;
		}
		
		case 3:
		{
			cout << "You have chosen Triangle\n";
			
			cout << "Please enter the base length (as a non-negative decimal number):\n";
			float baseLength = enterNonNegativeNumber();
			cout << "Please enter the height (as a non-negative decimal number):\n";
			float height = enterNonNegativeNumber();
			
			cout << "The Area is " << (baseLength * height * 0.5f) << "\n";
			break;
		}
		
		default:{
			printInvalidInput(selection);
			break;
		}
	}
	cout << "\n";
}

void printInvalidInput(const string& input)
{
	cerr << "Your input was: " << input << " which is an invalid input\n";
	cout << "Please enter a valid input!!!\n";
}

void printInvalidInput(const int& input)
{
	cerr << "Your input was: " << input << " which is an invalid input\n";
	cout << "Please enter a valid input!!!\n";
}

void printInvalidInput(const float& input)
{
	cerr << "Your input was: " << input << " which is an invalid input\n";
	cout << "Please enter a valid input!!!\n";
}

bool isInRange(const int value, const int min, const int max)
{
	return value >= min && value <= max;
}

float enterNonNegativeNumber()
{
	float number = -1;
	
	// number != number checks for NaN
	while(number < 0 || number != number){
		string line;
		getline(cin, line);
		cout << "\n";
		
		try
		{
			number = stof(line);
			
			if(number < 0 || number != number)
			{
				printInvalidInput(number);
			}
		}
		catch(const exception& e)
		{
			printInvalidInput(line);
		}
	}
	
	return number;
}