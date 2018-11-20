#include<iostream>

using namespace std;

bool checkingForGrowing(int* arr, int size);

int getAmmount(int* arr, int size, int comporator);



int main()
{
	int* arr = new int[10];
	cout << " enter 10 the members of the sequence: ";

	for (int i = 0; i < 10; ++i)
	{
		cin >> arr[i];
	}
	int x;
	cout << " enter number: ";
	cin >> x;
	cout <<"the number of members of sequence members that are less than the specified number: " <<getAmmount(arr, 10, x)<<endl;
	delete[] arr;
	system("pause");
	return 0;
}


bool checkingForGrowing(int * arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
		if (arr[i] > arr[i + 1])
			return false;
}

int getAmmount(int* arr, int size, int comporator)
{
	if (!checkingForGrowing(arr, size))
		return 0;

	int ammount = 0;

	for (int i = 0; i < size; ++i, ++ammount)
	{

		if (arr[i] >= comporator)
			return ammount;
	}
}
