#include "pch.h"
#include "iostream"


using namespace std;

int main(void)
{
		char c = 'y';
		while (c == 'y') {
			int k, i=0;
		        float result, number_1 = 0, number_2 = 0;
			cout << "Hello,user. Enter two numbers." << endl;
				cin >> number_1;
				cin >> number_2;
				while (cin.fail()) { // если введено неудачно
					cin.clear();   //очищает
					cin.ignore();  // игнорирует
					cout << "error\n";
					char ch = 'y';
					if (ch == 'y') {
						cout << "Enter numbers?";
							cin >> ch;
						cout << "Hello,user. Enter two numbers." << endl;
						cin >> number_1;
						cin >> number_2;
					}
					cin.get();
				}
				cout << "what do you want to do?" << endl;
				printf("1. +\n2. -\n3. *\n4. /\n");
				cout << "your answer= ";
				cin >> k;
				
				if (k == 1) {
					result = number_1 + number_2;
				}
				else if (k == 2) {
					result = number_1 - number_2;
				}
				else if (k == 3) {
					result = number_1 * number_2;
				}
				else if (k == 4) {
					if (number_2 == 0) {
						cout << "enter other number\n";
					}
					else {
						result = number_1 / number_2;
					}
				}
				cout << "result= " << result << endl;
				cout << "do you want to try again?" << endl;
				cin >> c;
		}
			
	
}
