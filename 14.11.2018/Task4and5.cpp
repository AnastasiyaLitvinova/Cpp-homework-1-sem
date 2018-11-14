#include <iostream>
using namespace std;


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

void foolNumber(long long *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int ammount1 = 0, ammount0 = 0;

		long long term = arr[i];

		while (term)
		{
			term % 2 == 0 ? ammount0++ : ammount1++;
		}

		cout << "Number: " << arr[i] << "  " << " ammount of 0 : " << ammount0 << endl;
		cout << " Number: " << arr[i] << "  " << "  ammount of 1: " << ammount1 << endl;

	}
}


int main()
{

	cout << ammountOfOnes(126443897493, fromCharToInt('1'));

	system("pause");
	return 0;
}