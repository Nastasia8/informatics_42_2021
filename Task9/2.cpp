#include <iostream>
#include <string>

using namespace std;

class Transport{

    public:

    float power, tax, price;
    int year, usetime;

};

class Automobile : public Transport{

    public: 

    string model;

    void Tax() {

        int value = year - 2021;

        if (power <= 100){
            tax = power * 2.5 * usetime;
        }
        else if (power > 100 && power <= 150){
            tax = power * 3.5 * usetime;
        }
        else if (power > 150 && power <= 200){
            tax = power * 5 * usetime;
        }
        else if (power > 200 && power <= 250){
            tax = power * 5 * usetime;
        }
        else if (power > 250){
            tax = power * 5 * usetime;
        }

        if (price > 3){
            if (price > 3 && price <=5 && value > 2 && value <= 3){
                tax *= 1.1;
            }
            else if (price > 3 && price <=5 && value > 1 && value <= 2){
                tax *= 1.3;
            }
            else if (price > 3 && price <=5 && value <= 1){
                tax *= 1.5;
            }
            else if (price > 5 && price <= 10 && value <= 5){
                tax *= 2;
            }
            else if (price > 10 && price <= 15 && value <= 10){
                tax *= 3;
            }
            else if (price > 15 && value <= 20){
                tax *= 3;
            }
        }
    }

    Automobile(){
        power = 0;
        year = 0;
        usetime = 0; // В месяцах
        tax = 0;
        model = "No_Name_NULL";
        price = 0; // В миллионах рублей
    }
    Automobile(float power, int year, int usetime, string model, int price){
        this->power = power;
        this->year = year;
        this->usetime = usetime;
        tax = 0;
        this->model = model;
        this->price = price;
    }

    void Show(){
        cout << "Automobile information: " << endl << "Power: " << power << endl << "Year: " << year << endl << "Use time: " << usetime << endl << "Tax: " << tax << endl << "Model: " << model << endl << "Price: " << price << endl << endl;
    }

};

class Motorcycle : public Transport{

    public:

    int maxspeed; 

    void Tax(){
        if (power <= 20){
            tax = power * usetime;
        }
        else if (power > 20 && power <= 35){
            tax = power * 2 * usetime;
        }
        else if (power > 35){
            tax = power * 5 * usetime;
        }
    }

    Motorcycle(){
        power = 0;
        year = 0;
        usetime = 0;
        tax = 0;
        maxspeed = 0;
    }
    Motorcycle(float power, int year, int usetime, int maxspeed){
        this->power = power;
        this->year = year;
        this->usetime = usetime;
        tax = 0;
        this->maxspeed = maxspeed;
    }

    void Show(){
        cout << "Motorcycle information: " << endl << "Power: " << power << endl << "Year: " << year << endl << "Use time: " << usetime << endl << "Tax: " << tax << endl << "Maximal speed: " << maxspeed << endl << endl;
    }

};

class Bus : public Transport{

    public:

    int capacity;

    void Tax() {
        if (power <= 200){
            tax = power * 5 * usetime;
        }
        else if (power > 200){
            tax = power * 10 * usetime;
        }
    }

    Bus(){
        power = 0;
        year = 0;
        usetime = 0;
        tax = 0;
        capacity = 0;       
    }
    Bus(float power, int year, int usetime, int capacity){
        this->power = power;
        this->year = year;
        this->usetime = usetime;
        tax = 0;
        this->capacity = capacity;
    }

    void Show(){
        cout << "Bus information:" << endl << "Power: " << power << endl << "Year: " << year << endl << "Use time: " << usetime << endl << "Tax: " << tax << endl << "Capacity: " << capacity << endl << endl;
    }

};

class Airplane : public Transport{

    public:

    int height;

    void Tax() {
        tax = power * 25 * usetime;
    }

    Airplane(){
        power = 0;
        year = 0;
        usetime = 0;
        tax = 0;
        height = 0;       
    }
    Airplane(float power, int year, int usetime, int height){
        this->power = power;
        this->year = year;
        this->usetime = usetime;
        tax = 0;
        this->height = height;
    }

    void Show(){
        cout << "Airplane information:" << endl << "Power: " << power << endl << "Year: " << year << endl << "Use time: " << usetime << endl << "Tax: " << tax << endl << "Height: " << height << endl << endl;
    }

};

main(){

    Automobile bmw(300, 2015, 120, "M5", 10);
    bmw.Tax();
    bmw.Show();

    Motorcycle yamaha(20, 2008, 18, 200);
    yamaha.Tax();
    yamaha.Show();

    Bus mercedes(210, 2018, 24, 56);
    mercedes.Tax();
    mercedes.Show();

    Airplane flight(1000, 2021, 12, 12);
    flight.Tax();
    flight.Show();

    return 0;
}