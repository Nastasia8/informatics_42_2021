#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;

void swap(float*, float*);

int main()
{
	float x, y;
	cin >> x;
	cin >> y;
	swap(&x, &y);
	cout << x << " " << y << endl;
	return 0;
}

void swap(float *x, float *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}