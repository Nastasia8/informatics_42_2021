#include<iostream>
#include<cmath>

using namespace std;

const float epsilon = 0.0001;
const float step = 0.5;

float y_func(float);
void fill_array(float (*array)[2], int, float, float);
void find(float (*array)[2], float (*res), int);
float midpoint(float, float);
void show_steps(float (*res));

int main()
{
	float start = -2.0;
	float end = 3.0;
	int k = (end - start) / step + 1;
	float array[k][2];
	float res[2];
	
	fill_array(array, k, start, end);
	find(array, res, k);
	show_steps(res);
	
	return 0;
}

float y_func(float x)
{
	return pow(x, 4.0) + 2 * pow(x, 3.0) - x - 1;
}

void fill_array(float (*array)[2], int k, float start, float end)
{
	for (int i = 0; start <= end; i++, start += step)
	{
		array[i][1] = y_func(start);
		array[i][0] = start;
	}
}

void find(float (*array)[2], float (*res), int k)
{
	for (int m = 0; m < k; m++)
	{
		if (array[m][1] * array[m + 1][1] < 0)
		{
			res[0] = array[m][0];
			res[1] = array[m + 1][0];
			break;
		}
	}
}

float midpoint(float a, float b)
{
	return (a + b) / 2;
}

void show_steps(float (*res))
{
	int steps = 0;
	printf("i\ta\t\tb\t\tc\t\tb-a\t\tf(a)\t\tf(c)\t\tf(a)*f(c)\n");
	for (; abs(res[1] - res[0]) >= epsilon; steps++)
	{
		printf("%d\t%.6f\t%.6f\t%.6f\t%.6f\t", steps + 1, res[0], res[1], midpoint(res[0], res[1]), res[1] - res[0]);
		printf("%.6f\t%.6f\t%.12f\n", y_func(res[0]), y_func(midpoint(res[0], res[1])), y_func(res[0]) * y_func(midpoint(res[0], res[1])));
		float c = midpoint(res[0], res[1]);
		if (y_func(res[0]) * y_func(c) < 0)
		{
			res[1] = c;
		}
		if (y_func(res[0]) * y_func(c) > 0)
		{
			res[0] = c;
		}
	}
	printf("%d\t%.6f\t%.6f\t%.6f\t%.6f\t", steps + 1, res[0], res[1], midpoint(res[0], res[1]), res[1] - res[0]);
	printf("%.6f\t%.6f\t%.12f\n", y_func(res[0]), y_func(midpoint(res[0], res[1])), y_func(res[0]) * y_func(midpoint(res[0], res[1])));
}