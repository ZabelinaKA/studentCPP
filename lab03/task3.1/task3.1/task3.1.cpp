// task3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	input.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.1\\input.txt");
	while (input >> n) {
		m[n]++;
		mst.insert(n);
	}
	input.close();
	multiset <int> ::iterator it = mst.begin();
	ofstream output;
	output.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.1\\output.txt");
		for (int i = 1; it != mst.end(); i++, it++) {
			cout << *it << " ";
			output << *it << " ";
		}
	output.close();
}


