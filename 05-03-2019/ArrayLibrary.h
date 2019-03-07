#pragma once
#include<iostream>

typedef int(*Key)(int);
typedef bool(*Predicate)(int, int);
typedef bool(*Condition)(char, int);

using namespace std;

void DisplayArrayInt(int*, int);
int AmountOfOnes(int);
void ConvertToInt(double*, int*, int);
void SwapDouble(double&, double&);
void Swap(int&, int&);
int InPutElement();
int ValidationOfElement();
void DisplayArray(double*, int);
void InPutArray(double*, int);
int* AllocateMemoryInt(int);
double* AllocateMemory(int);



int AmountOfOnes(int n)
{
	int i = 0;
	while (n)
	{
		if (n % 2)
		{
			i++;
		}
		n /= 2;
	}
	return i;
}

int AmountOfZeroes(int n)
{
	int i = 0;
	while (n)
	{
		if (n % 2 == 0)
		{
			i++;
		}

		n /= 2;
	}
	return i;

}

void ConvertToInt(double* array, int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int)array[i];
	}
}

void SwapDouble(double& x, double& y)
{
	double t = x;
	x = y;
	y = t;
}

void Swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

int InPutElement()
{
	int element;
	cout << "\nPlease enter number  of elements which contains in  number: ";
	cin >> element;
	return element;
}

int ValidationOfElement()
{
	int n;
	while (true)
	{
		cout << "Enter n";
		cin >> n;

		if (n > 0)
		{
			return n;
		}

		cout << "Invalid data! Try again :)" << endl;
	}
}

void DisplayArrayInt(int* array, int n)
{
	for (int* p = array; p < array + n; p++)
	{
		cout << *p << " ";
	}

	cout << endl;
}

double* AllocateMemory(int n)
{
	if (n <= 0)
	{
		return nullptr;
	}

	double* array = new double[n];

	return array;
}

int* AllocateMemoryInt(int n)
{
	if (n <= 0)
	{
		return nullptr;
	}

	int* array = new int[n];

	return array;
}

void InPutArray(double* array, int n)
{
	for (double* p = array, i = 1; p < array + n; p++, i++)
	{
		cout << "a[" << i << "]= ";
		cin >> *p;
	}
}

void DisplayArray(double* array, int n)
{
	for (double* p = array; p < array + n; p++)
	{
		cout << *p << " ";
	}

	cout << endl;
}
