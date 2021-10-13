#include <iostream>
#include <cmath>
using namespace std;

#define a 1.35
#define b 0.98


int main(void)
{
	printf("Task 1:\n");
	for(double x = 1.14; x <= 4.24; x += 0.62)
	{
		printf("x: %f\tresult:%f\n", x, (pow(a * x + b, 1.0/3.0) / pow(log10(x), 2.0)));
	}
	printf("_________________________________\nTask 2:\n");
	
	double arr[] = {0.35, 1.28, 3.51, 5.21, 4.16};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < size; i++)
	{
		printf("x: %f\tresult:%f\n", arr[i], (pow(a * arr[i] + b, 1.0/3.0) / pow(log10(arr[i]), 2.0)));
	}
}