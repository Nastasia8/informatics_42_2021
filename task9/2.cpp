#include <iostream>
using std:: cin;
using std:: cout;
using std:: endl;

// Данную работу мне помогал выполнять Бутусов Александр и Егоров Виталий

enum Passenger_car // Составляем перечисления Passenger_car
{
    Lando = 1,
    Targa,
    PickUp
};

enum Autobus // Составляем перечисления Аutobus
{
    City = 1,
    InterCity,
    Commuter
};

enum Motorbike // Составляем перечислени Motorbike
{
    Classic = 1,
    Sport,
    Dragster
};

enum Plane // Составляем перечисления Plane
{
    Civil = 1,
    Military,
    Business
};


class Transport // Класс Transport
{
protected: // Объявляем поля класса с типом доступа protected

    int energy;
    float timeOwn;
    float tax;
    float price;
    int sum;
    int yearRealise;
    float yearDif;
    int n;  

public: // Объявляем методы родительского класса

    virtual void unique() = 0;
    virtual void setInfo() = 0;
    virtual float getNalog() = 0;
    virtual void Show() = 0;
};

class PassengerCar : public Transport // Класс PassengerCar - дочерний класс Transport
{
private: // Объявляем поля класса с типом доступа private

    float increasing_tax;
    float sum;
    Passenger_car CarType;

    // Метод, возвращающий налог (для легкового автомобиля)
    float getNalog() override 
    {
        if (energy <= 100) 
        {
            tax = 10;
        }  else if (energy > 100 && energy <= 150) 
        {
            tax = 20;
        } else if (energy > 150 && energy <= 200) 
        {
            tax = 35;
        } else if (energy > 200 && energy <= 250) 
        {
            tax = 60;
        } else {
            tax = 120;
        }

        if (price > 3 && price <= 5 && yearDif > 2 && yearDif <= 3) 
        {
            increasing_tax = 1.1;
        } else if (price > 3 && price <= 5 && yearDif > 1 && yearDif <= 2) 
        {
            increasing_tax = 1.3;
        } else if (price > 3 && price <= 5 && yearDif <= 1) 
        {
            increasing_tax = 1.5;
        } else if (price > 5 && price <= 10 && yearDif <= 5) 
        {
            increasing_tax = 2;
        } else if (price > 10 && price <= 15 && yearDif <= 10) 
        {
            increasing_tax = 3;
        } else if (price > 15 && yearDif <= 20) 
        {
            increasing_tax = 3;
        } else {
            increasing_tax = 1;
        }

        sum = tax * energy * timeOwn * increasing_tax;
        return sum;
    }
    // Метод выбора типа машины
    void unique() override  
    {   
        CarType = (Passenger_car)n; 
        switch(CarType)
        {
            case Lando:
                cout << "Car Type is Lando" << endl;
                break;
            case Targa:
                cout << "Car Type is Targa" << endl;
                break;
            case PickUp:
                cout << "Car Type is PickUp" << endl;
                break;
        }
    }
public: // Переопределяем методы родительского класса
    // Метод ввода информации
    void setInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - Lando\nEnter 2 - Targa\nEnter 3 - PickUp" << endl; cin >> n;
        yearDif = 2021 - yearRealise; 
        cout << endl;
    } 
    // Метод вывода информации
    void Show() override
    {
        cout << "Full information of Passenger Car" << endl;
        cout << "Energy of Passenger Car: " << energy << endl;
        cout << "Year of production of a Passenger Car: " << yearRealise << endl;
        cout << "Time of Passenger Car ownership: " << timeOwn*12 << endl;
        cout << "Price of Passenger Car in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
        cout << "Increasing Tax: " << increasing_tax << endl;
    }
};

class Bus : public Transport // Класс Bus - дочерний класс Transport
{

private: // Объявляем поля класса с типом доступа private

    float sum;
    Autobus BusType;

    // Метод, возвращающий налог (для автобуса)
    float getNalog() override 
    {
        if (energy <= 200) {
            tax = 50;
        } else {
            tax = 40.3;
        }

        sum = tax * energy * timeOwn;
        return sum;
    }
    // Метод выбора типа автобуса
    void unique() override
    {   
        BusType = (Autobus)n;
        switch(BusType)
        {
            case City:
                cout << "Bus Type is City" << endl;
                break;
            case InterCity:
                cout << "Bus Type is InterCity" << endl;
                break;
            case Commuter:
                cout << "Bus Type is Commuter" << endl;
                break;
        }
    }
public: // Переопределяем методы родительского класса
    // Метод ввода информации
    void setInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - City\nEnter 2 - InterCity\nEnter 3 - Commuter" << endl; cin >> n;
        cout << endl;
    } 
    // Метод вывода информации 
    void Show() override
    {
        cout << "Full information of Bus" << endl;
        cout << "Energy of Bus: " << energy << endl;
        cout << "Year of production of a Bus: " << yearRealise << endl;
        cout << "Time of Bus ownership: " << timeOwn*12 << endl;
        cout << "Price of Bus in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
    }
};

class Bike : public Transport // Класс Bike - дочерний класс Transport
{

private: // Объявляем поля класса с типом доступа private
    float sum;
    Motorbike BikeType;

    // Метод, возвращающий налог (для мотоцикла)
    float getNalog() override 
    {
        if (energy <= 20) {
            tax = 4.5;
        } else if (energy > 20 && energy <= 35) {
            tax = 11;
        } else {
            tax = 15;
        }

        sum = tax * energy * timeOwn;
        return sum;
    }
    // Метод выбора типа мотоцикла
    void unique() override
    {   
        BikeType = (Motorbike)n;
        switch(BikeType)
        {
            case Classic:
                cout << "Bike Type is Classic" << endl;
                break;
            case Sport:
                cout << "Bike Type is Sport" << endl;
                break;
            case Dragster:
                cout << "Bike Type is Dragster" << endl;
                break;
        }
    }
public: // Переопределяем методы родительского класса
    // Метод ввода информации
    void setInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - Classic\nEnter 2 - Sport\nEnter 3 - Dragster" << endl; cin >> n;
        cout << endl;
    } 
    // Метод вывода информации
    void Show() override
    {
        cout << "Full information of Bike" << endl;
        cout << "Energy of Bike: " << energy << endl;
        cout << "Year of production of a Bike: " << yearRealise << endl;
        cout << "Time of Bike ownership: " << timeOwn*12 << endl;
        cout << "Price of Bike in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
    }
};

class Avia : public Transport // Класс Avia - дочерний класс Transport
{
private: // Объявляем поля класса с типом доступа private
    float sum;
    Plane AviaType;

    // Метод, возвращающий налог (для самолёта)
    float getNalog() override 
    {
        tax = 100;
        sum = tax * energy * timeOwn;
        return sum;
    }
    // Метод выбора типа самолёта
    void unique() override
    {   
        AviaType = (Plane)n;
        switch(AviaType)
        {
            case Civil:
                cout << "Avia Type is Civil" << endl;
                break;
            case Military:
                cout << "Avia Type is Military" << endl;
                break;
            case Business:
                cout << "Avia Type is Business" << endl;
                break;
        }
    }
public: // Переопределяем методы родительского класса
    // Метод ввода информации
    void setInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - Civil\nEnter 2 - Military\nEnter 3 - Business" << endl; cin >> n;
        cout << endl;
    } 
    // Метод вывода информации
    void Show() override
    {
        cout << "Full information of Avia" << endl;
        cout << "Energy of Avia: " << energy << endl;
        cout << "Year of production of a Avia: " << yearRealise << endl;
        cout << "Time of Avia ownership: " << timeOwn*12 << endl;
        cout << "Price of Avia in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
    }
};

int main(){
    
    // Создаём экхемпляры классов и применяем к ним методы
    PassengerCar Auidi;
    Auidi.setInfo();
    Auidi.Show();

    Bus bus;
    bus.setInfo();
    bus.Show();

    Bike bike;
    bike.setInfo();
    bike.Show();

    Avia avia;
    avia.setInfo();
    avia.Show();
}  