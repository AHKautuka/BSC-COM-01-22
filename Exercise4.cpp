#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool running = true;
	cout << "Enter an integer value between 5 and 10.\n";
	while (running)
	{
		string input;
		getline(cin, input);
		
		int number;
		
		try
		{
			number = stoi(input);
		}
		catch(const std::exception& e)
		{
			cout << "Sorry, you have entered an invalid number, please try again.\n";
			continue;
		}
		
		cout << "You entered" << number << "\n";
	}
	cout << endl;
	
	return 0;
}
