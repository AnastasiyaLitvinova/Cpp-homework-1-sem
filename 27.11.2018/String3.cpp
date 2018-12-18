#include <iostream>
using namespace std;

const int N = 256;

void ReplaceWord(char* , char* , int );
int FindSubstringPlase(char* , char* );

int main()
{
	char string[N] = "";
	cout << "enter the string: " << endl;
	cin >> string;

	char substring[N] = "";
	cout << "enter the substring: " << endl;
	cin >> substring;

	char word[N] = "";
	cout << "enter the word: " << endl;
	cin >> word;
	
	int index = FindSubstringPlase(string, substring);

	ReplaceWord(string, word, index);

	cout << "The resulting string is :" << string << endl;
	
	system("pause");
	return 0;
}

void ReplaceWord(char* string, char* word, int index)
{
	int i = 0;
	while (i < strlen(word))
	{
		string[index] = word[i];
		i++;
		index++;
	}
}

int FindSubstringPlase(char* string, char* substring)
{
	int a = strlen(string),
		b = strlen(substring);

	if (b > a)
	{
		return -1;
	}

	int index = 0;
	for (int i = 0, j = 0; i < a && j < b; i++)
	{
		if (string[i] == substring[j])
		{
			j = i;
		}
	}
	return index;
}

