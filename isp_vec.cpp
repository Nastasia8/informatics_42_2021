#include < iostream>
#include <cmath>

using namespace std;

int main()
{
	int x = 1, y = 5, z = 3;
	int i, n, k; //координаты вектора  b
	cin >> i >> n >> k;
	cout << "dlina" << (sqrt(x * x + y * y + z * z)) << endl;
	cout << "vektor" << (i / x + n / y + k / z) << endl;
	cout << "ck proizvedenie" << (x * i + y * n + z * k) << endl;
	cout << "v proizvedenie" << ((y * k - n * z) - (x * k - z * i) + (x * n - y * i)) << endl;

	return 0;


}