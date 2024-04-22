#include <iostream>
using namespace std;

int inputInteger();

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
