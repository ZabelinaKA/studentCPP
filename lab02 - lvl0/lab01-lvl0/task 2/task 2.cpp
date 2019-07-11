#include "pch.h"
#include <iostream>
using namespace std;

float func(float *a, int i)
{
	float b;
	cin >> b;
	*a = (b * 2 - b + b * (b / 2)) / b / 5;
	return *a;
}

int main()
{
	cout << "enter 5 number\n";
	float b, f1, f2, f3, f4, f5;
	float* a1 = new float[5];
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