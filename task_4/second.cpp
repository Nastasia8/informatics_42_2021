#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
again:
	float S = 0;
	float P = 0;
	float n = 0;
	float m = 0;
	float I = 15;
	float per = 0;
	cout << "Enter the deposit amount" << endl;
	cin >> P;
	cout << "Enter the deposit term (in years)" << endl;
	cin >> n;
er:
	cout << "Enter the interest accrual period" << endl;
	cout << "1) 12 months" << endl << "2) 6 months" << endl << "3) 3 months" << endl;
	cin >> per;
	if (per == 1 || per == 12)
	{
		per = 12;
	}
	else if (per == 2 || per == 6)
	{
		per = 6;
	}
	else if (per == 3)
	{
		per = 3;
	}
	else
	{
		cout << "Entered incorrect data, try again" << endl;
		goto er;
	}

	if ((n * 12) <= per)
	{
		S = (P + ((P * I) / 100));
		cout << S << endl << "-------------------" << endl << endl;
		goto again;
	}
	else
	{
		m = ((n * 12) / per);
		S = (P * pow((1 + ((I / 100) / (m / 12))), ((m / (12 * n)))));
		cout << S << endl << "-------------------" << endl << endl;
		goto again;
	}





}

