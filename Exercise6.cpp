#include <iostream>
#include <fstream>
using namespace std;

string readFile(const string& path);
int countVowels(const string& text);
bool isVowel(const char& character);

int main()
{
	string fileData = readFile("res/Exercise6_Info.txt");
	
	cout << fileData;
	cout << endl;
	
	return 0;
}

string readFile(const string& path)
{
	string fileData = "";
	ifstream textFile(path);
	
	if (textFile.is_open())
	{
		string currentLine;
		while (getline(textFile, currentLine))
		{
			fileData.append(currentLine).append("\n");
		}
		
		textFile.close();
	}
	else
	{
		cout << "Unable to open file\n";
	}
	
	return fileData;
}

int countVowels(const string& text)
{
	unsigned int vowelNum = 0;
	
	for (int i = 0; i < text.length(); i++)
	{
		if (isVowel(text[i]))
		{
			vowelNum++;
		}
		
	}
	
	return vowelNum;
}

bool isVowel(const char& character)
{
	return character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U';
}