// классы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

class  Book {
public:
	char* Name;
	unsigned int Year;
};

class list {
public:
	void addFirst(Book book)
	{
		Node* temp = new Node;
		temp->data = book;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			return;
		}
		temp->next = head;
		head = temp;
	}
	void print()
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data.Name << " (" << temp->data.Year << ")" << endl;
			temp = temp->next;
		}
	}
	void clear()
	{
		while (head != nullptr)
		{
			delete[] head->data.Name;
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
private:
	class Node
	{
	public:
		Book data;
		Node* next;
	};
	Node* head = nullptr;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	int arraySize = 3;
	list list;

	for (int i = 0; i < arraySize; i++)
	{
		Book book;

		char* buff = new char[255];
		cout << "Книга " << i << ". Название: ";
		cin >> buff;

		book.Name = new char[strlen(buff) + 1];
		strcpy(book.Name, buff);
		book.Name[strlen(buff)] = '\0';

		cout << "Книга " << i << ". Год: ";
		cin >> book.Year;

		list.addFirst(book);
	}

	list.print();
}



