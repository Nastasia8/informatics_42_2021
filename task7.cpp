#include <iostream>
#include <string>

static int k = 0;

enum CarState {
    old = 0,
    new_c = 1,
};

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    CarState state;
public:
    Car(std::string brand, std::string model, int year, CarState state): brand(brand), model(model), year(year), state(state) { k++; };
    Car(): brand("Lada"), model("Priora"), year(2006), state(old) { k++; };
    ~Car() { k--; };
    int GetYear() {
        return year;
    };
    void SetYear(int _year) {
        if ( year > 1900 and year <= 2021 ) {
            year = _year;
        }
    };
    CarState GetState() {
        return state;
    };
    void SetState(CarState _state) {
        state = _state;
    };
};

int main(int args, char** argv) {

    Car MyFirstCar("Jaguar", "XJS", 1982, CarState::old);
    Car MySecondCar("Mini", "Cooper", 2011, CarState::old);
    std::cout << k;
    
    return 0;    
}