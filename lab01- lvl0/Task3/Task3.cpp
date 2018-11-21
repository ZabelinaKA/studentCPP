// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
  int num, g, t = 0;
  num = 66;
  t++;
    cout << "Hi. Try to guess a number.\n";
      do  {
        cout << t << " Try (1, 100): ";
        cin >> g;
        t++;
		if (g > num) {
			cout << "Less!\n";
		}
		else if (g < num)
		{
			cout << "Greater!\n";

		}
		else
            cout << "Answer: YES";

	  } while (g != num);
  cin.get();
}

