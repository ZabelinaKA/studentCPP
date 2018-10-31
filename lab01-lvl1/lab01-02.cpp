// lab01-02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
int number_1, number_2, result, k, t;
	char c = 'y';
	while (c == 'y') {
		cout << "Hello,user. Enter two numbers." << endl;
		cin >> number_1;
		cin >> number_2;
		cout << "what do you want to do?" << endl;
        printf("1. +\n2. -\n3. *\n4. /\n5. squaring\n6. rooting\n 7. to calculate the logarithm\n");
		
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
		else if ((int)(k == 5)) {
			result = number_1 * number_1;
		}
		else if ((int)(k == 6)) {
			result = sqrt(number_1);
		}
		else if ((int)(k == 7)) {
			cout << "you should write the base of the logarithm." << endl;
			cin >> t;
			result = log10(number_1) / log10(t);
		}
	    cout << "result= " << result << endl;
		cout << "do you want to try again?" << endl;
		cin >> c;
	}
}
