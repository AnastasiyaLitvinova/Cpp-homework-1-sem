#include<iostream>
using namespace std;

double enterX()
{
	double x;
	while (true)
	{
		cout << "Enter x, x > 0 !" <<endl;
		cin >> x;
		if (x > 0) return x;
	}
}

double enterEps() 
{
	double eps;
	while (true)
	{
		cout << "Enter eps, eps> 0 !" << endl;
		cin >> eps;
		if (eps > 0) return eps;
	}
}

double countSqt(double x, double eps)
{
	double term = 1;
	double nextTerm;

	while(true)
	{
		nextTerm = 0.5*(term + x / term);
		if (fabs(term - nextTerm) < eps) return term;

		term = nextTerm;
	}
}
int main()
{

	cout << countSqt(9, 0.00001) << endl;
	system("pause");
	return 0;
}