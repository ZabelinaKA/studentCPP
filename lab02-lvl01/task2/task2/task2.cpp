// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0;
	float n = 100;
	cout << "Input constants:\n";
	float *c = new float[n];
	for ((c[i] != 0); i < n; i++)
	{
		cin >> c[i];
		if ((char)c[i] == 0)
		{
			break;
		}
	}
	for (i = 0; c[i] != 0; i++)
	{
		j = i;
		cout << c[j] << " ";
	}
	cout << "input operation: ";
	char z;
	float S = c[0];
	for (j = 0; c[j + 1] != 0; j++)
	{
		cin >> z;
		cout << "your enter operations: " << z << " ";
		if (z == '+') {
			S = S + c[j + 1];
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

