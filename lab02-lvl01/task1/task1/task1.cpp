// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
		char c = 'e', op;
	bool k=true;
	cout << "Input constants:\n";
	do
	{
		cin >> &c;

		if (c == 'e') 
		{
			k = false;
		}
	} while (k == true);
	cout << "Input operations: ";
	cin >> &op;
	char * pA = &c;
	char * pA = &op;
	// *Pa +=10;
	// cout << a ot *a
	// array?
}
