#include <iostream>
#include <cmath>
using namespace std;

class Pendulum
{
public:
    float g = 9.8;
    virtual float cyclic_frequency() = 0;
    virtual float oscillation_period() = 0;
    virtual void pendulum_type() = 0;
};
class Phis_Pendulum:Pendulum
{
private:
    float m, l, I;
public:
    Phis_Pendulum(float m, float l, float I)
    {
        this->m = m;
        this->l = l;
        this->I = I;
    }
    float cyclic_frequency() override
    {
        return sqrt((m * g * l) / I);
    }
    float oscillation_period() override
    {
        return 2 * 3.14 * sqrt(I / (m * g * l));
    }
    void pendulum_type() override
    {
        cout << "Physical pendulum" << endl << endl;
    }
 };
class Math_Pendulum:Pendulum
{
private:
    float l;
public:
    Math_Pendulum(float l)
    {
        this->l = l;
    }
    float cyclic_frequency() override
    {
        return sqrt(g / l);
    }
    float oscillation_period() override
    {
        return (2 * 3.14 *(sqrt(g / l)));
    }
    void pendulum_type() override
    {
        cout << "Mathematical pendulum" << endl << endl;
    }
};
class Prj_Pendulum:Pendulum
{
private:
    float m, k;
public:
    Prj_Pendulum(float m, float k)
    {
        this->m = m;
        this->k = k;
    }
    float cyclic_frequency() override
    {
        return sqrt(k / m);
    }
    float oscillation_period() override
    {
        return 2 * 3.14 * sqrt(m / k);
    }
    void pendulum_type() override
    {
        cout << "Spring pendulum" << endl << endl;
    }
};

int main()
{
    Phis_Pendulum phis_P(1, 2, 4);
    cout << "Cyclic frequency: " << phis_P.cyclic_frequency() << endl;
    cout << "Oscillation period: " << phis_P.oscillation_period() << endl;
    cout << "This is a "; phis_P.pendulum_type();
    Math_Pendulum math_P(1);
    cout << "Cyclic frequency: " << math_P.cyclic_frequency() << endl;
    cout << "Oscillation period: " << math_P.oscillation_period() << endl;
    cout << "This is a " ; math_P.pendulum_type();
    Prj_Pendulum prj_P(1, 2);
    cout << "Cyclic frequency: " << prj_P.cyclic_frequency() << endl;
    cout << "Oscillation period: " << prj_P.oscillation_period() << endl;
    cout << "This is a "; prj_P.pendulum_type();
}
