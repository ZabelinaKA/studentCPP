﻿#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int b;
	cout << "enter 5 numbers\n";
	int *a = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	b = (a[1] - a[2] + a[3] * (a[4] / 2)) / a[5] / 5;
	cout << b << endl;
	cin.get();
	return 0;
}
