#include < iostream>
#include <cmath>

using namespace std; //пространство имён

int main() //обязательная функция main
{
	int x = 1, y = 5, z = 3; // int представляет целое число
	int i, n, k; // координаты вектора  b
	cin >> i >> n >> k; // вводятся переменные i,n и k 
	cout << "dlina" << (sqrt(x * x + y * y + z * z)) << endl; // выводится строка "...", а потом данные 
	cout << "vektor" << (i / x + n / y + k / z) << endl; // endl текст выводится раздельно, на нескольких строках
	cout << "ckal proizvedenie" << (x * i + y * n + z * k) << endl; 
	cout << "vek proizvedenie" << ((y * k - n * z) - (x * k - z * i) + (x * n - y * i)) << endl;

	return 0;
} // конец
