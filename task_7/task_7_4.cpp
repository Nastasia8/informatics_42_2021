#include <iostream>
using namespace std;

float Fac(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		return x * Fac(x - 1);
	}
}

int main()
{
	int limit = 0;
	float result = 0;
	cout << "Enter top limit:= ";
	cin >> limit;

	for (int i = 1; i <= limit; i++)
	{
		result = (-1) * i * ((5 - i) / Fac(i));
	}
	cout << "result:= " << result;

}
