#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int prod(int x, int y);
float delenie(int x, int y);
int sum(int x, int y);
int ruzn(int x, int y);
int pow(int x, int y);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, y, num;
	cout << "Input x =" << endl;
	cin >> x;
	cout << "Input y =" << endl;
	cin >> y;
	cout << "Input num =" << endl;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << prod(x, y) << endl;
		break;
	case 2:
		cout << delenie(x, y) << endl;
		break;
	case 3:
		cout << sum(x, y) << endl;
		break;
	case 4:
		cout << ruzn(x, y) << endl;
		break;
	case 5:
		cout << pow(x, y) << endl;
		break;
	default:
		cout << "����� 1 - ������������, ����� 2 - �������, ����� 3 - �����, ����� 4 - ��������, ����� 5 - ���������� ����� � �������" << endl;
		break;
	}
	return 0;
}

int prod(int x, int y)
{
	return x * y;
}

float delenie(int x, int y)
{
	return (x) / y;
}

int sum(int x, int y)
{
	return x + y;
}

int ruzn(int x, int y)
{
	return x - y;
}

int pow(int x, int y)
{
	return x ^ y;
}