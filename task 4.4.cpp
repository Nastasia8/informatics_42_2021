#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int a;
	int b;
	int sum = 0;
	cout << "������� ������";
	cin >> a;
	cout << "������� �����";
	cin >> b;

	while (a <= b)
	{
		//if (a % 2 == 0)
		//{
		//	sum += a;
		//	
		//}
		sum += (a % 2 == 0) ? a : 0;
		a += 1;
	}
	cout << "�����=" << sum << endl;
	return 0;
}