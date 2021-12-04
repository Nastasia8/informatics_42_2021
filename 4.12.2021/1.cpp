#include <iostream>
#include <string>
using namespace std;

enum CarState
{
    old=0,
    new_c=1,
};

class Car {
private:
    CarState state;
    string brand;
    string model;
    int year;
    static int k;

public:

    Car()
    {
        brand="Ford";
        model="Mustang Mach-E";
        year = 2021;
        k+=1;
        CarState state=old;
    }
    Car(string brand,string model,int year,CarState state)
    {
        this -> brand = brand;
        this -> model = model;
        this -> year = year;
        this -> state = state;  
    k+=1;

    }
    int GetYear(){
        return year;
    }
    void SetYear(int year) {
        if(year > 1999 && year < 2021) {
            this -> year = year;
        }
    }
     void Show(){
        cout << brand << " " << model << " " << year << " "<< state <<" "<< k << endl;
    }
    int GetState(){
        return state;
    }
    void SetState(CarState state){
        this -> state = state;
    }
};    
int Car::k = 0;

int main(){
    Car Ford = Car();
    Car Mercedes ("Mercedes","AMG GT", 2020, new_c);
    Ford.Show();
    Mercedes.Show();
    cout << "Year: "<< Ford.GetYear() << endl;
    Ford.SetYear(2021);
    cout << "Year: "<< Ford.GetYear() << endl;
    Ford.SetYear(2020);
    cout << "Year: "<< Ford.GetYear() << endl;
    cout << "State: " << Mercedes.GetState() << endl;
    Mercedes.SetState(old);
    cout << "State: " << Mercedes.GetState() << endl;
}