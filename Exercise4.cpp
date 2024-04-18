#include <iostream>
#include <string>
using namespace std;

bool isInRange(const int value, const int min, const int max);

int main()
{
	int min = 5;
	int max = 10;
	bool running = true;
	
	cout << "Enter an integer value between " << min << " and " << max << ".\n";
	
	while (running)
	{
		string input;
		getline(cin, input);
		
		int number;
		
		try
		{
			number = stoi(input);
		}
		catch(const exception& e)
		{
			cout << "Sorry, you have entered an invalid number, please try again.\n";
			continue;
		}
		
		if (isInRange(number, min, max))
		{
			cout << "Your input value(" << number << ") has been accepted.";
			running = false;
		}
		else
		{
			cout << "You entered " << number << ". Please enter an number between " << min << " and " << max << ".\n";
		}
	}
	
	cout << endl;
	return 0;
}


bool isInRange(const int value, const int min, const int max)
{
	return value >= min && value <= max;
}