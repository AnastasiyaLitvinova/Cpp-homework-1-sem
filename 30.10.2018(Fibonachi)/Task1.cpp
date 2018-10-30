# include <iostream>
using namespace std;

typedef double(*TailorFunct)(double, double);

double cosx(double, double);

double enterEps();
double enterX();

void displayResult(double, double, TailorFunct);



int main()
{
	double x(enterX());
	double eps(enterEps());

	displayResult(x, eps, cosx);

	system("pause");
    return 0;
}

double enterEps()
{
	double eps;
	while (true) 
	{
		cout << "Enter eps, eps > 0 :" << endl;
		cin >> eps;

		if (eps > 0)
			return eps;
	}
}

double enterX()
{
	double x;

		cout << "Enter x:" << endl;
		cin >>x;
			return x;
	
}

double cosx(double x, double eps)
{
	double term = 1, sum = 1;
	int n = 1;

	while (fabs(term) > eps)
	{
		term *= -(x * x / (2 * n - 1) / (2 * n));
		sum += term;
		n++;

	}
	return sum;
}


void displayResult(double x, double eps, TailorFunct function)
{
	cout << "The result : " << endl;
	cout << "x : " << x << " eps: " << eps << "   " << function(x, eps) << endl;
}