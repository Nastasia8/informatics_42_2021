#include<iostream>
#include<windows.h>
#include<limits>
#include<time.h>
using namespace std;

void fill_array(int*, int);
void show_array(int*, int);
void find_min(int*, int);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	srand(time(0));
	
	int k;
	cout << "Введите размер массива" << endl;
	cin >> k;
	int *array= new int[k];
	
	fill_array(array, k);
	show_array(array, k);
	find_min(array, k);
	
	return 0;
}

void fill_array(int* array, int size)
{
	for (int *i = array; i != array + size; i++)
	{
		*i = rand();
	}
}

void show_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(array + i) << "\t";
	}
}

void find_min(int* array, int size)
{
	int min = numeric_limits<int>::max();
	for(int *i = array; i != array + size; i++)
	{
		if (min > *i)
		{
			min = *i;
		}
	}
	cout << "Минимальный элемент равен " << min << endl;
}