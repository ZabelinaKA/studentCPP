﻿// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char a;
	int b, f1, f2, f3, f4, f5;
	cout << "enter 5 numbers\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		char* f1 = &a;	
		char* f2 = &a;
		char* f3 = &a;
		char* f4 = &a;
		char* f5 = &a;
		
	}
	f1 = a * a;
	f2 = a * a;
	f3 = a * a;
	f4 = a * a;
	f5 = a * a;
	b = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << b << endl;
	cin.get();
	return 0;
}
