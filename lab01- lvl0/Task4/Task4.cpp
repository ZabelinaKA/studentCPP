// lab01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "iostream"


using namespace std;

int main()
{
   char c = 'y';
	while (c == 'y') {
		int number_1, number_2, r1, r2, r3, r4, result, k;
		cout << "Hello,user. Enter two numbers." << endl;
		cin >> number_1;
		cin >> number_2;
		cout << "what do you want to do?" << endl;
		
		cin >> "1. +" >> "2. -" >> "3. *" >> "4. /";
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
