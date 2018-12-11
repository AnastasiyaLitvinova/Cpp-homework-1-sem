#include <iostream>
using namespace std;

const int M = 100;

void initMatrix(int[][M], int , int );
void displayMatrix(int[][M] , int , int);
void MatrixBaterfly(int a[][M], int, int);
void MatrixObratnbliBaterfly(int a[][M], int , int );
void DoRakirovka(int a[][M], int, int);




int main()
{
	int matrix[M][M] = { {0} };

	int n;
	cout << " Enter quality of rows and columns:  " << endl;
	cin >> n;
	initMatrix(matrix, n, n);
	cout << "Matrix" << endl;
	displayMatrix(matrix, n, n);	
	DoRakirovka(matrix, n, n);
	
	
	 cout << DoRakirovka << endl;
	

	system("pause");
	return 0;
}


void initMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i + 1 << "," << j + 1 << "] = ";
			cin >> a[i][j];
		}
	}

}

void MatrixBaterfly(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (((i <= j) && (j <= n -1 - i)) || ((i >= j) && (j >= n -1 - i)))
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}

}

void MatrixObratnbliBaterfly (int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (((i >= j) && (j <= n - 1 - i)) || ((i <= j) && (j >= n - 1 - i)))
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}

}

void displayMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(5);
			cout << a[i][j];
		}
		cout << endl;
	}

}

//void DoRakirovka(int a[][M], int n, int m)
//{
//	int temp = 0;
//
//	for (int i = 0; i < n; ++i)
//
//	{
//		for (int j = m; j < m; ++j)
//		{
//			for (int i = 0, temp = 0; i < m; i++)
//			{
//				for (int k = 0; k < M ; k++)
//				{
//					temp = a[i][--j];
//					a[i][j] = a[i][++j];
//					a[i][j] = temp;
//					
//				}
//			}
//		}
//		
//	}
//}


