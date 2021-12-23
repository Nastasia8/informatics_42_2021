#include <iostream>
#include <cmath>

using namespace std;

class Pendulum // создаём класс маятник
{
public:
    virtual double cyclic_frequency() = 0;
    virtual double period_pendulum() = 0;
    virtual void showPendulum() = 0;
};

class physical_pendulum : public Pendulum // Создаём класс physical_pendulum делаем его дочерним и говорим ему наследовать информацию от класса Pendulum
{
private:
    double m; // масса
    double g; // ускорение свободного падения
    double l; // длина нити
    double I; // момент инерции
public:
    physical_pendulum(double m, double g, double l, double I)
    {
        this->m = m;
        this->g = g;
        this->l = l;
        this->I = I;
    }

    // используем override в классе-потомке, чтобы указать что функция должна переопределять виртуальную функцию

    double cyclic_frequency() override    
    {
        return sqrt(m*g*l/I); // формула циклической частоты для физического маятника
    }
    double period_pendulum() override
    {
        return 2 * 3.14 * sqrt(I/m*g*l); // формула периода колебаний для физического маятника
    }
    void showPendulum() override
    {
        cout << "physical pendulum" << endl;
    }
};

class math_pendulum : public Pendulum // Создаём класс  math_pendulum делаем его дочерним и говорим ему наследовать информацию от класса Pendulum
{
private:
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
        return sqrt(g/l); // формула циклической частоты для математического маятника
    }
    double period_pendulum() override
    {
        return 2 * 3.14 * sqrt(l/g); // формула периода колебаний для математического маятника
    }
    void showPendulum() override
    {
        cout << "math pendulum" << endl;
    }
};

class spring_pendulum : public Pendulum // Создаём класс spring_pendulum делаем его дочерним и говорим ему наследовать информацию от класса Pendulum
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
        return sqrt(k/m); // формула циклической частоты для пружинного маятника
    }
    double period_pendulum() override
    {
        return 2 * 3.14 * sqrt(m/k); // формула периода калебаний для пружинного маятника
    }
    void showPendulum() override
    {
        cout << "spring pendulum" << endl;
    }
};

int main()
{
    physical_pendulum phys(5, 10, 15, 20); // задаем значения для переменных, которые использовали в формулах для физического маятника
    cout << "Cyclic frequency of phisical pendulum = " << phys.cyclic_frequency() << endl;
    cout << "Period of physical pendulum = " << phys.period_pendulum() << endl;
    phys.showPendulum(); 
    cout << endl;
    math_pendulum mathem(10, 100); // задаем значения для переменных, которые использовали в формулах для матем. маятника
    cout << "Cyclic frequency of mathematical pendulum = " << mathem.cyclic_frequency() << endl;
    cout << "Period of mathematical pendulum = " << mathem.period_pendulum() << endl;
    mathem.showPendulum();
    cout << endl;
    spring_pendulum spring(100, 5); // задаем значения для переменных, которые использовали в формулах для пружин. маятника
    cout << "Cyclic frequency of spring pendulum = " << spring.cyclic_frequency() << endl;
    cout << "Period of spring pendulum = " << spring.period_pendulum() << endl;
    spring.showPendulum();
}