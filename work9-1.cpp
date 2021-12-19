#include <iostream>
#include <string>
#include <cmath> //библиотека для вычислений 

using namespace std;
//я сама писала 
class Pendulum
{
private:
	virtual double frequency() = 0;
	virtual double period() = 0;
	virtual void type() = 0;
};
class Physical :public Pendulum
{
	double m;
	double I;
	double g;
	double R;
public:
	Physical(double m, double g, double I, double R)
	{
		this->m = m;
		this->I = I;
		this->g = g;
		this->R = R;

	}
	double frequency() override
	{
		return sqrt((m * g * R) / I);
	}
	double period() override
	{
		return 2 * 3, 14 * sqrt(I / (m * g * R));
	}
	void type() override
	{
		cout << " Physical Pendulum" << endl;
	}
};
class Mathematics :public Pendulum
{
	double g;
	double l;
public:
	double getL(double l)
	{
		if (l == 0)
		{
			cout << "l = ";
			cin >> l;
		}
		cout << endl;
		return l;
	}
	Mathematics(double g, double l)
	{
		this->g = g;
		this->l = getL(l);
	}
	double frequency() override
	{
		return sqrt(g / l);
	}
	double period() override
	{
		return 2 * 3, 14 * sqrt(l / g);
	}
	void type() override
	{
		cout << " Mathematical Pendulum" << endl;
	}
};
class Spring :public Pendulum
{
	double m;
	double k;
public:
	double getM(double m)
	{
		if (m == 0)
		{
			cout << " m = ";
			cin >> m;
		}
		cout << endl;
		return m;
	}
	double getK(double k)
	{
		if (k == 0)
		{
			cout << "k = ";
			cin >> k;
		}
		cout << endl;
		return k;
	}
	Spring(double m, double k)
	{
		this->m = getM(m);
		this->k = getK(k);
	}
	double frequency() override
	{
		return sqrt(k / m);
	}
	double period() override
	{
		return 2 * 3, 14 * sqrt(m / k);
	}
	void type() override
	{
		cout << " Spring pendulum" << endl;
	}
};

int main()
{

	Physical phy(23, 15, 10, 12);
	phy.type();
	cout << " Cyclic frequency = " << phy.frequency() << "  Oscillation period =  " << phy.period() << endl;
	cout << endl;

	Mathematics math(10, 0);
	math.type();
	cout << " Cyclic frequency = " << math.frequency() << "  Oscillation period =  " << math.period() << endl;
	cout << endl;

	Spring s(0, 0);
	s.type();
	cout << " Cyclic frequency = " << s.frequency() << "  Oscillation period =  " << s.period() << endl;
	cout << endl;
} // классы мне нравятся 

