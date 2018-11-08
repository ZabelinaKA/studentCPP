#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a1, a2, a3, a4, a5, f1, f2, f3, f4, f5, b;
	cout << "enter 5 numbers\n";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	f1 = a1 * a1;
	f2 = a2 * a2;
	f3 = a3 * a3;
	f4 = a4 * a4;
	f5 = a5 * a5;
	cout << f1 << endl << f2 << endl << f3 << endl << f4 << endl << f5 << endl;
	b = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << b << endl;
	cin.get();
	return 0;
}

    
