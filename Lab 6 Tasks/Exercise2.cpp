#include <iostream>
using namespace std;

int inputInteger();

/* Checks if the given value is between the min and max (inclusive).
Returns true iff min <= value <= max */
bool isInRange(const int value, const int min, const int max);

int main()
{
	
	return 0;
}

int inputInteger()
{
	int result;
	bool success = false;
	
	do{
		string line;
		getline(cin, line);
		try{
			result = stoi(line);
		}
		catch (const exception& e)
		{
			cerr << "Cannot read \"" << line << "\" as an integer. Try again!\n";
			continue;
		}
		
		// only evaluates if stoi(line) is successful
		success = true;
	}while(!success);
	
	return result;
}

bool isInRange(const int value, const int min, const int max)
{
	return value >= min && value <= max;
}
