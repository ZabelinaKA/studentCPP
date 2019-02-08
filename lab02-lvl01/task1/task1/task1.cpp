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
	for ((c[i] != 0); i < n; i++)
	{
		cin >> c[i];
		if ((char)c[i] == 0) {
			cout << "your enter: end" << endl;

			break;
		}
	}
	for (i = 0; c[i] != 0; i++)
	{
		j = i;
		cout << c[j] << " ";
	}
	//c[i] = NULL;
	cout << "input operation: ";
	char z;
	int S = 0;
	for (j = 0; c[j + 1] != 0; j++)
	{
		cin >> z;
		cout << "your enter operations: " << z << " ";
		if (z == '+') {
			S += c[j] + c[j+1];
		}
		else if (z == '-') {
			S += c[j] - c[j + 1];
		}
		else if (z == '*') {
			S += c[j] * c[j + 1];
		}
		else if (z == '/') {
			S += c[j] / c[j + 1];
		} 
	}
	cout << "result: " << S << endl;
	system("pause");
  return 0;
}



