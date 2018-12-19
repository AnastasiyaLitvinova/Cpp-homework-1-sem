#include <iostream>

using namespace std;


int nextSmallerThan(int );
void nextSmallerThanTests();
void CountDigits(int, int *);
void ClearArray(int *);


int main()
{
	nextSmallerThanTests();
}

void CountDigits(int number, int * arr)
{
	ClearArray(arr);
	if(number < 0) 
		number *= -1;
	while (number)
	{
		arr[number % 10]= arr[number % 10]+1;
		number /= 10;
	}
}

int nextSmallerThan(int number)
{
	int sorceDigits[10],
		DestDigits[10],
		minNumber = (number > 0 ? number / 10 : number * 10);
	bool flag;
	CountDigits(number, sorceDigits);
	for (int i = number-1; i > minNumber; i--)
	{
		CountDigits(i, DestDigits);
		flag = true;
		for(int j = 0; j < 10; j++)
			if (DestDigits[j] != sorceDigits[j])
			{
				flag = false;
			}
		if (flag)
			return i;
	}
	return -1;
}

void nextSmallerThanTests()
{
	cout << (nextSmallerThan(0)==-1) << endl;
	cout << (nextSmallerThan(-12) == -21) << endl;
	cout << (nextSmallerThan(21) == 12) << endl;
	cout << (nextSmallerThan(531) == 513) << endl;
	cout << (nextSmallerThan(2071) == 2017) << endl;
	cout << (nextSmallerThan(9) == -1) << endl;
	cout << (nextSmallerThan(111) == -1) << endl;
	cout << (nextSmallerThan(135) == -1) << endl;
	cout << (nextSmallerThan(1027) == -1) << endl;
	cout << (nextSmallerThan(545) == 455) << endl;
	cout << (nextSmallerThan(91) == 19) << endl;
	cout << (nextSmallerThan(8065) == 8056) << endl;
	cout << (nextSmallerThan(222) == -1) << endl;
	cout << (nextSmallerThan(1789) == -1) << endl;
	system("pause");
}
void ClearArray(int * arr)
{
	for (int i = 0; i < 10; i++)
		arr[i] = 0;
}
