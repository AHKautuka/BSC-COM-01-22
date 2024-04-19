#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string fileData = "";
	ifstream textFile("res/Exercise6_Info.txt");
	
	if (textFile.is_open())
	{
		{
			string currentLine;
			while (getline(textFile, currentLine))
			{
				fileData.append(currentLine).append("\n");
			}
		}
		
		textFile.close();
	}
	else
	{
		cout << "Unable to open file\n";
	}
	
	cout << endl;
	
	return 0;
}
