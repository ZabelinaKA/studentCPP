// task1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
	char* fio;
	short group;
	float* mark;
};

Student student;

int main()
{
	setlocale(0, "");

	int arraySize = 10, k, i;
	int size = 5;
	float s = 0;
	Student* array = new Student[arraySize];
	Student* arr = new Student[arraySize];


	for (i = 0; i < arraySize; i++)
	{
		cout << "ВНИМАНИЕ!" << endl << "Для завершения ввода не забудьте поставить точку!" << endl;
		cout << "Введите ваше ФИО: ";

		char buff[255];
		cin.getline(buff, 255);
		char* str = new char[strlen(buff)];
		strcpy_s(str, strlen(buff)+1, buff);
		array[i].fio = str;
		cout << endl;

		if (array[i].fio[0] == '.') break;


	
			cout << "Введите номер группы: ";
			char* buff = new char[20];
			cin >> buff;

			bool q = true;
			for (int i = 0; i < strlen(buff); i++)
				if (buff[i] < '0' || buff[i] > '9')
				{
					q = false;
					break;
				}

			if (!q)
				cout << "Ошибка! Введите число! " << endl;
			else
			{
				array[i].group = atoi(buff);
				delete[] buff;
				break;
			}
		



		/*cout << "Введите оценки:  ";
		for (k = 0; k < size; k++) {
			while (1) 
			{
				float* buff = new float[20];
				cin >> *buff;

				bool p = true;
					if (buff[k] < '0' || buff[k] > '800')
					{
						p = false;
						break;
					}

				if (!p)
					cout << "Ошибка! Введите число! " << endl;
				else
				{
					array[k].mark = buff;
					s += *buff;
					delete[] buff;
					break;
				}
			}
		}
		s = s / 5;
		if (s >= 4.0) {
			arr[i].fio = array[i].fio;
			arr[i].group = array[i].group;
		}
		s = 0;
		array[i] = student;
		arr[i] = student; */
	}


	/*bool c = 0;
	for (int l = 0; l < i; l++)
	{
			cout << arr[l].fio << "  " << arr[l].group << "  ";
			c = 1;
	}
	if (!c)
		cout << "людей с баллами выше 4.0 нет"; */
	for (int i = 0; i < arraySize; i++)
		delete[] array[i].fio;


	delete[] array;

	system("pause");
	return 0;
}
