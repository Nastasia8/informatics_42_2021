#include<iostream>
#include<algorithm>

using namespace std;

unsigned int greatest_com_div(int, int);
void fill_array(int (*array), int);
void first_way(int (*array), int);
void second_way(int, int, int&);
void second_way_show(int (*array), int);

int main()
{
	int k;
	cout << "Enter the number of natural numbers" << endl;
	cin >> k;
	int array[k];
	
	fill_array(array, k);
	first_way(array, k);
	second_way_show(array, k);
	
	return 0;
}

unsigned int greatest_com_div(int x, int y)
{
	if (x > 0 && y > 0)
	{
		unsigned int maximal = max(x, y);
		unsigned int minimal = min(x, y);
		unsigned int remainder = minimal;
		while(maximal % minimal != 0)
		{
			remainder = maximal % minimal;
			maximal = minimal;
			minimal = remainder;
		}
		return minimal;
	}
	else
	{
		abort();
	}
}

void fill_array(int (*array), int k)
{
	for(int i = 0; i < k; i++)
	{
		cout << "Enter natural number" << endl;
		cin >> array[i];
	}
	cout << "\n";
}

void first_way(int (*array), int k)
{
	for(int i = 1; i < k; i++)
	{
		array[i] = greatest_com_div(array[i], array[i - 1]);
	}
	cout << "First way:\n" << array[k - 1] << endl;
}

void second_way(int x, int y, int &divisor)
{
	for(int i = 2; i <= y;)
	{
		if(y % i == 0)
		{
			divisor *= i;
			divisor = greatest_com_div(divisor, x);
			y /= i;
		}
		else
		{
			i++;
		}
	}
}

void second_way_show(int (*array), int k)
{
	int divisor = 1;
	for (int m = 1; m < k; m++)
	{
		second_way(array[m], array[m - 1], divisor);
	}
	cout << "Second way:\n" << divisor << endl;
}
