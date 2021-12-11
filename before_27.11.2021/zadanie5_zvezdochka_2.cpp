#include<iostream>

using namespace std;

const int n = 8;

float sum_x(float (*x_array));
float sum_y(float (*y_array));
float sum_xy(float (*y_array), float (*x_array));
float sum_xsq(float (*x_array));


int main()
{
	float **array = new float*[2];
	float x_array[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
	float y_array[] = {3.314, 3.278, 3.262, 3.292, 3.332, 3.397, 3.487, 3.563};

	cout << "Sum x: " << sum_x(x_array) << endl;
	cout << "Sum y: " << sum_y(y_array) << endl;
	cout << "Sum xy: " << sum_xy(y_array, x_array) << endl;
	cout << "Sum x^2: " << sum_xsq(x_array) << endl;
	float a = (n * sum_xy(y_array, x_array) - sum_x(x_array) * sum_y(y_array)) / (n * sum_xsq(x_array) - sum_x(x_array) * sum_y(y_array));
	float b = (sum_y(y_array) - a * sum_x(x_array)) / n;
	cout << "y = " << a << "x + " << b << endl;
	return 0;
}

float sum_x(float (*x_array))
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += x_array[i];
	}
	return sum;
}

float sum_xsq(float (*x_array))
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += x_array[i] * x_array[i];
	}
	return sum;
}

float sum_y(float (*y_array))
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += y_array[i];
	}
	return sum;
}

float sum_xy(float (*y_array), float (*x_array))
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += y_array[i] * x_array[i];
	}
	return sum;
}
