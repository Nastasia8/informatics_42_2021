#include<iostream>
#include<cmath>
#include<limits>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int i,j;
	cout << "Введите количество строк" << endl;
	cin >> i;
	cout << "Введите количество столбцов" << endl;
	cin >> j;

	int array[i][j];
	for(int n = 0; n < i; n++)
	{
		for(int m = 0; m < j; m++)
		{
			cout << "Введите элемент" << endl;
			cin >> array[n][m];
			cout << "\n";
		}
	}
	
	int max_nums[i];
	for(int n = 0; n < i; n++)
	{
		int max = numeric_limits<int>::min();
		for(int m = 0; m < j; m++)
		{
			cout << array[n][m] << "\t";
			if(max < array[n][m])
			{
				max = array[n][m];
			}
		}
		max_nums[n] = max;
		cout << "Максимальный элемент " << n << " строки равен " << max_nums[n] << endl;
	}
	
	int min_nums[j];
	for(int m = 0; m < j; m++)
	{
		int min = numeric_limits<int>::max();
		for(int n = 0; n < i; n++)
		{
			if(min > array[n][m])
			{
				min = array[n][m];
			}
		}
		min_nums[m] = min;
		cout << "Минимальный элемент " << m << " столбца равен " << min_nums[m] << endl;
	}
	return 0;
}
