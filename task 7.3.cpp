# include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� n:";
	cin >> n;
	if (n % 2 == 0)
	{
		n = n / 2;
		cout << n;
	}
	else
	{
		n = (3 * n + 1) / 2;
		cout << n;
	}
	cout << endl;
	cout << "����� �� 1 �� 10 :" << "2 1 5 2 8 3 11 4 14 5" << endl;
	return 0;
}