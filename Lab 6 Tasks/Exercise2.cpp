#include <iostream>
using namespace std;

int inputInteger();

/* Checks if the given value is between the min and max (inclusive).
Returns true iff min <= value <= max */
bool isInRange(const int value, const int min, const int max);

int main()
{
	cout << "You shall create a 2 dimensional array.\n";
	cout << "Please enter the number of rows (0-3):\n";
	int rows = -1;
	
	while(true)
	{
		rows = inputInteger();
		if(isInRange(rows, 0, 3))
		{
			break;
		}
		else
		{
			cerr << rows << " is not within 0 to 3 (inclusive). Try again!\n";
		}
	}
	
	cout << "Please enter the number of columns (0-3):\n";
	int columns = -1;
	
	while(true)
	{
		columns = inputInteger();
		if(isInRange(columns, 0, 3))
		{
			break;
		}
		else
		{
			cerr << columns << " is not within 0 to 3 (inclusive). Try again!\n";
		}
	}
	
	double* array = new double[rows * columns];
	
	
	
	delete[] array;
	
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
