#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

/* Prints the prompt that requests which shape to select.
Also includes the option to quit the program */
void shapePrompt();

/* Allows the user to select the option they wish to choose.
The reference parameter running allows for the notification of the quit program to end any loops if needed*/
void selectOption(bool& running);

/* Prompts the user for a nen-negative demcimal-point number.
Validates the input and, if invalid, re-prompts until a valid input is given
Returns the non-negative decimal as a float*/
float enterNonNegativeNumber();

/* Checks if the given value is between the min and max (inclusive).
Returns true iff min <= value <= max */
bool isInRange(const int value, const int min, const int max);

/* Prints error message informing user that the input they provided is invalid
Takes the invalid input as a string*/
void printInvalidInput(const string& input);

/* Prints error message informing user that the input they provided is invalid
Takes the invalid input as a int*/
void printInvalidInput(const int& input);

/* Prints error message informing user that the input they provided is invalid
Takes the invalid input as a float*/
void printInvalidInput(const float& input);

int main()
{
	bool running = true;
	while(running){
		shapePrompt();
		selectOption(running);
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

void selectOption(bool& running){
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

float enterNonNegativeNumber()
{
	float number = -1;
	
	while(number < 0 || isnan(number) || isinf(number)){
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

bool isInRange(const int value, const int min, const int max)
{
	return value >= min && value <= max;
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