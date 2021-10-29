#include <iostream>
#include <cmath>

void func_y(double a, double b, double xn, double xk, double dx)
{
	printf("Task 1:\n");
	for(xn; xn <= xk; xn += dx)
	{
		printf("x: %f\tresult:%f\n", xn, (pow(a * xn + b, 1.0/3.0) / pow(log10(xn), 2.0)));
	}
}

void func_y(double a, double b, int size, double arr[])
{
	printf("Task 2:\n");
	for(int i = 0; i < size; i++)
	{
		printf("x: %f\tresult:%f\n", arr[i], (pow(a * arr[i] + b, 1.0/3.0) / pow(log10(arr[i]), 2.0)));
	}
}