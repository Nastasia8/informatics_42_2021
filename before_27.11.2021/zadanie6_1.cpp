#include<iostream>

using namespace std;

int recurs(int x);

int main()
{
	cout << recurs(15) << endl;
	return 0;
}

int recurs(int x)
{
	switch(x)
	{
		case 0:
		{
			return 0;
		}
		case 1:
		{
			return 3;
		}
		case 2:
		{
			return 5;
		}
		default:
		{
			return recurs(x - 1) + recurs(x - 2) + recurs(x - 3);
		}
	}
}
