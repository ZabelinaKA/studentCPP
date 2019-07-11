// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n = 100, i = 0, j = 0;
	cout << "Input constants:\n";
	int *c = nullptr;
	c = new int[n];
	char c1 = 'end';
	for ((c1 != 'end'); i < n; i++)
	{
		cin >> c[i];
	}
	for (i = 0; c[i] != 0; i++)
	{
		j = i;
		cout << c[j] << " ";
	}
	cout << "input operation: ";
	char z;
	int S = c[0];
	for (j = 0; c[j+1] != 0; j++)
	{
		cin >> z;
		if (z == '+') {
			S =S + c[j+1];
		}
		else if (z == '-') {
			S = S - c[j + 1];
		}
		else if (z == '*') {
			S = S * c[j + 1];
		}
		else if (z == '/') {
			S = S / c[j + 1];
		}
		else S = 0;
	}
	cout << "result: " << S << endl;
	system("pause");
	return 0;
}