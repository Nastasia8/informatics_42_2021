#include <iostream>
#include <cmath>

using namespace std;

bool proverka(int);
int prod(int);

int main()
{
	int k;
	cout << "Введите шестизначное число" << endl;
	cin >> k;
	if(proverka(k))
	{
		cout << prod(k) << endl;
	}
	return 0;
}

bool proverka(int k)
{
	int i = 0;
	while(k > 0)
	{
		k /= 10;
		i++;
	}
	if (i != 6)
	{
		cout << "Введите шестизначное число!" << endl;
		return false;
	}
	else
	{
		return true;
	}
}

int prod(int k)
{
	int product = 1;
	int temp_1 = 0;
	int temp_2 = 0;
	while(k > 0)
	{
		temp_1 = k % 10;
		k /= 10;
		temp_2 = k  % 10;
		k /= 10;
		product *= temp_1 * temp_2;
	}
	return product;
}
