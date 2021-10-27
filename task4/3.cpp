#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

void calculateSumOfSeries(int k);
void calculateTheProduct(int k);



int main () {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

int k;
	cout << "Введите k "<< endl;
	cin >> k;
	calculateSumOfSeries(k);
	calculateTheProduct(k);
	return 0;
}



void calculateSumOfSeries(int k) {

	float s = 0;
	for ( float n = 1; n <= k; n++) 
		{

			s += float(2) / ((2 * n + 1) * (2 * n + 3));

		}
		cout << "Сумма = " << s << endl;

}

void calculateTheProduct(int k) {

	float p = 1;
	for ( float n = 1; n <= k; n++)
		{

			p *= pow((-1), n-1) + n;

		}
		cout << "Произведение = " << p << endl;

}