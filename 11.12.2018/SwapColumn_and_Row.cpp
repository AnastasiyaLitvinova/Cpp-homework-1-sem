#include <iostream>
using namespace std;

const int M = 100;

void initMatrix(int a[][M], int n, int m);
void SwapColumn(int a[][M], int, int);
void SwapRows(int a[][M], int, int);



int main()
{
	int n, m;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;

	int matrix[M][M] = { {0} };
	initMatrix(matrix, n, m);
	SwapRows(matrix, n, m);
	cout << "Second matrix " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

void initMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

}

void SwapColumn(int a[][M], int n, int m)
{
	int buffer;
	for (int j = 0; j < m/2; j++)
	{
		for (int i = 0; i < n; i++)
		{
			buffer = a[i][j];
			a[i][j] = a[i][m - j - 1];
				a[i][m- j-1] = buffer;
			
		}
	}
}

void SwapRows(int a[][M], int n, int m)
{
	int buffer;
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			buffer = a[i][j];
			a[i][j] = a[n - i - 1][j];
			a[n - i - 1][j] = buffer;

		}
	}
}


