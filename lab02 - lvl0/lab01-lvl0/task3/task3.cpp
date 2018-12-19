// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
  while (true) {
	int numToCalculateFactorial, stepNumber = 0;
	int f = 1, num;
	cout << "Type the number to calculate factorial :";
	cin >> numToCalculateFactorial;
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
		cout << " YES" << endl;
		cout << "The step number is ";
		cout << stepNumber << endl;
	}
	else if (f <= num) {
		cout << "NO" << endl;
	}
  }
}

