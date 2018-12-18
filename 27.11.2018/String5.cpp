#include <iostream>
using namespace std;
 
const int M = 256;

void getWords(char*);
void stringDelete(char*, char*);
void replaceString(char*, char*, char*, char*);
void displayArray(char*);
int SubstringPlase(char*, char*, int);



int main()
{
	char string[M] = "Hello, world !";
	char substring[M] = "wor";
	char replacedSubstring[M] = ",";
	char newString[M] = "";

	cout << string << endl;

	stringDelete(string, substring);
	displayArray(string);

	replaceString(string, substring, replacedSubstring, newString);
	displayArray(newString);

	system("pause");

	return 0;
}

void getWords(char* string)
{
	int length = strlen(string);
	int k = 0;

	for (int i = 0; i < length; i++)
	{
		if (string[i] == ' ' || i == length - 1)
		{
			int j;
			for (j = k; j <= i; j++)
			{
				cout << string[j];
			}

			k = j;
			cout << endl;
		}
	}
}

void stringDelete(char* string, char* substring)
{
	int stringLength = strlen(string),
		substringLength = strlen(substring);
	int index = SubstringPlase(string, substring, 0);

	while (index != -1)
	{
		for (int i = index, j = index + substringLength; i < stringLength; i++, j++)
		{
			string[i] = string[j];
		}

		index = SubstringPlase(string, substring, 0);
	}
}

void replaceString(char* string, char* substring, char* replacedSubstring, char* newString)
{

	int replacedLength = strlen(replacedSubstring),
		substringLength = strlen(substring),
		stringLength = strlen(string),
		start = 0,
		count = 0,
		difference = replacedLength - substringLength;
	int index = SubstringPlase(string, substring, start);

	for (int i = 0; i < index; i++)
	{
		newString[i] = string[i];
	}

	while (index != -1)
	{
		for (int j = index + count * (difference), i = 0; j < index + replacedLength + count * (difference); j++, i++)
		{
			newString[j] = replacedSubstring[i];
		}

		start = index + replacedLength;

		int newIndex = SubstringPlase(string, substring, start);

		while (newIndex != -1)
		{
			for (int i = index + replacedLength + count * (difference), j = index + substringLength; j < newIndex; i++, j++)
			{
				newString[i] = string[j];
			}
			break;
		}

		while (newIndex == -1)
		{
			for (int i = index + replacedLength + count * (difference), j = index + substringLength; j < stringLength; i++, j++)
			{
				newString[i] = string[j];
			}
			break;
		}

		index = SubstringPlase(string, substring, start);
		count++;
	}
}

void displayArray(char* string)
{
	for (int i = 0; i < strlen(string); i++)
	{
		cout << string[i];
	}
	cout << endl;
}


int SubstringPlase(char* string, char* substring, int start)
{
	int n = strlen(string),
		m = strlen(substring);

	if (m > n)
	{
		return -1;
	}

	int count = 0, index = -1;

	for (int i = start; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (substring[j] == string[i + count])
			{
				index = i;
				count++;
				if (j == m - 1)
				{
					return index;
				}
				else
				{
					continue;
				}
			}
			else
			{
				index = -1;
				count = 0;
				break;
			}
		}
	}

	return index;
}