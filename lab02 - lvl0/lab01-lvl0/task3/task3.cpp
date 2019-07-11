// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isExceeded(int numToCalculateFactorial, int& stepNumber);

int main()
{
	int numToCalculateFactorial, stepNumber = 0;
	cout << "Type the number to calculate factorial :";
	cin >> numToCalculateFactorial;
	if (isExceeded(numToCalculateFactorial, stepNumber)) {
		cout << " YES" << endl;
		cout << "The step number is ";
		cout << stepNumber << endl;
	}
	else
		cout << "NO" << endl;
}

bool isExceeded(int numToCalculateFactorial, int& stepNumber) {
	int f = 1, num;
	do {
		f *= numToCalculateFactorial--;
	} while (numToCalculateFactorial > 0);
	cout << "Number to compare:";
	cin >> num;
	cout << "Did the factorial exceed the value?";
	if (f > num) {
		numToCalculateFactorial = 1;
		do {
			f /= numToCalculateFactorial++;
			stepNumber = stepNumber++;
		} while (f > num);
		return true;
	}
	else return false;
}
