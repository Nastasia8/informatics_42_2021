#include <iostream>
#include <cmath>
using namespace std;

class Mayatnik  //объявление класса маятника и введение трех функциональностей
{
public:
    virtual double cyclical_freq()=0; 
    virtual double period_Mayatnik()=0;
    virtual void ShowMayatnik()=0;
};
class physical_Mayatnik : public Mayatnik
{
private:
    double m;
    double g;
    double l;
    double I;
public: // расчет физичекого маятника и его функциональность 
    physical_Mayatnik(double m, double g, double l, double I)
    {
        this->m = m;
        this->g = g;
        this->l = l;
        this->I = I;
    }
    double cyclical_freq() 
    {
        return sqrt(m*g*l/I); 
    }
    double period_Mayatnik() 
    {
        return 2 * 3.14 * sqrt(I/m*g*l);
    }
    void ShowMayatnik() 
    {
        cout <<"Физический маятник" <<endl;
    }
};
class Math_Mayatnik : public Mayatnik //расчет математического маятника и его функциональность 
{
private:
    double g;
    double l;
public:
    Math_Mayatnik(double g, double l)
    {
        this-> g=g;
        this-> l=l;
    }
    double cyclical_freq() 
    {
        return sqrt(g/l);
    }
    double period_Mayatnik() 
    {
        return 2*3.14 * sqrt(l/g);
    }
    void ShowMayatnik() 
    {
        cout <<"Математический маятник" <<endl;
    }
};
class Spring_Mayatnik : public Mayatnik  //расчет пружинного маятника и его функциональность 
{
private:
    double m;
    double k;
public:
    Spring_Mayatnik(double m, double k)
    {
        this-> m=m;
        this-> k=k;
    }
    double cyclical_freq() 
    {
        return sqrt(k/m);
    }
    double period_Mayatnik() 
    {
        return 2 * 3.14 * sqrt(m/k);
    }
    void ShowMayatnik() 
    {
        cout <<"Пружинный маятник" <<endl;
    }
};
int main() //вывод
{
    physical_Mayatnik phys(2, 7, 13, 77);
    cout <<"Циклическая частота физического маятника = "<<phys.cyclical_freq()<<endl;
    cout <<"Период физического маятника = "<<phys.period_Mayatnik()<<endl;
    phys.ShowMayatnik();
    cout<<endl;
    Math_Mayatnik Mathem(55, 99);
    cout <<"Циклическая частота математического маятника = "<<Mathem.cyclical_freq()<<endl;
    cout <<"Период математического маятника = "<<Mathem.period_Mayatnik()<<endl;
    Mathem.ShowMayatnik();
    cout<<endl;
    Spring_Mayatnik Spring(77, 7);
    cout <<"Циклическая частота пружинного маятника = "<<Spring.cyclical_freq()<<endl;
    cout <<"Период пружинного маятника = " <<Spring.period_Mayatnik()<<endl;
    Spring.ShowMayatnik();
}