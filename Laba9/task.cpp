#include <iostream>// объявление стандартной библиотеки
#include <cmath>// объявление математической библиотеки

using namespace std;

class Pendulum// создание класса маятник
{
public:
    virtual double cyclic_frequency() = 0;//частота маятника
    virtual double period_pendulum() = 0;// период маятника
    virtual void showPendulum() = 0;// отобраение маятника
};

class physical_pendulum : public Pendulum// создание класса наследника физический маятник
{
private:
    double m;//объявление приватных переменных
    double g;
    double l;
    double I;
public:
    physical_pendulum(double m, double g, double l, double I)//передача данных
    {
        this->m = m;
        this->g = g;
        this->l = l;
        this->I = I;
    }
    double cyclic_frequency() override//частота маятника
    {
        return sqrt(m*g*l/I);
    }
    double period_pendulum() override//период маятника
    {
        return 2 * 3.14 * sqrt(I/m*g*l);
    }
    void showPendulum() override//вывод физического маятника
    {
        cout << "Pendulum is physical" << endl;
    }
};

class math_pendulum : public Pendulum// создание класса наследника математический маятник
{
private:
    double g;//объявление приватных переменных
    double l;
public:
    math_pendulum(double g, double l)//передача данных
    {
        this->g = g;
        this->l = l;
    }
    double cyclic_frequency() override//частота маятника
    {
        return sqrt(g/l);
    }
    double period_pendulum() override//период маятника
    {
        return 2 * 3.14 * sqrt(l/g);
    }
    void showPendulum() override//вывод данных математического маятника
    {
        cout << "Pendulum is math" << endl;
    }
};

class spring_pendulum : public Pendulum// создание класса наследника пружинного маятник
{
private://объявление приватных переменных
    double m;
    double k;
public:
    spring_pendulum(double m, double k)//передача значений переменных
    {
        this->m = m;
        this->k = k;
    }
    double cyclic_frequency() override//частота маятника
    {
        return sqrt(k/m);
    }
    double period_pendulum() override//период маятника
    {
        return 2 * 3.14 * sqrt(m/k);
    }
    void showPendulum() override// отображение данных о пружинном маятнике
    {
        cout << "Pendulum is spring" << endl;
    }
};

int main()
{
    //объявление физического маятника, вывод его частоты и периода и вывод данных о нём
    physical_pendulum phys(5, 10, 15, 20);//
    cout << "Cyclic frequency of phisical pendulum = " << phys.cyclic_frequency() << endl;//
    cout << "Period of physical pendulum = " << phys.period_pendulum() << endl;//
    phys.showPendulum();//
    cout << endl;//
    //объявление математического маятника, вывод его частоты и периода и вывод данных о нём
    math_pendulum mathem(10, 100);//
    cout << "Cyclic frequency of mathematical pendulum = " << mathem.cyclic_frequency() << endl;//
    cout << "Period of mathematical pendulum = " << mathem.period_pendulum() << endl;//
    mathem.showPendulum();//
    cout << endl;//
    //объявление пружинного маятника, вывод его частоты и периода и вывод данных о нём
    spring_pendulum spring(100, 5);//
    cout << "Cyclic frequency of spring pendulum = " << spring.cyclic_frequency() << endl;//
    cout << "Period of spring pendulum = " << spring.period_pendulum() << endl;//
    spring.showPendulum();//
}