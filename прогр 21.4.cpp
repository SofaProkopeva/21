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
	int k = 0;
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] == 'а' || a[i] == 'я' || a[i] == 'о' || a[i] == 'е' || a[i] == 'у' || a[i] == 'ю' || a[i] == 'ы' || a[i] == 'и' || a[i] == 'э' || a[i] == 'ё')
			k++;
	}
	cout << k;
	return 0;
}