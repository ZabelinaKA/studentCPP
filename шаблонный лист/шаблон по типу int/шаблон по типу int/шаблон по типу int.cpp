// шаблон по типу int.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

template <typename T>
class list {
public:
	void addFirst(T book)
	{
		Node<T>* temp = new Node;
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
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
	void clear()
	{
		while (head != nullptr)
		{
			delete[] head->data;
			Node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}
private:
	template <typename T>
	class Node
	{
	public:
		T data;
		Node<T>* next;
	};
	Node<T>* head = nullptr;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	int arraySize = 3;
	list<int> list;

	for (int i = 0; i < arraySize; i++)
	{
		int book;

		char* buff = new char[255];
		cout << "Книга " << i << ". Название: ";
		cin >> buff;

		cout << "Книга " << i << ". Год: ";
		cin >> book;

		list.addFirst(book);
	}

	list.print();
}
