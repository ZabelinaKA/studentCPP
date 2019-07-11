// task7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "string"
using namespace std;

class vector {
private:
	int x, y, z;
public:
	vector(int x, int y, int z) : x(x), y(y), z(z) {}
	string print() {
		string result = to_string(x) +
			", " + to_string(y) + ", " +
			to_string(z);
	}
};

int main()
{      
	
}
/*
class figure {
protected:
int x, y;
public:
figure(int x, int y) : x(x), y(y) {}
virtual string print() = 0; // or this->x = x;
};
figure** arr = new figure*[3];
arr[0] = (figure*) new circle(1, 2, 3);
arr[1] = (figure*) new rectangular(1, 2, 3, 4);
arr[2] = (figure*) new line(1, 2, 3, 4);
cout « arr[0]->print() « endl;
cout « arr[1]->print() « endl;
cout « arr[2]->print() « endl; */
