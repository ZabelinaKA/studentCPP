#include "pch.h"
#include "iostream"


using namespace std;

int main(void)
{
	int k;
    float result, number_1, number_2;
	char c = 'y';
	while (c == 'y') {
		cout << "Hello,user. Enter two numbers." << endl;
		cin >> number_1;
		cin >> number_2;
		cout << "what do you want to do?" << endl;
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
