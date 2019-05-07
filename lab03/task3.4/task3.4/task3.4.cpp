// task3.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <set> 
using namespace std;

int main()
{
	int n, l = 100;
	int *m = new int [l];
	ifstream input;
	int i = 0;
	input.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.4\\input.txt");
	while (input >> n) {
		m[i] = n;
		i++;
	}
	input.close();
	ofstream output;
	output.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.4\\output.txt");
	for (int k = 0; k < i; k++) {
		output << " " << k << " " << m[k];
		cout << " " << k << " "<< m[k];
	}
	output.close();
}


