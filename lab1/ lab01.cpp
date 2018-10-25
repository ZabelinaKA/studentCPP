// lab01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "iostream"


using namespace std;

int main()
{
	int number_1, number_2, r1, r2, r3, r4, result, k;
	char c = 'y';
	while (c == 'y') {
		cout << "Hello,user. Enter two numbers." << endl;
		cin >> number_1;
		cin >> number_2;
		cout << "what do you want to do?" << endl;
		r1 = number_1 + number_2;
		r2 = number_1 - number_2;
		r3 = number_1 * number_2;
		r4 = number_1 / number_2;
		printf("1. +\n2. -\n3. *\n4. /\n");
		cout << "your answer= ";
		cin >> k;
		if ((int)(k == 1)) {
			result = number_1 + number_2;
		}
		else if ((int)(k == 2)) {
			result = number_1 - number_2;
		}
		else if ((int)(k == 3)) {
			result = number_1 * number_2;
		}
		else if ((int)(k == 4)) {
			result = number_1 / number_2;
		}
		cout << "result= " << result << endl;
		cout << "do you want to try again?" << endl;
		cin >> c;
	} 
	
}
