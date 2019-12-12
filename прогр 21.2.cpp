#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a[500];
	cout << "Введите строку: ";
	gets_s(a);
	int k = 0, min = 10000;;
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] != ' ')
			k++;
		else
		{
			if (k < min)
				min = k;
			k = 0;
		}
	}
	cout << min;
}