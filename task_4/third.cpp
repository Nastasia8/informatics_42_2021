#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float amount(int);
	float composition(int);
	setlocale(LC_ALL, "Russian");
	int k = 0;
	cout << "Enter the upper bound" << endl;
	cin >> k;

	cout << "The sum of the number series:= " << amount(k) << endl;

	cout << "The product of a numerical series:= " << composition(k) << endl;
}

float amount(int k)
{
	float sum_e = 0;
	for (int n = 1; n <= k; n++)
	{
		sum_e += (float)2 / ((2 * n + 1) * (2 * n + 3));
	}
	return sum_e;
}

float composition(int k)
{
	float sum_p = 1;
	for (int n = 1; n <= k; n++)
	{
		sum_p *= (float)2 / ((2 * n + 1) * (2 * n + 3));
	}
	return sum_p;

}