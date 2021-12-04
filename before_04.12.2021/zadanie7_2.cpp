#include<iostream>

using namespace std;

void first_while(int height, char symbol);
void second_while(int height, char symbol);
void third_while(int height, char symbol);
void fourth_while(int height, char symbol);
void first_for(int height, char symbol);
void second_for(int height, char symbol);
void third_for(int height, char symbol);
void fourth_for(int height, char symbol);

int main()
{
	int height;
	cout << "Height" << endl;
	cin >> height;
	char symbol;
	cout << "Symbol" << endl;
	cin >> symbol;
	cout << endl;
	
	first_while(height, symbol);
	cout << endl;
	second_while(height, symbol);
	cout << endl;
	third_while(height, symbol);
	cout << endl;
	fourth_while(height, symbol);
	first_for(height, symbol);
	cout << endl;
	second_for(height, symbol);
	cout << endl;
	third_for(height, symbol);
	cout << endl;
	fourth_for(height, symbol);
	
	return 0;
}

void first_while(int height, char symbol)
{
	int count = 1;
	while (height > 0)
	{
		int i = count;
		while (i > 0)
		{
			cout << symbol;
			i--;
		}
		cout << endl;
		count++;
		height--;
	}
}

void second_while(int height, char symbol)
{
	while (height > 0)
	{
		int i = height;
		while (i > 0)
		{
			cout << symbol;
			i--;
		}
		cout << endl;
		height--;
	}	
}

void third_while(int height, char symbol)
{
	int count = 1;
	while (height > 0)
	{
		int spaces = height - 1;
		while (spaces > 0)
		{
			cout << " ";
			spaces--;
		}
		int i = count;
		while (i > 0)
		{
			cout << symbol;
			i--;
		}
		cout << endl;
		count++;
		height--;
	}	
}

void fourth_while(int height, char symbol)
{
	int spaces = 0;
	while (height > 0)
	{
		int i = spaces;
		while (i > 0)
		{
			cout << " ";
			i--;
		}
		i = height;
		while (i > 0)
		{
			cout << symbol;
			i--;
		}
		cout << endl;
		spaces++;
		height--;
	}	
}

void first_for(int height, char symbol)
{
	int count = 1;
	for(height; height > 0; height--, count++)
	{
		for(int i = count; i > 0; i--)
		{
			cout << symbol;
		}
		cout << endl;
	}
}

void second_for(int height, char symbol)
{
	for(height; height > 0; height--)
	{
		for(int i = height; i > 0; i--)
		{
			cout << symbol;
		}
		cout << endl;
	}	
}

void third_for(int height, char symbol)
{
	for(int count = 1; height > 0; count++, height--)
	{
		int spaces = height - 1;
		for (int i = spaces; i > 0; i--)
		{
			cout << " ";
		}
		for (int i = count; i > 0; i--)
		{
			cout << symbol;
		}
		cout << endl;
	}	
}

void fourth_for(int height, char symbol)
{
	for(int spaces = 0; height > 0; height--, spaces++)
	{
		for(int i = spaces; i > 0; i--)
		{
			cout << " ";
		}
		for(int i = height; i > 0; i--)
		{
			cout << symbol;
		}
		cout << endl;
	}
}
