#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using std:: cin;
using std:: cout;
using std:: endl;

class Pendulum
{
public:

    virtual double Calculation_Cyclic_Frequency() = 0;
    virtual double Calculation_Oscillation_period() = 0;
    virtual void Display_Type() = 0;

    const int g = 9.8;
};

class Physical_Pendulum: Pendulum
{
private:

    double m, l, I;

public:

    Physical_Pendulum(double m, double l, double I)
    {
        this->m = m;
        this->l = l;
        this->I = I;
    }
    double Calculation_Cyclic_Frequency() override
    {
        return sqrt((m * g * l) / I);
    }
    double Calculation_Oscillation_period() override
    {
        return 2 * 3.14 * sqrt(I / (m * g * l));
    }
    void Display_Type() override
    {
        cout << "Физический маятник" << endl << endl;
    }
 };

class Mathematical_Pendulum: Pendulum
{
private:

    double l;

public:

    Mathematical_Pendulum(double l)
    {
        this->l = l;
    }

    double Calculation_Cyclic_Frequency() override
    {
        return sqrt(g / l);
    }

    double Calculation_Oscillation_period() override
    {
        return (2 * 3.14 *(sqrt(g / l)));
    }

    void Display_Type() override
    {
        cout << "Математический маятник" << endl << endl;
    }
};
class Spring_Pendulum: Pendulum
{
private:

    double m, k;

public:

    Spring_Pendulum(double m, double k)
    {
        this->m = m;
        this->k = k;
    }

    double Calculation_Cyclic_Frequency() override
    {
        return sqrt(k / m);
    }

    double Calculation_Oscillation_period() override
    {
        return 2 * 3.14 * sqrt(m / k);
    }

    void Display_Type() override
    {
        cout << "Пружинный маятник" << endl << endl;
    }
};

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    Physical_Pendulum Physical_Pend(6, 66, 666);
    cout << "Циклическая частота: " << Physical_Pend.Calculation_Cyclic_Frequency() << endl;
    cout << "Период колебания маятника: " << Physical_Pend.Calculation_Oscillation_period() << endl;
    cout << "Тип маятника: "; Physical_Pend.Display_Type();
    Mathematical_Pendulum Mathematical_Pen(7);
    cout << "Циклическая частота: " << Mathematical_Pen.Calculation_Cyclic_Frequency() << endl;
    cout << "Период колебания маятника: " << Mathematical_Pen.Calculation_Oscillation_period() << endl;
    cout << "Тип маятника: " ; Mathematical_Pen.Display_Type();
    Spring_Pendulum Spring_Pend(7, 77);
    cout << "Циклическая частота: " << Spring_Pend.Calculation_Cyclic_Frequency() << endl;
    cout << "Период колебания маятника: " << Spring_Pend.Calculation_Oscillation_period() << endl;
    cout << "Тип маятника: "; Spring_Pend.Display_Type();
    return 0;
}