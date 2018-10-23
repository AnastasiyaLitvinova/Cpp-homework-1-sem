#include <iostream>
#include <cmath>
using namespace std;
 int InPutn(int = 0);
int InPutn(int, int);
void SwitchSum(double);
int SwitchNumber(int = 0);
void Switch();
double Number1(int);
double Number1(int);
double Number1(int);
double Number2(int);
double Number3(int);
double Number4(int);
double Number5(int);
double Number6(int);
double Number7(int);
double Number8(int);
double Number9(int);
double Number10(int);
 int main()
{
	char esc = 'y';
	while (esc == 'y' || esc == 'Y')
	{
		Switch();
		cout << "Press y or Y to continue ";
		cin >> esc;
		system("cls");
		system("pause");
		return 0;
	}
}
 void SwitchSum(double sum)
{
	cout << "Sum of this expression is  " << sum << endl;
}
 int InPutn(int minVlaue)
{
	int n;
	while (true)
	{
		cout << "enter an exemple number: ";
		cin >> n;
		if (n > minVlaue)
		{
			return n;
		}
		cout << "Invalid number! Try again!" << endl;
		system("pause");
		system("cls");
	}
}
 int Fact(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * Fact(n - 1);
	}
}
 int InPutn(int minValue, int maxValue)
{
	int n;
	while (true)
	{
		cout << "enter an exemple number: ";
		cin >> n;
		if (n >= minValue && n <= maxValue)
		{
			return n;
		}
		cout << "Invalid number! Try again!" << endl;
		system("pause");
		system("cls");
	}
}
 double Number1(int n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += 1 / i;
	}
 	return sum;
}
 double Number2(int n)
{
	int pr;
	pr = 1;
	for (double i = 1; n >= i; i++)
	{
		pr = pr * 2;
	}
	cout << pr << endl;
	return pr;
}
 double Number3(int n)
{
	double pr;
	pr = 1;
	for (double i = 1; i <= n; i++)
	{
		pr = pr * (1 + 1 / pow(i, 2));
	}
	cout << pr << endl;
	return pr;
}
 double Number4(int n)
{
	double sum;
	double znach;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		znach = 1. / (i*(i + 1));
 		if (i % 2 == 0)
		{
			znach = -znach;
		}
 		sum += znach;
	}
 	cout << sum << endl;
	return sum;
}
 double Number5(int n)
{
	double sum;
	sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += 1 / pow(i, 5);
	}
 	cout << sum << endl;
 	return sum;
}
 double Number6(int n)
{
	double sum;
	sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += 1 / pow((2 * i + 1), 2);
	}
	cout << sum << endl;
	return sum;
}
 double Number7(int n)
{
	double sum;
	double znach;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		znach = 1. / (2 * i + 1);
 		if (i % 2 == 1)
		{
			znach = -znach;
		}
 		sum += znach;
	}
	cout << sum << endl;
	return sum;
}
 double Number8(int n)
{
	double sum;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int fact = 1;
		for (int j = 1; j <= n; j++)
		{
			fact *= j;
		}
		double ter = 0;
		for (int u = 1; u <= n; u++)
		{
			ter += 1. / u;
		}
 		sum += fact / ter;
	}
 	cout << sum << endl;
	return sum;
}
 double Number9(int n)
{
	double sum;
	sum = 0;
	double znach;
	for (int i = 1; i <= n; i++)
	{
		znach = sum + 2;
		sum = pow(znach, 0.5);
 	}
 	cout << sum << endl;
	return sum;
}
 double Number10(int n)
{
	double sum;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
 		double ter = 0;
		for (int u = 1; u <= n; u++)
		{
			ter += sin(u);
		}
		sum += 1 / ter;
	}
	cout << sum << endl;
	return sum;
}
 int SwitchNumber(int)
{
	int number;
	while (true)
	{
		cout << "enter number from 1 to 9 to count the sum ";
		cin >> number;
		if (number >= 1 && number <= 9)
		{
			return number;
		}
		cout << "Invalid number! Try again!" << endl;
		system("pause");
		system("cls");
	}
 }
 void Switch()
{
	int number = SwitchNumber();
	switch (number)
	{
	case 1:
	{
		int n = InPutn();
		double sum = Number1(n);
		SwitchSum(sum);
		break;
	}
	case 2:
	{
		int n = InPutn();
		double sum = Number2(n);
		SwitchSum(sum);
		break;
	}
	case 3:
	{
		int n = InPutn();
		double sum = Number3(n);
		SwitchSum(sum);
		break;
	}
 	case 4:
	{
		int n = InPutn();
		double sum = Number4(n);
		SwitchSum(sum);
		break;
	}
 	case 5:
	{
		int n = InPutn();
		double sum = Number5(n);
		SwitchSum(sum);
		break;
	}
 	case 6:
	{
		int n = InPutn();
		double sum = Number6(n);
		SwitchSum(sum);
		break;
	}
 	case 7:
	{
		int n = InPutn();
		double sum = Number7(n);
		SwitchSum(sum);
		break;
	}
 	case 8:
	{
		int n = InPutn();
		double sum = Number8(n);
		SwitchSum(sum);
		break;
	}
	case 9:
	{
		int n = InPutn();
		double sum = Number9(n);
		SwitchSum(sum);
		break;
	}
 	case 10:
	{
		int n = InPutn();
		double sum = Number10(n);
		SwitchSum(sum);
		break;
	}
	default:
		cout << "Error. Please enter the dight from 1 to 9";
	}
	
}
