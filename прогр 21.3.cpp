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
	char c = a[0];
	for (int i = 1; a[i] != 0; i++)
	{
		if (a[i - 1] == ' ' && a[i] != ' ')
			c = a[i];
		else if (a[i] == c)
			a[i] = '.';
	}
	cout << a;
	return 0;
}