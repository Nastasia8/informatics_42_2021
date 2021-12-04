#include<iostream>

using namespace std;

int factorial(int);

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;

	float result = 0;
	for (int k = 1; k <= n; k++)
	{
		result += -(k * ((5.0 - k) / factorial(k)));
	}
	cout << result << endl;
	
	return 0;
}

int factorial(int n)
{
	int res = 1;
	for(int i = 1; i <= n;  i++)
	{
		res *= i;
	}
	return res;
}