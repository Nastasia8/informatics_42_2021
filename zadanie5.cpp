#include <iostream>
#include <cmath>

using namespace std;

double discriminant(float, float, float);
void root(float, float, float);

int main()
{
	float y, x, z, discr;
	cout << "Введите x" << endl;
	cin >> x;
	cout << "Введите y" << endl;
	cin >> y;
	cout << "Введите z" << endl;
	cin >> z;
	discr = discriminant(x, y, z);
	cout << "Дискриминант равен " << discr << endl;
	root(discr, x, y);
	
	return 0;
}

double discriminant(float x, float y, float z)
{
	return pow(y, 2.0) - 4 * x * z;
}

void root(float discr, float x, float y)
{
	if (discr < 0)
	{
		cout << "Корней нет" << endl;
	}
	if (discr == 0)
	{
		float rt = (-y) / (2 * x);
		cout << "f1 = " << rt << endl;
	}
	if (discr > 0)
	{
		float rt_1 = ((-y) + pow(discr, 1.0 / 2.0)) / (2 * x);
		float rt_2 = ((-y) - pow(discr, 1.0 / 2.0)) / (2 * x);
		cout << "f1 = " << rt_1 << endl << "f2 = " << rt_2 << endl;
	}
}
