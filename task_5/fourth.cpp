#include <iostream>

using namespace std;

void FillArray(int *pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(pArr+i) = rand() % 100 + 1;
	}
}

void DisplayArray(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << pArr[i] << endl;
	}
}

void FindMin(int* pArr, int size, int *temp)
{
	for (int i = 0; i < size; i++)
	{
		if (pArr[i] < *temp)
		{
			*temp = pArr[i];
		}
		else
		{
			continue;
		}
	}
}


int main()
{
	srand(time(NULL));
	int elems = 0;
	int temp = 0;
	cout << "Enter the number of array" << endl;
	cin >> elems;
	int* arr = new int[elems];
	FillArray(arr, elems);
	DisplayArray(arr, elems);
	temp = arr[0];
	FindMin(arr, elems, &temp);
	
	cout << "Minimum array element:= " << temp << endl << endl;
	
	delete[] arr;
}

