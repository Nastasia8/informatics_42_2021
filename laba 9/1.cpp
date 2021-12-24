#include <iostream>
#include <cmath>

using namespace std;

    class Pendulum
{
    public:

    virtual double cyclic_frequency() = 0; // частота маятника
    virtual double period_pendulum() = 0; // период маятника
    virtual void showPendulum() = 0; // отображение маятника
};

    class physical_pendulum : public Pendulum// создание класса наследника
{
    private:
    // объявление приватных переменных:
    double m;
    double g;
    double l;
    double I;

    public:

    physical_pendulum(double m, double g, double l, double I) // передача данных
    { // указатели к переменным:
        this->m = m;
        this->g = g;
        this->l = l;
        this->I = I;
    }
    double cyclic_frequency() override
    {
        return sqrt(m*g*l/I); // расчет частоты маятника
    }
    double period_pendulum() override
    {
        return 2 * 3.14 * sqrt(I/m*g*l); // расчет периода маятника
    }
    void showPendulum() override
    {
        cout << "Pendulum is physical" << endl; // вывод физического маятника
    }
};

    class math_pendulum : public Pendulum// создание класса наследника
{
    private:
 // объявление приватных переменных:
    double g;
    double l;
    
    public:

    math_pendulum(double g, double l)
    {
        this->g = g;
        this->l = l;
    }
    double cyclic_frequency() override 
    {
        return sqrt(g/l); // частота маятника
    }
    double period_pendulum() override
    {
        return 2 * 3.14 * sqrt(l/g); // период маятника
    }
    void showPendulum() override
    {
        cout << "Pendulum is math" << endl; // вывод данных математического маятника
    }
};

class spring_pendulum : public Pendulum // создание класса наследника пружинный маятник
{
    private:

    double m;
    double k;

    public:

    spring_pendulum(double m, double k)
    {
        this->m = m;
        this->k = k;
    }

    double cyclic_frequency() override
    {
        return sqrt(k/m); // расчет частоты маятника
    }
    double period_pendulum() override
    {
        return 2 * 3.14 * sqrt(m/k); // расчет периода маятника
    }
    void showPendulum() override
    {
        cout << "Pendulum is spring" << endl; // вывод
    }
};

int main()
{
    physical_pendulum phys(5, 10, 15, 20); // объявление ФИЗИЧЕСКОГО маятника и вывод всех его параметров
    cout << "Cyclic frequency of phisical pendulum = " << phys.cyclic_frequency() << endl;//
    cout << "Period of physical pendulum = " << phys.period_pendulum() << endl;//
    phys.showPendulum();//
    cout << endl;//
    
    math_pendulum mathem(10, 100);//
    cout << "Cyclic frequency of mathematical pendulum = " << mathem.cyclic_frequency() << endl; // объявление ФИЗИЧЕСКОГО маятника и вывод всех его параметров
    cout << "Period of mathematical pendulum = " << mathem.period_pendulum() << endl;//
    mathem.showPendulum();//
    cout << endl;//
    
    spring_pendulum spring(100, 5);//
    cout << "Cyclic frequency of spring pendulum = " << spring.cyclic_frequency() << endl; // объявление ПРУЖИННОГО маятника и вывод всех его параметров
    cout << "Period of spring pendulum = " << spring.period_pendulum() << endl;//
    spring.showPendulum();//
}