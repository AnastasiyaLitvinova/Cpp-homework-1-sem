#include<iostream>
using namespace std;

int fromCharToInt(char symbol);
int ammountOfOnes(long long number, int numeral);

int main()
{

	cout << ammountOfOnes(126443897493, fromCharToInt('1'));

	system("pause");
	return 0;
}

int fromCharToInt(char symbol)
{
	if (symbol >= 65 && symbol <= 70)
		return symbol - 55;

	else if (symbol >= 48 && symbol <= 57)
		return symbol - 48;
}
int ammountOfOnes(long long number, int numeral)
{

	cout << numeral << endl;
	cout << endl;
	int ammount = 0;
	long long numb = number;

	while (numb)
	{
		int z = numb % 16;
		cout << z;
		if (z == numeral)
			ammount++;

		numb /= 16;
	}
	cout << endl;
	return ammount;
}
