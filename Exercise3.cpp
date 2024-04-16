#include <iostream>
using namespace std;

int main()
{
	int arrayLength = 8;
	string array[arrayLength] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
	
	for (int i = 0; i < arrayLength; i++)
	{
		if (array[i].front() == 'B')
		{
			cout << array[i] << "\n";
		}
	}
	
	cout << endl;
	
	return 0;
}
