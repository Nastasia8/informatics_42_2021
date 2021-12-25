#include <iostream>
using namespace std;
int nod(int, int);

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, t;
	int nok = 0;
	cout << "введите числа\n";
	cin >> a >> b;
	t = nod(a, b);
	cout << "НОД=" << t << "\n";

	nok = a * b / t;
	cout << "НОК=" << nok << "\n";
	return 0;
}
int nod(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else b = b - a;
	}
	return a;
}