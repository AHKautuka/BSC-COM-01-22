#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;

string readFile(const string& path);
int countVowels(const string& text);
bool isVowel(char character);
int countWords(const string& text);
vector<string> tokenize(const string& text);

int main()
{
	string fileData = readFile("res/Exercise6_Info.txt");
	
	cout << "There are " << countVowels(fileData) << " vowels.\n";
	cout << "There are " << countWords(fileData) << " words.\n";
	
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

bool isVowel(char character)
{
	character = toupper(character);
	return character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U';
}

int countWords(const string& text)
{
	int wordNum;
	vector<string> tokens = tokenize(text);
	
	for(string token : tokens)
	{
		if(!token.empty())
		{
			wordNum++;
		}
	}
	
	return wordNum;
}

vector<string> tokenize(const string& text)
{
	istringstream textStream(text);
	vector<string> tokens{istream_iterator<string>{textStream}, istream_iterator<string>{}};
	return tokens;
}