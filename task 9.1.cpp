#include <iostream>

using namespace std;

class Pendulum // сделано самостоятельно
{
public:
    virtual double getT() = 0; // сделано самостоятельно
    virtual double getw() = 0; // сделано самостоятельно
    virtual double getF() = 0; // сделано самостоятельно
    virtual void showPendulumType() = 0; // сделано самостоятельно
};

class Physical : public Pendulum // сделано самостоятельно
{
private: 
    double m; // сделано самостоятельно
    double l; // сделано самостоятельно
    double I; // сделано самостоятельно
public: 
    Physical(double m, double l, double I) : m(m), l(l), I(I) // сделано самостоятельно; а дальше так получилось, точка с запястью засчитывается как ошибка и ничего не поделаешь
    { 
    }
    double getT() override // сделано самостоятельно
    {
        return 2 * 3.14 * sqrt(I / (m * 10 * l)); // сделано самостоятельно
    }
    double getw() override // сделано самостоятельно
    {
        return sqrt(m * 10 * l / I); // сделано самостоятельно
    }
    double getF() override // сделано самостоятельно
    {
        return m * 10; // сделано самостоятельно
    }
    void showPendulumType() // сделано самостоятельно
    {
        cout << "Physical" << endl; // сделано самостоятельно
    }
};
class Mathematical : public Pendulum // сделано самостоятельно
{
private:
    double m; // сделано самостоятельно
    double l; // сделано самостоятельно
public:
    Mathematical(double m, double l) : m(m), l(l) // сделано самостоятельно
    {
    }
    double getT() override // сделано самостоятельно
    {
        return 2 * 3.14 * sqrt(l / 10); // сделано самостоятельно
    }
    double getw() override // сделано самостоятельно
    {
        return sqrt(10 / l); // сделано самостоятельно
    }
    double getF() override // сделано самостоятельно
    {
        return m * 10; // сделано самостоятельно
    }
    void showPendulumType() // сделано самостоятельно
    {
        cout << "Mathematical" << endl; // сделано самостоятельно
    }
};
class Spiral : public Pendulum // сделано самостоятельно
{
private:
    double m; // сделано самостоятельно
    double g; // сделано самостоятельно
    double x; // сделано самостоятельно
    double k; // сделано самостоятельно
public:
    Spiral(double m, double k, double x) : m(m), k(k), x(x) // сделано самостоятельно
    {
    }
    double getT() override // сделано самостоятельно
    {
        return 2 * 3.14 * sqrt(m / k); // сделано самостоятельно
    }
    double getw() override // сделано самостоятельно
    {
        return sqrt(k / m); // сделано самостоятельно
    }
    double getF() override // сделано самостоятельно
    {
        return k * x; // сделано самостоятельно
    }
    void showPendulumType() // сделано самостоятельно
    {
        cout << "Spiral" << endl; // сделано самостоятельно
    }
};

int main() // сделано самостоятельно
{
    Physical P(15, 3, 5); // сделано самостоятельно
    Mathematical M(15, 15); // сделано самостоятельно
    Spiral S(15, 15, 4); // сделано самостоятельно

    cout << "Physical P: " << P.getT() << endl; // сделано самостоятельно
    cout << "Mathemaitcal M: " << M.getT() << endl; // сделано самостоятельно
    cout << "Spiral S: " << S.getT() << endl; // сделано самостоятельно

    cout << "Physical P: " << P.getw() << endl; // сделано самостоятельно
    cout << "Mathemaitcal M: " << M.getw() << endl; // сделано самостоятельно
    cout << "Spiral S: " << S.getw() << endl; // сделано самостоятельно

    cout << "Physical P: " << P.getF() << endl; // сделано самостоятельно
    cout << "Mathemaitcal M: " << M.getF() << endl; // сделано самостоятельно
    cout << "Spiral S: " << S.getF() << endl; // сделано самостоятельно
    return 0;
}
