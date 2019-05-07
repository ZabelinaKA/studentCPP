// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

#include "pch.h"
#include <iostream>
using namespace std;
void func(int& num, bool& posnum, bool& chet, int& ost, bool& greater10);

void func(int& num, bool& posnum, bool& chet, int& ost, bool& greater10) {
	if (num > 0)
		posnum = 1;
	if (num % 2 == 0)
		chet = 1;
	ost = num % 5;
	if (num > 10)
		greater10 = 1;
}

int main()
{
	int num, ost;
	bool chet, posnum, greater10;
	cout << "enter number: ";
	cin >> num;
	func(num, posnum, chet, ost, greater10);
	if (posnum = true) {
		cout << "positive number" << endl;
	}
	else {
		cout << "negative number" << endl;
	}
	if (chet == true) {
		cout << "the number is even" << endl;
	}
	else {
		cout << "the number is odd" << endl;
	}
	cout << "The remainder of the division by 5 =" << ost << endl;
	if (greater10 == true) {
		cout << "number greater than 10" << endl;
	}
	else {
		cout << "number less than 10" << endl;
	}
}
