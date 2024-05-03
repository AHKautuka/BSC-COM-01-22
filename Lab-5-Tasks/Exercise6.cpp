#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;

/* Reads a file as a string.
Takes the [absolute or relative] path of the file as a string.
Returns the contents of the file as a string, if the file is found. Otherwise, it returns an empty string.*/
string readFile(const string& path);

/* Counts the number of English vowels (a, e, i, o, u) in a given text.
Takes string (the text) to count vowels from.
Returns the number of vowels*/
unsigned int countVowels(const string& text);

/* Checks if a character is an English vowel (a, e, i, o, u).
Takes in a character.
Returns true if the character is a vowel; returns false, otherwise.*/
bool isVowel(char character);

/* Counts the number of words in a given text.

Take note that it is assumed that all non-empty tokens are words,
and do not necessarily have to conform to any legal spelling or grammar.
For Example, " I took COM221 in 2024 at age 19 " has 8 words.

Takes a string (the text) to count words from.
Returns the number of words.*/
int countWords(const string& text);

/* Splits a given text into a list of tokens.
Take note that the resultant list may contain empty strings.
Takes a string (the text) to tokenize.
Returns the list of tokens as a string vector.*/
vector<string> tokenize(const string& text);

/* Reverses the order of every character in a given text.
Takes:
- the text as a string.
- a boolean determining whether or not to skip a newline that ends the text string.
Returns the reversed text.*/
string reverse(const string& text, const bool skipEndingNewline);

/* Capitalizes the second letter of every word in the list.
Take note:
- Words with less than 2 characters are ignored.
- Words where the second character is not capitalizable (e.g. non-letters) are not affected.

Takes a list of words as a vector of strings.
Returns a new list of words with each second character capitalized as a vector of strings.*/
vector<string> capitalizeSecondLetters(const vector<string>& words);

int main()
{
	string fileData = readFile("res/Exercise6_Info.txt");
	
	cout << "There are " << countVowels(fileData) << " vowels.\n";
	cout << "There are " << countWords(fileData) << " words.\n";
	cout << "Reversed text:\n";
	cout << reverse(fileData, true) << "\n";
	
	cout << "Text with the 2nd letter in each word capitalized:\n";
	vector<string> words = capitalizeSecondLetters(tokenize(fileData));
	for(string word : words)
	{
		cout << word << " ";
	}
	cout << "\n";
	
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
		/* Note that this implementation means that the fileData string
		will always end with a new line character*/
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

unsigned int countVowels(const string& text)
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

string reverse(const string& text, const bool skipEndingNewline)
{
	string reversedText = "";
	
	/* The last character tends to be a new line but if so this new line
	need not be printed, if the user does not require it */
	char lastChar = text[text.size() - 1];
	if(!(skipEndingNewline && lastChar == '\n'))
	{
		reversedText.append(1, lastChar);
	}
	
	// Skipped last char in text as it is already added (if necessary)
	for (int i = text.size() - 2; i >= 0; i--)
	{
		reversedText.append(1, text[i]);
	}
	
	return reversedText;
}

vector<string> capitalizeSecondLetters(const vector<string>& words)
{
	vector<string> result;
	
	for(string word : words)
	{
		string newWord = word;
		if(newWord.length() > 1){
			newWord[1] = toupper(newWord[1]);
		}
		result.push_back(newWord);
	}
	
	return result;
}