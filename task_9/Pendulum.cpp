#include <iostream>
#include <cmath>

const float Pi = 3.14;
const float G = 9.8;

class Pendulum
{
protected:
    std::string type;
public:
    Pendulum(std::string input):type(input){};

    virtual float getCyclicFrequency() = 0;
    virtual float getPeriod() = 0;
    std::string GetName() {return type;}
};

class MathPendulum : public Pendulum
{
private:
    float length;
public:
    MathPendulum(float input): length(input) , Pendulum("mathematical"){};
    float getCyclicFrequency(){
        return sqrt(G/length);
    }
    float getPeriod(){
        return 2*Pi*sqrt(length/G);
    }
};

class PhysPendulum : public Pendulum
{
private:
    float length;
    float length_mass;
public:
    PhysPendulum(float in_l, float in_l_m): length(in_l) , length_mass(in_l_m) , Pendulum("physical"){};
    float getCyclicFrequency(){
        return sqrt((3*G*length_mass)/pow(length, 2));
    }
    float getPeriod(){
        return 2*Pi*sqrt(pow(length, 2)/(3*G*length_mass));
    }
};

class SpringPendulum : public Pendulum
{
private:
    float stiff_coeff;
    float mass;
public:
    SpringPendulum(float in_sc, float in_m): stiff_coeff(in_sc) , mass(in_m) , Pendulum("spring"){};
    float getCyclicFrequency(){
        return sqrt(stiff_coeff/mass);
    }
    float getPeriod(){
        return 2*Pi*sqrt(mass/stiff_coeff);
    }
};

void checkIn(float &check);

int main(int argc, char const *argv[]){
    
    std::cout << "Enter length(metric) of mathematical pendulum: ";
    float math_length;
    checkIn(math_length);
    MathPendulum first(math_length);
    std::cout << "Has been created " << first.GetName() << " pendulum with period = " << first.getPeriod() << " sec and cyclic frequensy = " << first.getCyclicFrequency() << " Hz" << std::endl;

    std::cout << "Enter length(metric) of physical pendulum: ";
    float phys_length;
    checkIn(phys_length);
    std::cout << "Enter length(metric) to center of mass of physical pendulum: ";
    float phys_mass_length;
    checkIn(phys_mass_length);
    PhysPendulum second(phys_length, phys_mass_length);
    std::cout << "Has been created " << second.GetName() << " pendulum with period = " << second.getPeriod() << " sec and cyclic frequensy = " << second.getCyclicFrequency() << " Hz" << std::endl;
    
    std::cout << "Enter stiffness coefficient of spring: ";
    float spring_sc;
    checkIn(spring_sc);
    std::cout << "Enter mass(kilograms) of object in spring pendulum: ";
    float spring_mass;
    checkIn(spring_mass);
    SpringPendulum third(spring_sc, spring_mass);
    std::cout << "Has been created " << third.GetName() << " pendulum with period = " << third.getPeriod() << " sec and cyclic frequensy = " << third.getCyclicFrequency() << " Hz" << std::endl;

    return 0;
}

void checkIn(float &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stof(buffer);
            if(check <= 0){
                std::cout << "Enter number more then zero!" << std::endl;
            }else{
                break;
            }  
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}