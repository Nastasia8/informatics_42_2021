#include <iostream>
#include <cmath>

using namespace std;

// определяем абстрактный класс
class Pendulum
{
public:
    // определяем виртуальные функции
    virtual double cyclic_frequency() = 0;
    virtual double period_pendulum() = 0;
    virtual void showPendulum() = 0;
};

class physical_pendulum : public Pendulum // производный класс для физического маятника
{
private:
    // определяем приватные поля
    double m;
    double g;
    double l;
    double I;
public:
    // конструктор физического маятника
    physical_pendulum(double m, double g, double l, double I)
    {
        this->m = m;
        this->g = g;
        this->l = l;
        this->I = I;
    }
    // метод нахождение циклической частоты физического маятника
    double cyclic_frequency() override // переопределение виртуальной функции
    {
        return sqrt(m*g*l/I);
    }
    // метод нахождения периода физического маятника
    double period_pendulum() override // переопределение виртуальной функции
    {
        return 2 * 3.14 * sqrt(I/m*g*l);
    }
    // метод вывода типа маятника
    void showPendulum() override // переопределение виртуальной функции
    {
        cout << "Pendulum is physical" << endl;
    }
};

class math_pendulum : public Pendulum // производный класс для математического маятника
{
private:
    // определяем приватные поля
    double g;
    double l;
public:
    // конструктор математического маятника
    math_pendulum(double g, double l)
    {
        this->g = g;
        this->l = l;
    }
    // метод нахождение циклической частоты математического маятника
    double cyclic_frequency() override // переопределение виртуальной функции
    {
        return sqrt(g/l);
    }
    // метод нахождения периода математического маятника
    double period_pendulum() override // переопределение виртуальной функции
    {
        return 2 * 3.14 * sqrt(l/g);
    }
    // метод вывода типа маятника
    void showPendulum() override // переопределение виртуальной функции
    {
        cout << "Pendulum is math" << endl;
    }
};

class spring_pendulum : public Pendulum // производный класс для пружинного маятника
{
private:
    // определяем приватные поля
    double m;
    double k;
public:
    // конструктор пружинного маятника
    spring_pendulum(double m, double k)
    {
        this->m = m;
        this->k = k;
    }
    // метод нахождение циклической частоты пружинного маятника
    double cyclic_frequency() override // переопределение виртуальной функции
    {
        return sqrt(k/m);
    }
    // метод нахождения периода пружинного маятника
    double period_pendulum() override // переопределение виртуальной функции
    {
        return 2 * 3.14 * sqrt(m/k);
    }
    // метод вывода типа маятника
    void showPendulum() override // переопределение виртуальной функции
    {
        cout << "Pendulum is spring" << endl;
    }
};

int main()
{   
    // Объявляем объекты класса, инициализируем их с помощью конструктора и выводимна экран циклическую частоту, период, тип маятника
    physical_pendulum phys(5, 10, 15, 20);
    cout << "Cyclic frequency of phisical pendulum = " << phys.cyclic_frequency() << endl;
    cout << "Period of physical pendulum = " << phys.period_pendulum() << endl;
    phys.showPendulum();
    cout << endl;
    math_pendulum mathem(10, 100);
    cout << "Cyclic frequency of mathematical pendulum = " << mathem.cyclic_frequency() << endl;
    cout << "Period of mathematical pendulum = " << mathem.period_pendulum() << endl;
    mathem.showPendulum();
    cout << endl;
    spring_pendulum spring(100, 5);
    cout << "Cyclic frequency of spring pendulum = " << spring.cyclic_frequency() << endl;
    cout << "Period of spring pendulum = " << spring.period_pendulum() << endl;
    spring.showPendulum();
}
// Разбирал задание с Александром Бутусовым, вроде понял)