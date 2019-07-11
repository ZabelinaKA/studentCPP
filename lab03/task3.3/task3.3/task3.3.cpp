// task3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main()
{
	int n, k, l=0;
	multiset <int> mst;
	int m[100] = {};
	ifstream input;
	input.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.3\\input.txt");
	while (input >> n) {
		m[n]++;
		mst.insert(n);
	}
	input.close();
	cout << "enter need number: ";
	cin >> k;
	ofstream output;
	output.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.3\\output.txt");
	multiset <int> ::iterator it = mst.begin();
	for (; it != mst.end(); it++) {
		if (* it == k)
		l++;
	}
	if (l > 0)
		output << "yes";
	else output << "no";
	output.close();
}


