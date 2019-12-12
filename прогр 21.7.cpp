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
	int n, i;
	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			cout << a[i];
	}
	for (i = n; i >= 1; i--)
	{
		if (i % 2 != 0)
			cout << a[i];
	}
	return 0;
}