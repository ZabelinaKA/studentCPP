﻿// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int ost;
	bool num, chet;
	cout << "enter number";
	cin >> num;
	if (num > 0) {
		num = true;
	}
	if (num == true) {
		cout << "positive number";
	}
	else {
		cout << "negative number";
	}
	chet = num % 2;
	if (chet = 0) {
		chet = true;
	}
	if (chet == true) {
		cout << "the number is even";
	}
	else {
		cout << "the number is odd";
	}
	ost = num % 5;
	cout << ost;
	if (num > 10) {
		num == true;
	}
	if (num == true) {
		cout << "number greater than 10";
	}
	else {
		cout << "number less than 10";
	}
}
