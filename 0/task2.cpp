// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
   
   cout << "What your name?" << endl;
	char myname[256]= "";
	int age;
	cin >> myname;
	cout << "How old are you?" << endl;
	cin >> age;
	cout << "Hello, " << myname << ". You're " << age << " years old." << endl;
   
}

