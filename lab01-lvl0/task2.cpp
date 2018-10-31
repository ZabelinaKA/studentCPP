// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "What your name?" << endl;
	char myname[256]= "";
	int y, d, y_t, age, m, m_t, d_t, i=0;
	cin >> myname;
	cout << "When are you born?" << endl;
	cout << "year: ";
	cin >> y;
	cout << "mounth: ";
	cin >> m;
	cout << "day: ";
	cin >> d;
	cout << "day today: ";
	cin >> d_t;
	cout << "mounth today: ";
	cin >> m_t;
	cout << "year today: ";
	cin >> y_t;
	age = y_t - y;
	if (d_t - d < 0) {
		i++;
	}
	if ((m_t - m < 0) || (i > 0)) {
		age--;
	}
	cout << "Hello, " << myname << ". You're " << age << " years old." << endl;
}

