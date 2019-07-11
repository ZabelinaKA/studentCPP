// task1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

struct Student
{
	string fio;
	int group;
	float mark;
	Student() {
		cin >> fio;
		cin >> group;
		cin >> mark;
	}
	Student(string fio, int group, float mark) {
		this->fio = fio;
		this->group = group;
		this->mark = mark;
	}
	void print() {
		cout << "fio:   " << fio << "   group:  " << group << "   mark:   " << mark;
	}
};

struct item
{
	Student student;
	item* next;
	item* prev;
	item(Student student) {
		this->student = student;
		prev = next = NULL;
	}
};

struct spisok {
	item* first;
	item* last;
	spisok() {
		first = last = NULL;
	}
	void print() {
		item* temp = first;
		while (temp!= NULL) {
			temp->student.print();
			temp = temp->next;
		}
	}
	void addtolast(Student student) {
		if (first = NULL) {
			first = last = new item(student);
		}
		else {
			item* it = new item(student);
			last->next = it;
			it ->prev = last; 
			last = it;
		}
	}
	void addtofirst(Student student) {
		if (first = NULL) {
			first = last = new item(student);
		}
		else {
			item* it = new item(student);
			it->next = first;
			first->prev = it;
			first = it;
		}
	}
};


int main()
{

}
