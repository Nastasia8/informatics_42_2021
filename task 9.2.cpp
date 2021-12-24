#include <iostream>

using namespace std;

class Vehicle // сделано самостоятельно
{
public:
	virtual double getNalog1() = 0; // сделано самостоятельно
	virtual double getNalog2() = 0; // сделано самостоятельно
	virtual double getNalog3() = 0; // сделано самостоятельно
	virtual double getNalog4() = 0; // сделано самостоятельно
	virtual void showVehicleType() = 0; // сделано самостоятельно
};

class Car : public Vehicle // сделано самостоятельно
{
private: 
	double betN; // Ставка налога для региона // сделано самостоятельно
	double powerN; // Мощность ТС (количество л.с.) // сделано самостоятельно
	double months; // Месяцы владения ТС в году / 12 месяцев // сделано самостоятельно
	double coefficient; // Повышающий коэффициент // сделано самостоятельно
	double sumN; // Сумма налога // сделано самостоятельно
	double x; // Владение ТС в году / 12 месяцев // сделано самостоятельно
public:
	Car(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // сделано самостоятельно
	{
		if (x < 1) // сделано самостоятельно
		sumN = b * p * m; // сделано самостоятельно
		else // сделано самостоятельно
		{ 
			if (x = 1) // сделано самостоятельно
			sumN = b * p; // сделано самостоятельно
			else // сделано самостоятельно
			{
				if (x < 1 && c > 3) // сделано самостоятельно
				sumN = b * p * m * c; // сделано самостоятельно
				else // сделано самостоятельно
				{
					if (x > 1 && c > 3) // сделано самостоятельно
					sumN = b * p * c; // сделано самостоятельно
				}
			}
		}
	}
	double getNalog1() override // сделано самостоятельно
	{
		return betN * powerN * months; // сделано самостоятельно
	}
	double getNalog2() override // сделано самостоятельно
	{
		return betN * powerN; // сделано самостоятельно
	}
	double getNalog3() override // сделано самостоятельно
	{
		return betN * powerN * months * coefficient; // сделано самостоятельно
	}
	double getNalog4() override // сделано самостоятельно
	{
		return betN * powerN * coefficient; // сделано самостоятельно
	}
	void showVehicleType() // сделано самостоятельно
	{
		cout << "Car: " << endl; // сделано самостоятельно
	}
};

class Bus : public Vehicle // сделано самостоятельно
{
private:
	double betN; // сделано самостоятельно
	double powerN; // сделано самостоятельно
	double months; // сделано самостоятельно
	double coefficient; // сделано самостоятельно
	double sumN;  // сделано самостоятельно
	double x; // сделано самостоятельно
public:
	Bus(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // сделано самостоятельно
	{
		if (x < 1) // сделано самостоятельно
			sumN = b * p * m; // сделано самостоятельно
		else // сделано самостоятельно
		{
			if (x = 1) // сделано самостоятельно
				sumN = b * p; // сделано самостоятельно
			else // сделано самостоятельно
			{
				if (x < 1 && c > 3) // сделано самостоятельно
					sumN = b * p * m * c; // сделано самостоятельно
				else // сделано самостоятельно
				{
					if (x > 1 && c > 3) // сделано самостоятельно
						sumN = b * p * c; // сделано самостоятельно
				}
			}
		}
	}
	double getNalog1() override // сделано самостоятельно
	{
		return betN * powerN * months; // сделано самостоятельно
	}
	double getNalog2() override // сделано самостоятельно
	{
		return betN * powerN; // сделано самостоятельно
	}
	double getNalog3() override // сделано самостоятельно
	{
		return betN * powerN * months * coefficient; // сделано самостоятельно
	}
	double getNalog4() override // сделано самостоятельно
	{
		return betN * powerN * coefficient; // сделано самостоятельно
	}
	void showVehicleType() // сделано самостоятельно
	{ 
		cout << "Bus: " << endl; // сделано самостоятельно
	}
};

class Motorcycle : public Vehicle // сделано самостоятельно
{
private: // сделано самостоятельно
	double betN; // сделано самостоятельно
	double powerN; // сделано самостоятельно
	double months; // сделано самостоятельно
	double coefficient; // сделано самостоятельно
	double sumN;  // сделано самостоятельно
	double x; // сделано самостоятельно
public:
	Motorcycle(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // сделано самостоятельно
	{
		if (x < 1) // сделано самостоятельно
			sumN = b * p * m; // сделано самостоятельно
		else // сделано самостоятельно
		{
			if (x = 1) // сделано самостоятельно
				sumN = b * p; // сделано самостоятельно
			else // сделано самостоятельно
			{
				if (x < 1 && c > 3) // сделано самостоятельно
					sumN = b * p * m * c; // сделано самостоятельно
				else // сделано самостоятельно
				{
					if (x > 1 && c > 3) // сделано самостоятельно
						sumN = b * p * c; // сделано самостоятельно
				}
			}
		}
	}
	double getNalog1() override // сделано самостоятельно
	{
		return betN * powerN * months; // сделано самостоятельно
	}
	double getNalog2() override // сделано самостоятельно
	{
		return betN * powerN; // сделано самостоятельно
	}
	double getNalog3() override // сделано самостоятельно
	{
		return betN * powerN * months * coefficient; // сделано самостоятельно
	}
	double getNalog4() override // сделано самостоятельно
	{
		return betN * powerN * coefficient; // сделано самостоятельно
	}
	void showVehicleType() // сделано самостоятельно
	{
		cout << "Motorcycle: " << endl; // сделано самостоятельно
	}
};

class Plane : public Vehicle // сделано самостоятельно
{
private:
	double betN; // сделано самостоятельно
	double powerN; // сделано самостоятельно
	double months; // сделано самостоятельно
	double coefficient; // сделано самостоятельно
	double sumN; // сделано самостоятельно
	double x; // сделано самостоятельно
public:
	Plane(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // сделано самостоятельно
	{
		if (x < 1) // сделано самостоятельно
			sumN = b * p * m; // сделано самостоятельно
		else // сделано самостоятельно
		{
			if (x = 1) // сделано самостоятельно
				sumN = b * p; // сделано самостоятельно
			else // сделано самостоятельно
			{
				if (x < 1 && c > 3) // сделано самостоятельно
					sumN = b * p * m * c; // сделано самостоятельно
				else // сделано самостоятельно
				{
					if (x > 1 && c > 3) // сделано самостоятельно
						sumN = b * p * c; // сделано самостоятельно
				}
			}
		}
	}
	double getNalog1() override // сделано самостоятельно
	{
		return betN * powerN * months; // сделано самостоятельно
	}
	double getNalog2() override // сделано самостоятельно
	{
		return betN * powerN; // сделано самостоятельно
	}
	double getNalog3() override // сделано самостоятельно
	{
		return betN * powerN * months * coefficient; // сделано самостоятельно
	}
	double getNalog4() override // сделано самостоятельно
	{
		return betN * powerN * coefficient; // сделано самостоятельно
	}
	void showVehicleType() // сделано самостоятельно
	{
		cout << "Plane: " << endl; // сделано самостоятельно
	}
};

int main()
{
	Car C(8, 50, 10, 1.3, 10); // сделано самостоятельно
	Bus B(8, 50, 10, 1.3, 10); // сделано самостоятельно
	Motorcycle M(8, 50, 10, 1.3, 10); // сделано самостоятельно
	Plane P(8, 50, 10, 1.3, 10); // сделано самостоятельно
	 
	cout << "Car: " << C.getNalog1() << endl; // сделано самостоятельно
	cout << "Bus: " << B.getNalog1() << endl; // сделано самостоятельно
	cout << "Motorcycle: " << M.getNalog1() << endl; // сделано самостоятельно
	cout << "Plane: " << P.getNalog1() << endl; // сделано самостоятельно

	cout << "Car: " << C.getNalog2() << endl; // сделано самостоятельно
	cout << "Bus: " << B.getNalog2() << endl; // сделано самостоятельно
	cout << "Motorcycle: " << M.getNalog2() << endl; // сделано самостоятельно
	cout << "Plane: " << P.getNalog2() << endl; // сделано самостоятельно

	cout << "Car: " << C.getNalog3() << endl; // сделано самостоятельно
	cout << "Bus: " << B.getNalog3() << endl; // сделано самостоятельно
	cout << "Motorcycle: " << M.getNalog3() << endl; // сделано самостоятельно
	cout << "Plane: " << P.getNalog3() << endl; // сделано самостоятельно

	cout << "Car: " << C.getNalog4() << endl; // сделано самостоятельно
	cout << "Bus: " << B.getNalog4() << endl; // сделано самостоятельно
	cout << "Motorcycle: " << M.getNalog4() << endl; // сделано самостоятельно
	cout << "Plane: " << P.getNalog4() << endl; // сделано самостоятельно
	return 0;
}
