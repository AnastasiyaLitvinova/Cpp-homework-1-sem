#include <iostream>
using namespace std;

const int M = 100;

void initMatrix(int a[][M], int n, int m);
void SumRowMatrix(int a[][M], int n, int m, int sum);



	int main()
	{
		int n, m , sum = 0;
		cout << "Enter n: ";
		cin >> n;
		cout << "Enter m: ";
		cin >> m;

		int matrix[M][M] = { {0} };
		initMatrix(matrix, n, m);
		SumRowMatrix(matrix, n, m, sum);
		

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

void SumRowMatrix(int a[][M], int n, int m, int sum)
{
	int maxsum = 0 , num = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += a[i][j];
		}

		if (maxsum < sum)
		{
			maxsum = sum;	
			num = i + 1;
		}
		cout <<"sum of line items "<<i+1<<" : "<< sum << endl;
		cout << endl;
		
		
		
	}
	cout << "the row number with max sum of elements: " << num << endl;
}

