#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int i;
	int s;
	int n = 0;
	cout << "Начало диапазона: ";
	cin >> i;
	cout << "Конец Диапозона: ";
	cin >> s;

	cout << "Сумма чётных чисел = " << n << endl;

	while (i <= s)
	{
		if (i % 2 == 0)
			n = n + i;
		i++;
	}

	return 0;
}
