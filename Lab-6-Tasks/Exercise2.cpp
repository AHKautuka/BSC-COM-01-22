#include <iostream>
using namespace std;

int inputInteger();

double inputDecimalNumber();

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
	cout << endl;
	
	double* array = new double[rows * columns];
	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			cout << "Enter decimal entry " << (j + 1) << " of row " << (i + 1) << ":\n";
			array[i + j * rows] = inputDecimalNumber();
		}
	}
	cout << endl;
	
	cout << "2D Array:\n";
	cout << "{";
	
	for(int i = 0; i < rows; i++)
	{
		if(i != 0)
		{
			cout << " ";
		}
		cout << "{";
		
		for(int j = 0; j < columns; j++)
		{
			cout << array[i + j * rows];
			if(j < (columns - 1))
			{
				cout << ", ";
			}
		}
		
		cout << "}";
		if(i < (rows - 1))
		{
			cout << ",\n";
		}
	}
	
	cout << "}\n";
	
	delete[] array;
	
	cout << endl;
	
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

double inputDecimalNumber(){
	double result;
	bool success = false;
	
	do{
		string line;
		getline(cin, line);
		try{
			result = stod(line);
		}
		catch (const exception& e)
		{
			cerr << "Cannot read \"" << line << "\" as an decimal number. Try again!\n";
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
