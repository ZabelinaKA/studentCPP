#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a1, a2, a3, a4, a5;
	float f1, f2, f3, f4, f5, b;
	cout << "enter 5 numbers\n";
		cin >> a1 >> a2 >> a3 >> a4 >> a5;
		while (a1!=0) {
		  cout << "error\n";
		  char ch = 'y';
		  if (ch == 'y') {
			cout << "Enter answer?";
			cin >> ch;
			cout << "enter 5 numbers\n";
			cin >> a1;
		  }
	       cin.get();
		}
		f1 = (a1 * 2 - a1 + a1 * (a1 / 2)) / a1 / 5;
		f2 = (a2 * 2 - a2 + a2 * (a2 / 2)) / a2 / 5;
		f3 = (a3 * 2 - a3 + a3 * (a3 / 2)) / a3 / 5;
		f4 = (a4 * 2 - a4 + a4 * (a4 / 2)) / a4 / 5;
		f5 = (a5 * 2 - a5 + a5 * (a5 / 2)) / a5 / 5;
		cout << f1 << endl << f2 << endl << f3 << endl << f4 << endl << f5 << endl;
	    b = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
		cout << b << endl;
	cin.get();
	return 0;
}
