
# include <iostream>
using namespace std;

int main()
{
	int n0 = 0, n1 = 0;
	long long n;

	while (true)
	{
		cout << "enter number n: ";
		cin >> n;

		while (n)
		{
			if (n % 2 == 0)
				n0++;
			else
				n1++;
			cout << n << endl;

			n /= 2;
		}
		cout << "quantity 0 - " << n0 << endl;
		cout << "quatity 1 - " << n1 << endl;
	}
	system("pause");
	return 0;
}
