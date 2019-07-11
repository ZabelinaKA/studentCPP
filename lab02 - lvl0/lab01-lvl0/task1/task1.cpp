
#include "pch.h"
#include <iostream>
using namespace std;
int func(int a[], int i);

int main()
{
	cout << "enter 5 number\n";
	int b, f1, f2, f3, f4, f5;
	int *a1 = new int[5];
	f1 = func(a1, 0);
	f2 = func(a1, 1);
	f3 = func(a1, 2);
	f4 = func(a1, 3);
	f5 = func(a1, 4);
	b = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << b;

	cout << endl;
	return 0;
}

int func(int a[], int i)
{
	int b;
	cin >> b;
	a[i] = b * b;
	return a[i];
}