#include <iostream>
#include <windows.h>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;

void fill_array(int *arr, int size);
void display_array(int *arr, int size);
void min(int *arr, int size, int *minimal);

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));
	int size = 0;
	int minimal = 100;

	cout << "Введите размер массива" << endl;
	cin >> size;
    cout << "============" << endl;

	int *arr = new int[size];

	fill_array(arr, size);
	display_array(arr, size);
	min(arr, size, &minimal);

	cout << "============" << endl << "Минимальный элемент массива =  " << minimal << endl;

	delete [] arr;
    return 0;
}

void fill_array(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr+i) = rand() % 100;
	}
    
}

void display_array(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	} 
}

void min(int *arr, int size, int *minimal)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < *minimal)
        {
            *minimal = arr[i];    
        }
    }
}