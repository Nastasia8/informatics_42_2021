#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	double x_left, x_right, stap;
	double a, b, c;
	x_left = 0;
	x_right = 5;
	stap = 0.5;
	for (x_left; x_left <= x_right; x_left += stap) 
	{
		double x1 = x_left;
		
		cout << x1 <<" ";
		double F1 = ((pow(x1, 3)) - (0.1 * (pow(x1, 2))) + (0.3 * x1) - (0.6));
		cout << F1 << " " << endl;

		double x2 = x_left + stap;
		cout << x2 << " ";
		double F2 = ((pow(x2, 3)) - (0.1 * (pow(x2, 2))) + (0.3 * x2) - (0.6));
		cout << F2 << " " << endl;

		if (F1 > 0 && F2 < 0 || F1 < 0 && F2 > 0)
		{
			a = x1;
			b = x2;
			cout << "found" << endl;
			cout << "pirF: " << F1 << " " << F2 << endl;
			cout << "pirX: " << a << " " << b << endl;
			break;
		}
	}
	cout  << "a" << setw(14) << "b" << setw(14) << "c" << setw(19) << "        |b - a|" << setw(10) << "Fa" << setw(14) << "Fc" << setw(14) << "Fac" << endl;
	cout  << "__________" << setw(14) << "__________" << setw(14) << "__________" << setw(14) << "__________" << setw(14) << "__________" << setw(14) << "__________" << setw(14) << "__________" << endl;
	while (abs((b - a)) > 0.0002)
	{
		if (abs((b - a)) > 0.0002)
		{
			c = (a + b) / 2;

			double Fa, Fc, Fac;

			Fa = ((pow(a, 3)) - (0.1 * (pow(a, 2))) + (0.3 * a) - (0.6));
			Fc = ((pow(c, 3)) - (0.1 * (pow(c, 2))) + (0.3 * c) - (0.6));

			Fac = Fa * Fc;

			if (Fac < 0)
			{
				a = Fa;
				b = c;
			}
			else if (Fac > 0)
			{
				a = c;
				b = b;
			}
			cout << a << setw(14) << b << setw(14) << c << setw(14) << abs((b - a)) << setw(14) << Fa << setw(14) << Fc << setw(14) << Fac << endl;
		}
		else if (abs((b - a)) <= 0.0002)
		{
			cout << "yra";
			break;
		}
		
		
	}
	

}
