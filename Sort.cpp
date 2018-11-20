#include<iostream>
using namespace std;

int main()
{
	int r = 0;
	for (int i = 1; i < 5; i++)
		for (int j = i + 1; j < 4; j++)
			r++;
	cout << r;

	
	system("pause");
	return 0;
}