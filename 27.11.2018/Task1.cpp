#include <iostream>
using namespace std;
char* EnterString();

bool StringComparison(char*, char*);

int main()
{	
	char* str1 = EnterString();
	char* str2 = EnterString();
	if (StringComparison(str1, str2))
		cout << "Strings are equal!" << endl;
	else
		cout << "Strings are not equal!" << endl;
	delete[] str1;
	delete[] str2;
	system("pause");
	return 0;
}

char* EnterString()
{
	cout << "Enter the string : ";
	char* str = new char[50];
	cin.getline(str, 50); 
	return str;
}


bool StringComparison(char* in_string1, char* in_string2)
{

	if (in_string1 == in_string2)
		return true;
	if (strlen(in_string1) != strlen(in_string2))
		  false;

	for (int i = 0; i < strlen(in_string1)-1; i++)
	{
		if (in_string1[i] != in_string2[i])
			return false;
	}
	return true;
}
