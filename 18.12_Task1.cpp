#include <iostream>
#include <string>

using namespace std;

class Pendulum{
    public:
    double cyclicFreq = 0;
    double oscPeriod = 0;
    string type = "";    
};

class physical:public Pendulum{
    double massa;
    double g;
    double length;
    double I;
public:
    physical(double massa, double g, double length, double I){
        this->massa = massa;
        this->g = g;
        this->length = length;
        this->I = I;
    }
    double cyclicFreq override {
        return cyclicFreq = paw((massa*g*length)/I, 1/2);_
    }
    double oscPeriod override{
        return oscPeriod = 2*3.14*paw(I/(massa*g*length), 1/2);
    }
    double type(){
        cout<<"Physical pendulum"<<endl;
    }    
};

class math:public Pendulum{
    double massa;
    double g;
    double length;
    double I;
public:
    math(double g, double length){
        this->g = g;
        this->length = length;
    }
    double cyclicFreq override {
        return cyclicFreq = paw(g/length, 1/2);_
    }
    double oscPeriod override{
        return oscPeriod = 2*3.14*paw(length/g, 1/2);
    }
    double type(){
        cout<<"Math pendulum"<<endl;
    }    
};
class spring:public Pendulum{
    double massa;
    double k;
public:
    spring(double massa, double k){
        this->massa = massa;
        this->k = k;
    }
    double cyclicFreq override {
        return cyclicFreq = paw(k/massa, 1/2);_
    }
    double oscPeriod override{
        return oscPeriod = 2*3.14*paw(massa/k, 1/2);
    }
    double type(){
        cout<<"Spring pendulum"<<endl;
    }    
};

int main(){ 
    physical phys(3, 10, 12, 33);
    cout << "Cyclic frequency of phisical pendulum = " << phys.cyclicFreq() << endl;
    cout << "Period of physical pendulum = " << phys.oscPeriod() << endl;
    phys.type();
    cout << endl;
    math mathem(10, 100);
    cout << "Cyclic frequency of mathematical pendulum = " << mathem.cyclicFreq() << endl;
    cout << "Period of mathematical pendulum = " << mathem.oscPeriod() << endl;
    mathem.type();
    cout << endl;
    spring spring(100, 5);
    cout << "Cyclic frequency of spring pendulum = " << spring.cyclicFreq() << endl;
    cout << "Period of spring pendulum = " << spring.oscPeriod() << endl;
    spring.type();
    return 0;
}