#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

float Discriminant_Roots(float, float, float);

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

	float x = 0;
	float y = 0;
	float z = 0;
	cout << "Введите x" << endl;
	cin >> x;
	cout << "Введите y" << endl;
	cin >> y;
	cout << "Введите z" << endl;
	cin >> z;
   cout << endl;
	Discriminant_Roots(x, y, z);

}

float Discriminant_Roots(float x, float y, float z)
{
	float D = 0;
	float f = 0;
	float f1 = 0;
	float f2 = 0;
	D = (pow(y, 2)) - (4 * x * z);
      cout << "Дискриминант = " << D << endl;
	if (D < 0)
	{
		cout << "Корней нет" << endl;
	}
	else if (D == 0)
	{
		cout << "Один корень" << endl;
		f = (-y) / (2 * x);
		cout << f << endl;
	}
	else if (D > 0)
	{
		cout << "Два корня" << endl;
		f1 = ((-y) + sqrt(D)) / (2 * x);
		f2 = ((-y) - sqrt(D)) / (2 * x);
		cout << "Первый корень:= " << f1 << endl;
      cout << "Второй корень:= " << f2 << endl;
	}
	return 0;
} 