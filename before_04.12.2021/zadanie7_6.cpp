#include<iostream>

using namespace std;

int cnk(int, int);

int main()
{
	int height;
	cin >> height;
	for(int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << cnk(i, j) << " ";
		}
		cout << endl;
	}
	
	return 0;
}

int cnk(int n, int k)
{
	if (n == k || k == 0)
	{
		return 1;
	}
	return cnk(n - 1, k - 1) + cnk(n - 1, k);
}