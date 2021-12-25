#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
class Pendulum
{
public:
    virtual double getCycFreq() =0; //cycling frequency is w = 2*pi/T
    virtual double getSwingPeriod() =0;
    
	/*Swing Period is T = 2*pi * sqrt(m/k) - spring,
    sqrt(l/g) - mathematical, sqrt(J/mgs) - physical
    
    m - mass, k - jestkost prujiny, l - length,
    g=10, J - moment inercii, s - rasstoyanie */

    virtual void showType()=0;
	int pi=3.14;
};

class Phys_Pendulum : public Pendulum
{
	
private:
    double inerc;
    double mass;
	double rast;

public:
    Phys_Pendulum(double j, double m, double s) : inerc(j), mass(m), rast(s)
    {
    }
    double getSwingPeriod() override
    {
        return 2*pi*sqrt(inerc/(mass*10*rast));
    }
    
    double getCycFreq() override
    {
        return (2*pi)/(2*pi*sqrt(inerc/(mass*10*rast)));
    }
    void showType()
    {
        cout << "Physical Pendulum" << endl;
    }
    
    
};


class Math_Pendulum : public Pendulum
{
	
private:
    double length;
    
public:
    Math_Pendulum(double l) : length(l)
    {
    }
    double getCycFreq() override
    {
        return 2*pi/(2*pi*sqrt(length/10));
    }
    double getSwingPeriod() override
    {
        return 2*pi*sqrt(length/10);
    }
    void showType()
    {
        cout << "Math Pendulum" << endl;
    }
};
 

class Spring_Pendulum : public Pendulum
{
	
private:
    double mass;
    double koefjest;
    
public:
    Spring_Pendulum(double m, double k) : mass(m), koefjest(k)
    {
    }
    double getCycFreq() override
    {
        return 2*pi/(2*pi*sqrt(mass/koefjest));
    }
    double getSwingPeriod() override
    {
        return 2*pi*sqrt(mass/koefjest);
    }
    void showType()
    {
        cout << "Spring Pendulum" << endl;
    }
    
};


int main()
{
    Phys_Pendulum phys(30, 50, 5);
    Math_Pendulum math(30);
    Spring_Pendulum spring(50,30);
     
    cout << "Physical Pendulum"<<endl;
    cout << "cycling frequency: " << phys.getCycFreq() << endl;
    cout << "swing period: " << phys.getSwingPeriod() << endl;
    
    cout << "\nMathematical Pedulum"<<endl;
    cout << "cycling frequency: " << math.getCycFreq() << endl;
    cout << "swing period: " << math.getSwingPeriod() << endl;
    
    cout << "\nSpring Pendulum"<<endl;
    cout << "cycling frequency: " << spring.getCycFreq() << endl;
    cout << "swing period: " << spring.getSwingPeriod() << endl;
 
    return 0;
}
