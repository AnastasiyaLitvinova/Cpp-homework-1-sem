﻿#include "pch.h"
#include <iostream>
using namespace std;

void encoding(char[], int[], char[], int);
void decoding(int[], char[], char[], int);
void codingTests();
bool equals(char[], char[], int, int);


int main()
{
	codingTests();
	system("pause");
	return 0;
}

void encoding(char source[], int encoding[], char rule[], int length)
{
	int k = 0;
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < 30; ++j)
		{
			if (source[i] == rule[j]) 
			{
				encoding[k] = j;
				++k;
				cout << j << " ";
				break;
			}
		}
	}
	cout << endl;
}

void decoding(int source[], char decoding[], char rule[], int length)
{ 
	int k = 0;
	for (int i = 0; i < length - 1; ++i) 
	{
		decoding[i] = rule[source[i]];
		cout << decoding[i];
	}
	cout << endl;
}

bool equals(char lhs[], char rhs[], int n, int m)
{
	if (m != n)
		return false;
	else
		for (int i = 0; i < n - 1; ++i) 
		{
			if (lhs[i] != rhs[i])
				return false;
		}
	return true;
}

void codingTests()
{
	const int length = 11;
	char rule[30] = { '.', 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', '!', '+', ' ' };


	char source[length] = "learn c++!";
	int numbers[length - 1] = { 0 };
	encoding(source, numbers, rule, length);
	char expected[length];
	decoding(numbers, expected, rule, length);
	cout << equals(source, expected, length, length) << endl;

	char s2[length] = "learn java";
	encoding(s2, numbers, rule, length);
	expected[length];
	decoding(numbers, expected, rule, length);
	cout << equals(source, expected, length, length) << endl;
	
}

