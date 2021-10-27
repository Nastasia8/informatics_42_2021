#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int sum(int);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int k;
	cout << "Введите диапазон" << endl;
	cin >> k;
	cout << sum(k) << endl;
}

int sum(int k)
{
	int summa = 0;
	while(k > 0)
	{
		if(k % 2 == 0)
		{
			summa += k;
		}
		k--;
	}
	return summa;
}
