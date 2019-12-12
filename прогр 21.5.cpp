#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a[500];
	cout << "Введите полное имя файла: ";
	gets_s(a);
	int t = 0, k = 0;
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] == '\\')
			t = i;
		if (a[i] == '.')
			k = i;
	}
	for (int i = t + 1; i < k; i++)
		cout << a[i];
	return 0;
}