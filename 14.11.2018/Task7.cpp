#include<iostream>
using namespace std;

int responceOrder(int* a, int size);
void responseResult(int a);



int responceOrder(int* a, int size) 
{
	int ammount = 0;
	int strong = 0;
	for (int i = 0; i < size - 1; ++i) 
	{
		if (a[i] >= a[i + 1]) 
		{
			ammount++;
		}

		if (a[i] == a[i + 1])
		{
			++strong;
		}
	}

	if (ammount == size - 1 && strong == 0) return 1;
	else if (ammount == size - 1 && strong > 0) return 2;

	else if (ammount == strong && strong == 0) return 3;
	else if (ammount == strong && strong > 0) return 4;
	else if (ammount != strong && ammount > 0) return 5;

	if (strong == size - 1) return 6;
}


void responseResult(int a) 
{
	switch (a) {
	case 1: cout << "strictly increasing" << endl; //строго возрастающая
		break;

	case 2: cout << "Not strictly increasing" << endl;
		break;

	case 3: cout << "strictly decreasing" << endl; // cтрого убывающая
		break;

	case 4: cout << "Not strictly decreasing" << endl;
		break;

	case 5: cout << "Dasordered" << endl;
		break;

	case 6: cout << "Are the same number" << endl;
		break;

	default: throw ;
	}
}

int main()
{
	int n;
	cout << " enter quantity nambers: " << endl;
	cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "enter number: " << endl;
		cin >> a[i];
	}

	responceOrder(a, size);
	responseResult(a);

	delete[] a;

	system("pause");
	return 0;
}



