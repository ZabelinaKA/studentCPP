// task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float n1, n2, S;
	char o;
	cout << "Input the expression: ";
	cin >> n1 >> o >> n2;
	if (o == '+') {
		S = n1 + n2;
	}
	else if (o == '-') {
		S = n1 - n2;
	}
	else if (o == '*') {
		S = n1 * n2;
	}
	else if (o == '/') {
		S = n1 / n2;
	}
	else S = 0;
	cout << "result: " << S;
}


