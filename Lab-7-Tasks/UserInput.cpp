#include "UserInput.hpp"

using namespace std;

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