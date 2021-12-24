# include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "n:";
	cin >> n;
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			cout << n << " ";
		}
		else
		{
			n = (3 * n + 1) / 2;
			cout << n << " ";
		}
	}
	return 0;
}