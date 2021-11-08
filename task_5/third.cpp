#include <iostream>

using namespace std;


int main()
{
	int elems = 0;
	int temp = 0;
	cout << "Enter the number of array" << endl;
	cin >> elems;
	int* arr = new int[elems];
	for (int i = 0; i < elems; i++)
	{
		arr[i] = rand() % 100;
	}
	temp = arr[0];

	for (int i = 0; i < elems; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
		}
		else
		{
			continue;
		}
	}
	cout << "Minimum array element:= " << temp << endl << endl;
	for (int i = 0; i < elems; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
}

