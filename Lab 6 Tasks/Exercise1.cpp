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
	
	delete dynamicInteger;
	delete dynamicString;
	
	cout << endl;
	
	return 0;
}
