#include<iostream>
#include<windows.h>
#include<limits>
#include<time.h>
using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	srand(time(0));
	
	int k;
	cout << "Введите размер массива" << endl;
	cin >> k;
	int *array= new int[k];
	for (int *i = array; i != array + k; i++)
	{
		*i = rand();
	}
	for (int i = 0; i < k; i++)
	{
		cout << *(array + i) << "\t";
	}
	
	int min = numeric_limits<int>::max();
	for(int *i = array; i != array + k; i++)
	{
		if (min > *i)
		{
			min = *i;
		}
	}
	cout << "Минимальный элемент равен " << min << endl;
	return 0;
}
