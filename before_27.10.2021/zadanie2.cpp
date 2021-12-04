#include <iostream>
#include <cmath>
using namespace std;

double summa(double, double, double, double);

const double I = 15;

int main()
{
	double P, n, m;
	cout << "Enter deposit" << endl;
	cin >> P;
	cout << "Enter period" << endl;
	cin >> n;
	cout << "Enter the number of charges per year" << endl;
	cin >> m;
	cout  << summa(P, n, I, m) << endl;	
	return 0;
}

double summa(double P, double n, double I, double m)
{
	return P * (pow(1 + (I / 100 / m / 12), m / 12 * n));
}
