#include<iostream>
using namespace std;

int fromCharToInt(char symbol);
int ammountOfOnes(long long number, int numeral);
void foolNamber(long long *arr, int n);
char enterSymbol();



int main()
{
	int k;
	cout << " enter quantity numbers: " << endl;
	cin >> k;

	long long *a = new long long[k];

	for (int i = 0; i < k; ++i)
	{
		cout << " Enter number: " << endl;
		cin >> a[i];
	}

	foolNamber(a, k);

	delete[] a;
	system("pause");
	return 0;
}

int ammountOfOnes(long long number, int numeral)
{


	int ammount = 0;
	long long numb = number;

	while (numb)
	{
		int z = numb % 16;
		if (z == numeral)
			ammount++;

		numb /= 16;
	}
	cout << endl;
	return ammount;
}

void foolNamber(long long *arr, int n)
{

	char symbol = enterSymbol();

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "  :  " << ammountOfOnes(arr[i], fromCharToInt(symbol)) << endl;
	}
}

int fromCharToInt(char symbol)
{
	if (symbol >= 65 && symbol <= 70)
		return symbol - 55;

	else if (symbol >= 48 && symbol <= 57)
		return symbol - 48;
}

char enterSymbol() {
	cout << "Enter the symbol: " << endl;

	char symbol;

	while (true) {
		cin >> symbol;
		if ((symbol >= 65 && symbol <= 70) || (symbol >= 48 && symbol <= 57))
			return symbol;
		else cout << "Error! Incorrect symbol!" << endl;
	}
}