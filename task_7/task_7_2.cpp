#include <iostream>

using namespace std;

void fun(int lines, char simb)
{
	int t = 0;
	int o = 0;

	while (t++ < lines)
	{
		while (o++ < t)
		{
			cout << simb;
		}
		o = 0;
		cout << endl;
	}


	cout << endl;

	cout << endl << endl;


	for (int i = 0; i <= lines - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << simb;
		}
		cout << endl;

	}

	cout << endl;

	for (int i = 0; i <= lines - 1; i++)
	{
		for (int j = lines - 1; j >= i; j--)
		{
			cout << simb;
		}
		cout << endl;

	}

	cout << endl;

	for (int i = 0; i <= lines - 1; i++)
	{
		for (int j = 0; j <= lines - i - 1; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << simb;
		}
		cout << endl;

	}

	cout << endl;

	for (int i = 0; i <= lines - 1; i++)
	{
		for (int j = lines - 1; j >= lines - 1 - i; j--)
		{
			cout << " ";
		}
		for (int j = lines - 1; j >= i; j--)
		{
			cout << simb;
		}
		cout << endl;

	}
}
int main()
{
	int lines = 0;
	char simb = 'h';
	cout << "Enter number of lines:= ";
	cin >> lines;
	cout << "Enter symbol:= ";
	cin >> simb;	
	fun(lines, simb);

	return 0;
}
