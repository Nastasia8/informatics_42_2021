#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float multi_equation(float, float, float);
	float x = 0;
	float y = 0;
	float z = 0;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter z" << endl;
	cin >> z;
	multi_equation(x, y, z);

}

float multi_equation(float x, float y, float z)
{
	float d = 0;
	float f = 0;
	float f1 = 0;
	float f2 = 0;
	d = (pow(y, 2)) - (4 * x * z);
	if (d < 0)
	{
		cout << "no roots" << endl;
	}
	else if (d == 0)
	{
		cout << "one roots " << endl;
		f = (-y) / (2*x);
		cout << f << endl;
	}
	else if (d > 0)
	{
		cout << "two roots" << endl;
		f1 = ((-y) + sqrt(d)) / (2 * x);
		f2 = ((-y) - sqrt(d)) / (2 * x);
		cout << " first:= " << f1 << " second:= " << f2 << endl;
	}
	return 0;
}