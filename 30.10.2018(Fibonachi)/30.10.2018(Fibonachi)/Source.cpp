#include<iostream>
using namespace std;

int main()
{
	int f1 = 1, f2 = 1, fn(0);

	while (fn < 100)
	{
		fn = f1 + f2;

		f1 = f2;
		f2 = fn;
	}
	cout <<"the smallest three-digit Fibonacci number is "<< fn << endl;

	cout << "\n\n";
	system("pause");
	return 0;
}