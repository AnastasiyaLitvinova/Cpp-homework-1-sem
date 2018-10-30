#include<iostream>
#include<iomanip>
using namespace std;


void dispRes(long long number)
{
	for (size_t i = 0; i <= 9; ++i) 
	{
		int counter = 0; 
		long long term = number;
		int remainder;
		while (term)
		{
			remainder = term % 10;
			if ( remainder == i) ++counter;
			term /= 10;
		}
		if(counter != 0) cout << "Number: " <<   i  << "    The ammount of repeating: " << counter << endl;
	}
}

int maxNumber(long long number)
{

	long long term = number;
	int remainder;
	long long max = term % 10;

	while (term)
	{
		remainder = term % 10;

		if (remainder > max) max = remainder;

		term /= 10;
	}

	return max;
}

int minNumber(long long number)
{

	long long term = number;
	int remainder;
	long long min = term % 10;

	while (term)
	{
		remainder = term % 10;

		if (remainder < min) min = remainder;

		term /= 10;
	}

	return min;
}


int main()
{
	long long number;
	cout << "enter number: ";
	cin >> number;
	dispRes(number);

	cout <<"max number - "<< maxNumber(number) << endl;
	cout <<"min number - "<< minNumber(number) << endl;

	system("pause");
	return 0;
}



