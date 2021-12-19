#include <iostream>
#include <string>
using namespace std;

enum CarState

{

old = 0,
new_c = 1,

};
 
class Car
{
    CarState state;
    string brand;
    string model;
    int year;
    static int k;

public:

    Car()
    {
        brand = "Mersedes";
        model = "A-class";
        year = 2018;
        k +=1;
        CarState state = old;
    }

    Car(string brand, string model, int year, CarState state)
    
    {
        this -> brand = brand;
        this -> model = model;
        this -> year = year;
        this -> state = state;
        k +=1;
    }

int GetYear() 
    {

        return year;

    }
    void SetYear(int year) 
    {
        if(year > 1900 && year < 2022) 

        {

            this->year = year;

        } 

    }
    void Show() 
    {

        cout << brand << " " << model << " " << year << " "<< state <<" "<< k << endl;

    }
    int GetState() 
    {

        return state;

    }

    void SetState(CarState state) 
    {

        this->state = state;

    }

};

int Car::k = 0;

int main() {
    Car Mersedes = Car();
    Car lada ("Lada", "Vesta", 2015, new_c);
    Mersedes.Show();
    lada.Show();
    cout << "Year: "<< Mersedes.GetYear() << endl;
    Mersedes.SetYear(1991);
    cout << "Year: "<< Mersedes.GetYear() << endl;
    Mersedes.SetYear(2022);
    cout << "Year: "<< Mersedes.GetYear() << endl;
    cout << "State: " << lada.GetState() << endl;
    lada.SetState(old);
    cout << "State: " << lada.GetState() << endl;

}



