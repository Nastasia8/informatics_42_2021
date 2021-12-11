#include <iostream>
#include <string>

using namespace std;

enum CarState{
    old = 0,
    new_c = 0,
};


class Car{

    private:

        string brand, model;
        int year;
        static int k;
        CarState state;

    public:

        Car(){
            brand = "Audi";
            model = "Q8";
            year = 2018;
            k++;
            CarState state = old;
        }

        Car(string brand, string model, int year, CarState state){
            this->brand = brand;
            this->model = model;
            SetYear(year);
            this->state = state;
            k++;
        }

    int GetYear(){
        return year;
    }

    void SetYear(int year){
        if (year > 1950 && year < 2022){
            this-> year = year;
        }
        else{
            year = 0;
        }
    }

    void information(){
        cout << "Brand: " << brand << endl << "Model: " << model << endl << "Year: " << year << endl << "State of the car: " << state << endl;;
    }

    int GetState(){
        return state;
    }
    void SetState(CarState state){
        this->state = state;
    }
};

int Car::k = 0;

main(){
    Car nissan = Car();
    Car bmw("BMW", "X8", 2005, new_c);

    nissan.information();
    bmw.information();

    cout << "Year: " << nissan.GetYear() << endl;
    nissan.SetYear(2000);
    cout << "Year: " << nissan.GetYear() << endl;
    nissan.SetYear(2015);
    cout << "Year: " << nissan.GetYear() << endl;
    cout << "State: " << bmw.GetState() << endl;
    bmw.SetState(old);
    cout << "State: " << bmw.GetState() << endl;

    return 0;
}