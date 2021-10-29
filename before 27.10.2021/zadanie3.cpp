#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double sum(int);

int main()
{
	int k;
	cout << "Enter k" << endl;
	cin >> k;
	cout << sum(k) << endl;
	return 0;
}

double sum(int k)
{
	double summa = 0.00;
	for(double n = 1; n <= k; n++)
	{
		sum = sum + 2.00 / ((2 * n + 1) * (2 * n + 3));
	}
	return summa;
}
