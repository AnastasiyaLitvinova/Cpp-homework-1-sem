#include <iostream>
using namespace std;

int UnitInNumber(int n);
int ZeroInNumber(int n);
void sort(double* array, int n);
void GenerateArray(double array[], int n);
void Swap(double& a, double& b);
void DisplayArray(double array[], int n);
void EnterArray(double array[], int n);
void DeleteFromArray(double* array, int& n, int k);
void copy(double* array, double* arr, int n);
void DeleteForAB(double* array, int& n, int a, int b);

int main()
{
	int n = 0,a = 0,b = 0;
	cout << "Enter value of nymbers:";
	cin >> n;
	double* array = new double[n];
	GenerateArray(array, n);
	DisplayArray(array, n);
	sort(array, n);
	DisplayArray(array, n);
	cout << "enter a: ";
	cin >> a;
	cout << "enter : ";
	cin >> b;
	DeleteForAB(array, n, a, b);
	double* arr = new double[n];
	copy(array, arr, n);
	DisplayArray(arr, n);
	system("pause");
	return 0;

}

int UnitInNumber(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	return count;
}
int ZeroInNumber(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 0)
			count++;
		n /= 2;
	}
	return count;
}
void sort(double* array, int n)
{
		int i, j;
		for (i = 0; i < n - 1; i++)  
			for (j = 0; j < n - i - 1; j++)
				if (UnitInNumber((int)array[j]) > UnitInNumber((int)array[j + 1]))
					Swap(array[j], array[j + 1]);
}
void GenerateArray(double array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
}
void Swap(double& a, double& b)
{
	int t = a;
	a = b;
	b = t;
}
void DisplayArray(double array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
void EnterArray(double array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}
void DeleteFromArray(double* array, int& n, int k)
{
	for (int i = k - 1; i < n; i++)
	{
		array[i] = array[i + 1];
	}
	n--;
}
void copy(double* array, double* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = array[i];
	}
}
void DeleteForAB(double* array,int& n, int a, int b)
{
	for (int i = 0; i < n; i++)
	{
		if (a == UnitInNumber(array[i]) && b == ZeroInNumber(array[i]))
			DeleteFromArray(array, n, i + 1);
	}
}