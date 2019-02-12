// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num, ost;
	bool chet;
	cout << "enter number^ ";
	cin >> num;
	if (num > 0) {
		num = true;
	}
	if (num == true) {
		cout << "positive number" << endl;
	}
	else {
		cout << "negative number" << endl;
	}
	chet = num % 2;
	if (chet = 0) {
		chet = true;
	}
	if (chet == true) {
		cout << "the number is even" << endl;
	}
	else {
		cout << "the number is odd" << endl;
	}
	ost = num % 5;
	cout << "The remainder of the division by 5 =" << ost << endl;
	if (num > 10) {
		num == true;
	}
	if (num == true) {
		cout << "number greater than 10" <<  endl;
	}
	else {
		cout << "number less than 10" << endl;
	}
}
