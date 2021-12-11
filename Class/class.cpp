#include <iostream>

using namespace std;

enum CarState {
    old = 0,
    new_c = 1,
};

class Car {
private:
    string brand;
    string model;
    int year;
    static int k;
    CarState state;
public:
    Car() {
        brand = "BMW";
        model = "2-series";
        year = 2017;
        k += 1;
        CarState state = old;
    }
    Car(string brand, string model, int year, CarState state) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->state = state;
        k += 1;
    }
    int GetYear() {
        return year;
    }
    void SetYear(int year) {
        if(year > 1900 && year < 2022) {
            this->year = year;
        } 
    }
    void Show() {
        cout << brand << " " << model << " " << year << " "<< state <<" "<< k << endl;
    }
    int GetState() {
        return state;
    }
    void SetState(CarState state) {
        this->state = state;
    }
};

int Car::k = 0;

int main() {
    Car bmw = Car();
    Car audi("Audi", "A3", 2020, new_c);
    bmw.Show();
    audi.Show();
    cout << "Year: "<< bmw.GetYear() << endl;
    bmw.SetYear(1991);
    cout << "Year: "<< bmw.GetYear() << endl;
    bmw.SetYear(2022);
    cout << "Year: "<< bmw.GetYear() << endl;
    cout << "State: " << audi.GetState() << endl;
    audi.SetState(old);
    cout << "State: " << audi.GetState() << endl;

}