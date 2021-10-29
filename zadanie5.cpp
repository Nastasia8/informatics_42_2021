#include<iostream>
#include<windows.h>
#include<limits>
#include<time.h>
using namespace std;

void find_min(int **, int, int, int *);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	srand(time(0));
	
	int i, j;
	cout << "Введите количество строк массива" << endl;
	cin >> i;
	cout << "Введите количество столбцов массива" << endl;
	cin >> j;
	
	int **array = new int*[i];
	int *max_num = new int[i];
	
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			array[m]= new int[j];
		}
	}
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			array[m][n]= rand();
		}
	}
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			cout << array[m][n] << "\t";
		}
		cout << "\n";
	}
	
	find_min(array, i, j, max_num);
	
	return 0;
}

void find_min(int **array, int rows, int columns, int *max_num)
{
	for (int i = 0; i < rows; i++)
	{
		int min = numeric_limits<int>::max();
		for (int j = 0; j < columns; j++)
		{
			if(min > array[i][j])
			{
				min = array[i][j];
			}
		}
		max_num[i] = min;
	}
	
	for (int i = 0; i < rows; i++)
	{
		cout << "Минимальный элемент " << i << " строки равен " << max_num[i] << endl;
	}
}