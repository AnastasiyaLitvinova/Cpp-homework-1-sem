#include <iostream>
using namespace std;

const int M = 100;

void initMatrix(int a[][M], int n, int m);
void SwapRing(int a[][M], int, int);
void SwapDiagonal(int a[][M], int, int);


int main()
{
	int n, m;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;

	int matrix[M][M] = { {0} };
	initMatrix(matrix, n, m);
	SwapKrug(matrix, n, m);
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

void SwapRing(int a[][M], int n, int m)
{
	int buffer;
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < m / 2; j++)
		{
			buffer = a[n / 2 + i][j];
			a[n / 2 + i][j] = a[i][j];
			a[i][j] = a[i][m / 2 + j];
			a[i][m / 2 + j] = a[n / 2 + i][m / 2 + j];
			a[n / 2 + i][m / 2 + j] = buffer;
		
		}
	}


}

void SwapDiagonal(int a[][M], int n, int m)
{
	int buffer;
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < m / 2; j++)
		{
			buffer = a[n / 2 + i][m / 2 + j];
			a[n / 2 + i][m / 2 + j] = a[i][j];
			a[i][j] = buffer;

			buffer = a[n / 2 + i][j];
			a[n / 2 + i][j] = a[i][m / 2 + j];
			a[i][m / 2 + j] = buffer;

		}
	}


}
