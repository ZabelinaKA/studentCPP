// task3.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <set> 
#include <string>
using namespace std;

int main()
{
	int n;
	int l = 100;
	int* m = new int[l];
	ifstream input;
	int i = 0;
	input.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.6\\input.txt");
	while (input >> n) 
		m[i] = n;
	i++;
	input.close();
	ofstream output;
	output.open("e:\\Visual Studio 2017\\studentCPP\\studentCPP\\lab03\\task3.6\\output.txt");
	if (m[0] < 0) {
		for (int k = 1; k <= i; k++)
			output << m[k] << " ";
	}
	else {
		for (int k = 0; k < i; k++)
			output << m[k] << " ";
	}
	output.close();
}
//erasy
