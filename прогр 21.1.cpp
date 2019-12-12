#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k = 0, n, i = 0;
	char a[500];
	cout << "Введите строку: ";
	gets_s(a);
	n = strlen(a);
	while (i < n)
	{
		if (a[i] != ' ' && (a[i + 1] == ' ' || a[i + 1] == '\0'))
			k++;
		i++;
	}
	cout << k;
	return 0;
}