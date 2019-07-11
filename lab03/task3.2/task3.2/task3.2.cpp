// task3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main()
{
	int n;
	multiset <int> mst;
	int m[100] = {};
	ifstream input;
	input.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.2\\input.txt");
	while (input >> n) {
		m[n]++;
		mst.insert(n);
	}
    input.close();
	ofstream output;
	output.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.2\\output.txt");
	multiset <int> ::iterator it = mst.begin();
	double z = 0;
	int i;
	for (i = 0; it != mst.end(); it++) {
		z += *it;
		i++;
	}
	z = z / i;
	output << z;
	output.close();
}

