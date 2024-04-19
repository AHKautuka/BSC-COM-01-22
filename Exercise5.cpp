#include <iostream>
#include <vector>
#include <string>

#include "Exercise5_Shapes.hpp"

using namespace std;

void shapePrompt(const vector<Shape*>& shapes);
void selectShape(const vector<Shape*>& shapes, bool& running);
void printInvalidInput(const string& input);
void printInvalidInput(const int& input);
bool isInRange(const int value, const int min, const int max);

int main()
{
	vector<Shape*> shapes = {new Square, new Rectangle, new Triangle};
	
	bool running = true;
	while(running){
		shapePrompt(shapes);
		selectShape(shapes, running);
	}
	cout << endl;
	
	for(Shape* shape : shapes){
		delete shape;
	}
	
	return 0;
}

void shapePrompt(const vector<Shape*>& shapes)
{
	cout << "Please select the area of the shape to calculate\n";
	
	for (int i = 0; i < shapes.size(); i++)
	{
		cout << (i + 1) << ". " << shapes[i]->getName() << "\n";
	}
	cout << (shapes.size() + 1) << ". Quit Program\n";
	
	cout << endl;
}

void selectShape(const vector<Shape*>& shapes, bool& running){
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
	
	if(selection == (shapes.size() + 1))
	{
		running = false;
		return;
	}
	else if (isInRange(selection, 1, shapes.size()))
	{
		cout << shapes[selection - 1]->getName() << "\n";
	}
	else
	{
		printInvalidInput(selection);
	}
}

void printInvalidInput(const string& input)
{
	cout << "Your input was: " << input << " which is an invalid input\n";
	cout << "Please enter a valid input!!!\n";
}

void printInvalidInput(const int& input)
{
	cout << "Your input was: " << input << " which is an invalid input\n";
	cout << "Please enter a valid input!!!\n";
}

bool isInRange(const int value, const int min, const int max)
{
	return value >= min && value <= max;
}