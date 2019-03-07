#include <iostream>
#include"ArrayLibrary.h"

using namespace std;

void BubbleSort(double*, int*, int&, Key);
double* GetDeletedElements(double*, int*, int&, int, int, Predicate, Predicate);
void DeleteElements(double*, int&, int);
int GetAmountOfDeletedElements(int*, int, int, int, Predicate, Predicate);
bool IsConsisitAOnes(int, int);
bool IsConsisitBZeroes(int, int);


int main()
{
	char esc = 'y';
	while (esc == 'y' || esc == 'Y')
	{
		int n = ValidationOfElement();
		double* array = AllocateMemory(n);
		InPutArray(array, n);
		system("cls");

		DisplayArray(array, n);

		int* copy_array = AllocateMemoryInt(n);
		ConvertToInt(array, copy_array, n);

		BubbleSort(array, copy_array, n, AmountOfOnes);

		int a, b;
		cout << "Please enter a which equals quantity of ones in number";
		cin >> a;
		cout << "Please enter b which equals quantity of zeroes in number";
		cin >> b;

		int m = GetAmountOfDeletedElements(copy_array, n, a, b, IsConsisitAOnes, IsConsisitBZeroes);
		double* deleted_array = AllocateMemory(m);
		deleted_array = GetDeletedElements(array, copy_array, n, a, b, IsConsisitAOnes, IsConsisitBZeroes);

		DisplayArray(array, n);
		DisplayArray(deleted_array, m);

		cout << "Press y ot Y to continue";
		cin >> esc;
		system("cls");
	}

	return 0;
}

void BubbleSort(double* array, int* copy_array, int& n, Key key)
{
	bool swapped = true;
	int i = 1;
	while (swapped)
	{
		swapped = false;
		for (int j = n - 1; j >= i; j--)
		{
			if (key(copy_array[j]) < key(copy_array[j - 1]))
			{
				SwapDouble(array[j], array[j - 1]);
				swapped = true;
			}
		}
		i++;
	}

}

double* GetDeletedElements(double* array, int* copy_array, int& n, int a, int b, Predicate predicate1, Predicate predicate0)
{
	double* result = AllocateMemory(n);
	int m = n;

	for (int i = 0, j = 0; i < m; i++)
	{
		if (predicate1(copy_array[i], a) && predicate0(copy_array[i], b))
		{
			result[j] = array[i];
			j++;
			DeleteElements(array, n, i + 1);
		}

	}