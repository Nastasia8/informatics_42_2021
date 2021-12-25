#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

/// <summary>
/// вычисляет сумму ряда
/// </summary>
/// <param name="k">стоппер</param>
void calculateSumOfSeries(int k) 
{
	float s = 0;
	for (float n = 1; n <= k; n++) 
	{
		s += 2 / ((2 * n + 1) * (2 * n + 3));
	}
	cout << "summa = "<<s<< endl;
}

int main()
{
	int k;
	cout << "enter k" << endl;
	cin >> k;
	calculateSumOfSeries(k);
	return 0;
}