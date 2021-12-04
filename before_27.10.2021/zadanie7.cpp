#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;

void draw(int, int, char);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int height, width;
	char symbol;
	cout << "Введите высоту прямоугольника" << endl;
	cin >> height;
	cout << "Введите ширину прямоугольника" << endl;
	cin >> width;
	cout << "Укажите символ отрисовки" << endl;
	cin >> symbol;
	draw(height, width, symbol);
	return 0;
}

void draw(int height, int width, char symbol)
{
	for(int i = 1; i <= height; i++)
	{
		if ((i == 1) || (i == height))
		{
			for(int i = 0; i < width; i++)
			{
				printf("%c", symbol);
			}
			printf("\n");
		}
		else
		{
			printf("%c", symbol);
			for(int j = 2; j < width; j++)
			{
				printf(" ");
			}
			printf("%c\n", symbol);
		}
	}
}
