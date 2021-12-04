#include<iostream>

using namespace std;

void first_way(int ** array, int n, int m);
void fill_array(int ** array, int n, int m);
void show_array(int ** array, int n, int m);

int main()
{
	int n, m;
	cout << "Enter the number of rows" << endl;
	cin >> n;
	cout << "Enter the number of columns" << endl;
	cin >> m;
	
	int ** array = new int * [n];
	for(int i = 0; i < m; i++)
	{
		array[i] = new int [m];
	}
	
	fill_array(array, n, m);
	
	cout << endl;
	
	show_array(array, n, m);
	
	cout << endl;

	first_way(array, n, m);

	show_array(array, n, m);
	
	return 0;
}

void first_way(int ** array, int n, int m)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		int steps = m / 2;
		for (int k = 0; k < m && steps > 0; k++, steps -= 1)
		{
			temp = array[i][k];
			array[i][k] = array[i][m - k - 1];
			array[i][m - k - 1] = temp;
		}
	}
}

void fill_array(int ** array, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			array[i][k] = rand();
		}
	}
}

void show_array(int ** array, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cout << array[i][k] << "\t";
		}
		cout << endl;
	}	
}

