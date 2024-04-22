#include <iostream>
using namespace std;

int inputInteger();

int main()
{
	int* dynamicInteger = new int;
	string* dynamicString = new string;
	
	if(dynamicInteger == nullptr || dynamicString == nullptr)
	{
		cerr << "Fatal. Could not allocate sufficient memory.\n";
		cerr << "Terminating...\n" << endl;
		return 1;
	}
	
	cout << "Enter an integer value:\n";
	*dynamicInteger = inputInteger();
	
	cout << "Enter some text:\n";
	getline(cin, *dynamicString);
	
	cout << endl;
	
	cout << "The integer entered is " << *dynamicInteger << "\n";
	cout << "The text entered is \"" << *dynamicString << "\"\n";
	
	delete dynamicInteger;
	delete dynamicString;
	
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
