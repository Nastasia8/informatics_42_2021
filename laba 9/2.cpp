#include <iostream>

using namespace std;

enum PasCar // Создание перечисления для типа Car
{
    Lando = 1,
    Targa,
    PickUp
};
enum Abobus // Создание перечисления для типа Abobus
{
    City = 1,
    InterCity,
    Commuter
};
enum MotoBike // Создание перечисления для типа Bike
{
    Classic = 1,
    Sport,
    Dragster
};
enum Plane // Создание перечисления для типа Plane
{
    Civil = 1,
    Military,
    Business
};

class Transport // создание класса Transport
{
    protected: // модификатор доступа к производным классам. 
    
    int energy;
    float timeOwn;
    float tax;
    float price;
    int sum;
    int yearRealise;
    float yearDif;
    int n;

    public:
    
    virtual void unique() = 0; // виртуальные функции
    virtual void setInfo() = 0;//
    virtual float getNalog() = 0;//
    virtual void Show() = 0;//
};

class Car : public Transport // наследование информации из класса Transport
{
    private:

    //приватные поля
    float increasing_tax;
    float sum;
    PasCar CarType;

    // Табличные значения
    float getNalog() override 
    // переопределение функции
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

                                                                    // функция для выбора типа машины
    void unique() override 
   
    {
        CarType = (PasCar)n;
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

    public:
    // ввод значений и переопределение функции
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

    // ввод значений и переопределение функции
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

class Bus : public Transport // наследуем информацию из класса Transport
{
    private:

    
    float sum; // приватные поля
    Abobus BusType;//

    float getNalog() override 
     // переопределение функции
    {
        if (energy <= 200) 
        {
            tax = 50;
        } 
        else 
        {
            tax = 40.3;
        }

        sum = tax * energy * timeOwn;
        return sum;
    }

                                                                    // функция для выбора типа автобуса

    void unique() override 
    // переопределение функции
    {   
        BusType = (Abobus)n;
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

    public:

    void setInfo() override 
    // переопределение функции
    {   
        // Ввод переменных:
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - City\nEnter 2 - InterCity\nEnter 3 - Commuter" << endl; cin >> n;
        cout << endl;
    } 
    
    void Show() override
     // переопределение функции
    {   
        // Вывод переменных:
        cout << "Full information of Bus" << endl;
        cout << "Energy of Bus: " << energy << endl;
        cout << "Year of production of a Bus: " << yearRealise << endl;
        cout << "Time of Bus ownership: " << timeOwn*12 << endl;
        cout << "Price of Bus in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
    }
};

class Bike : public Transport // наследование информации из класса Transport
{
    private:

    float sum;
    MotoBike BikeType;

    float getNalog() override 
    // переопределение функции
    {
        if (energy <= 20) 
        {
            tax = 4.5;
        } 
        else if 
        (energy > 20 && energy <= 35) 
        {
            tax = 11;
        }
        else 
        {
            tax = 15;
        }

        sum = tax * energy * timeOwn;
        return sum;
    }

                                                                    // функция для выбора типа мотоцикла

    void unique() override 
    // переопределение функции
    {   
        BikeType = (MotoBike)n;
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
    public:

    void setInfo() override 
    // переопределение функции
    {   
        // Ввод переменных
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - Classic\nEnter 2 - Sport\nEnter 3 - Dragster" << endl; cin >> n;
        cout << endl;
    } 

    void Show() override  
    {   
        //
        cout << "Full information of Bike" << endl;
        cout << "Energy of Bike: " << energy << endl;
        cout << "Year of production of a Bike: " << yearRealise << endl;
        cout << "Time of Bike ownership: " << timeOwn*12 << endl;
        cout << "Price of Bike in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
    }
};

class Avia : public Transport // наследование информации из класса Transport
{
    private:
    // приватные поля
    float sum;
    Plane AviaType;

    float getNalog() override 
    // переопределение функции
    {
        tax = 100;
        sum = tax * energy * timeOwn;
        return sum;
    }

                                                                       // функция для выбора типа самолёта

    void unique() override 
    // переопределение функции
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

public:


    void setInfo() override 
    // переопределение функции
    {   
        // 
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        cout << "Enter the year of release: "; cin >> yearRealise;
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        cout << "Enter price in millions: "; cin >> price;
        cout << "Enter 1 - Civil\nEnter 2 - Military\nEnter 3 - Business" << endl; cin >> n;
        cout << endl;
    } 
    //Вывод переменных
    void Show() override // переопределяем функцию
    {   
        //
        cout << "Full information of Avia" << endl;
        cout << "Energy of Avia: " << energy << endl;
        cout << "Year of production of a Avia: " << yearRealise << endl;
        cout << "Time of Avia ownership: " << timeOwn*12 << endl;
        cout << "Price of Avia in millions: " << price << endl;
        unique();
        cout << "Transport tax: " << getNalog() << endl;
    }
};

int main()
{
    // Создание объектов класса и применение классов:
    Car Auidi;//
    Auidi.setInfo();//
    Auidi.Show();//
    
    Bus bus;//
    bus.setInfo();//
    bus.Show();//

    Bike bike;//
    bike.setInfo();//
    bike.Show();//

    Avia avia;//
    avia.setInfo();//
    avia.Show();//
} 