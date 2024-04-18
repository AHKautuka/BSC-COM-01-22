#include <iostream>
#include <vector>
#include <string>

using namespace std;

void shapePrompt(const vector<string>& shapes);
void selectShape(const vector<string>& shapes);
void printInvalidInput(const auto& input);

int main()
{
	vector<string> shapes = {"Square", "Rectangle", "Triangle"};
	
	bool running = true;
	while(running){
		shapePrompt(shapes);
		selectShape(shapes);
	}
	cout << endl;
	return 0;
}

void shapePrompt(const vector<string>& shapes)
{
	cout << "Please select the area of the shape to calculate\n";
	
	for (int i = 0; i < shapes.size(); i++)
	{
		cout << (i + 1) << ". " << shapes[i] << "\n";
	}
	cout << (shapes.size() + 1) << ". Quit Program\n";
	
	cout << endl;
}

void selectShape(const vector<string>& shapes){
	cout << "Enter selection\n";
	string input;
	getline(cin, input);
	
	int selection;
	try
	{
		selection = stoi(input);
	}
	catch(const exception& e)
	{
		printInvalidInput(input);
		return;
	}
}

void printInvalidInput(const auto& input)
{
	cout << "Your input was: " << input << " which is an invalid input\n";
	cout << "Please enter a valid input!!!\n";
}
