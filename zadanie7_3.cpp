#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the number" << endl;
	cin >> n;
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			cout << n << endl;
		}
		else
		{
			n = (n * 3 + 1) / 2;
			cout << n << endl;
		}
	}
	cout << endl << "Result: " << n << endl;
	return 0;
}
