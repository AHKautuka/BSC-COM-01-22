#include <iostream>
#include <vector>

using namespace std;

void shapePrompt(vector<string> shapes);

int main()
{
	vector<string> shapes = {"Square", "Rectangle", "Triangle"};
	shapePrompt(shapes);
	cout << endl;
	return 0;
}

void shapePrompt(vector<string> shapes)
{
	cout << "Please select the area of the shape to calculate\n";
	
	for (int i = 0; i < shapes.size(); i++)
	{
		cout << (i + 1) << ". " << shapes[i] << "\n";
	}
	cout << shapes.size() << ". Quit Program\n";
	
	cout << endl;
	cout << "Enter selection\n";
}
