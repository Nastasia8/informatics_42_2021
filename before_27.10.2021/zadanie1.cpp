#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

float prod(int, int);
float delenie(int, int);
int sum(int, int);
int del(int, int);
double stepen(int, int);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int a, b, num;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Введите номер операции" << endl;
	cout << "Число 1 - произведение, число 2 - деление, число 3 - сложение, число 4 - вычитание, число 5 - возведение в степень" << endl;
	cin >> num;
	switch(num)
	{
		case 1:
			cout << prod(a, b) << endl;
			break;
		case 2:
			cout << delenie(a, b) << endl;
			break;
		case 3:
			cout << sum(a, b) << endl;
			break;
		case 4:
			cout << del(a, b) << endl;
			break;
		case 5:
			cout << stepen(a, b) << endl;
			break;
		default:
			cout << "Число 1 - произведение, число 2 - деление, число 3 - сложение, число 4 - вычитание, число 5 - возведение в степень" << endl;
			break;
	}
	return 0;
}

float prod(int a, int b)
{
	return a * b;
}

float delenie(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	return float(a) / b;
}

int sum(int a, int b)
{
	return a + b;
}

int del(int a, int b)
{
	return a - b;
}

double stepen(int a, int b)
{
	switch(b)
	{
		case 0:
			if (a != 0)
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		default:
			return pow(a, b);
			break;
	}
}
