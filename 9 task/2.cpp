#include <iostream>

using namespace std;

enum PasCar
{
    Lando = 1,
    Targa,
    PickUp
};
enum PasBus
{
    City = 1,
    InterCity,
    Commuter
};
enum PasBike
{
    Classic = 1,
    Sport,
    Dragster
};
enum PasAvia
{
    Civil = 1,
    Military,
    Business
};


class Nalog
{
protected:
    int energy;
    float timeOwn;
    float tax;
    float price;
    int sum;
    int yearRealise;
    float yearDif;
    int n;  
public:
    virtual void unique() = 0;
    virtual void getInfo() = 0;
    virtual float getNalog() = 0;
    virtual void Show() = 0;
};

class PassengerCar : public Nalog
{
private:
    float increasing_tax;
    float sum;
    PasCar CarType;

    int checkEnergy(int energy)
    {   
        while (energy > 1250 || energy < 20) 
        {
            cout << "Enter correct energy: ";
            cin >> energy;
        }
        return energy;
    }
    int checkYearRealise(int yearRealise)
    {   
        while (yearRealise > 2021 || yearRealise < 1940) 
        {
            cout << "Enter correct year of realise: ";
            cin >> yearRealise;
        }
        return yearRealise;
    }
    float checkTimeOwn(float timeOwn)
    {
        while (timeOwn > 12 || timeOwn < 1)
        {
            cout << "Enter correct time in month: ";
            cin >> timeOwn;
        }
        timeOwn /= 12;
        return timeOwn;
    }
    float checkPrice(float price)
    {
        while (price > 340 || price < 0.1)
        {
            cout << "Enter correct price in millions: ";
            cin >> price;
        }
        return price;
    }
    float getNalog() override 
    {
        if (energy <= 100) {
            tax = 10;
        }  else if (energy > 100 && energy <= 150) {
            tax = 20;
        } else if (energy > 150 && energy <= 200) {
            tax = 35;
        } else if (energy > 200 && energy <= 250) {
            tax = 60;
        } else {
            tax = 120;
        }

        if (price > 3 && price <= 5 && yearDif > 2 && yearDif <= 3) {
            increasing_tax = 1.1;
        } else if (price > 3 && price <= 5 && yearDif > 1 && yearDif <= 2) {
            increasing_tax = 1.3;
        } else if (price > 3 && price <= 5 && yearDif <= 1) {
            increasing_tax = 1.5;
        } else if (price > 5 && price <= 10 && yearDif <= 5) {
            increasing_tax = 2;
        } else if (price > 10 && price <= 15 && yearDif <= 10) {
            increasing_tax = 3;
        } else if (price > 15 && yearDif <= 20) {
            increasing_tax = 3;
        } else {
            increasing_tax = 1;
        }

        sum = tax * energy * timeOwn * increasing_tax;
        return sum;
    }
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
    void getInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        energy = checkEnergy(energy);
        cout << "Enter the year of release: "; cin >> yearRealise;
        yearRealise = checkYearRealise(yearRealise);
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        timeOwn = checkTimeOwn(timeOwn);
        cout << "Enter price in millions: "; cin >> price;
        price = checkPrice(price);
        cout << "Enter 1 - Lando\nEnter 2 - Targa\nEnter 3 - PickUp" << endl; cin >> n;
        yearDif = 2021 - yearRealise; 
        cout << endl;
    } 
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

class Bus : public Nalog
{
private:
    float sum;
    PasBus BusType;

    int checkEnergy(int energy)
    {   
        while (energy > 400 || energy < 100) 
        {
            cout << "Enter correct energy: ";
            cin >> energy;
        }
        return energy;
    }
    int checkYearRealise(int yearRealise)
    {   
        while (yearRealise > 2021 || yearRealise < 1940) 
        {
            cout << "Enter correct year of realise: ";
            cin >> yearRealise;
        }
        return yearRealise;
    }
    float checkTimeOwn(float timeOwn)
    {
        while (timeOwn > 12 || timeOwn < 1)
        {
            cout << "Enter correct time in month: ";
            cin >> timeOwn;
        }
        timeOwn /= 12;
        return timeOwn;
    }
    float checkPrice(float price)
    {
        while (price > 1000 || price < 0.1)
        {
            cout << "Enter correct price in millions: ";
            cin >> price;
        }
        return price;
    }
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
    void unique() override
    {   
        BusType = (PasBus)n;
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
    void getInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        energy = checkEnergy(energy);
        cout << "Enter the year of release: "; cin >> yearRealise;
        yearRealise = checkYearRealise(yearRealise);
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        timeOwn = checkTimeOwn(timeOwn);
        cout << "Enter price in millions: "; cin >> price;
        price = checkPrice(price);
        cout << "Enter 1 - City\nEnter 2 - InterCity\nEnter 3 - Commuter" << endl; cin >> n;
        cout << endl;
    } 
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

class Bike : public Nalog
{
private:
    float sum;
    PasBike BikeType;

    int checkEnergy(int energy)
    {   
        while (energy > 500 || energy < 5) 
        {
            cout << "Enter correct energy: ";
            cin >> energy;
        }
        return energy;
    }
    int checkYearRealise(int yearRealise)
    {   
        while (yearRealise > 2021 || yearRealise < 1930) 
        {
            cout << "Enter correct year of realise: ";
            cin >> yearRealise;
        }
        return yearRealise;
    }
    float checkTimeOwn(float timeOwn)
    {
        while (timeOwn > 12 || timeOwn < 1)
        {
            cout << "Enter correct time in month: ";
            cin >> timeOwn;
        }
        timeOwn /= 12;
        return timeOwn;
    }
    float checkPrice(float price)
    {
        while (price > 900 || price < 0.05)
        {
            cout << "Enter correct price in millions: ";
            cin >> price;
        }
        return price;
    }
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
    void unique() override
    {   
        BikeType = (PasBike)n;
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
    void getInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        energy = checkEnergy(energy);
        cout << "Enter the year of release: "; cin >> yearRealise;
        yearRealise = checkYearRealise(yearRealise);
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        timeOwn = checkTimeOwn(timeOwn);
        cout << "Enter price in millions: "; cin >> price;
        price = checkPrice(price);
        cout << "Enter 1 - Classic\nEnter 2 - Sport\nEnter 3 - Dragster" << endl; cin >> n;
        cout << endl;
    } 
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

class Avia : public Nalog
{
private:
    float sum;
    PasAvia AviaType;

    int checkEnergy(int energy)
    {   
        while (energy > 120000 || energy < 1000) 
        {
            cout << "Enter correct energy: ";
            cin >> energy;
        }
        return energy;
    }
    int checkYearRealise(int yearRealise)
    {   
        while (yearRealise > 2021 || yearRealise < 1884)    
        {
            cout << "Enter correct year of realise: ";
            cin >> yearRealise;
        }
        return yearRealise;
    }
    float checkTimeOwn(float timeOwn)
    {
        while (timeOwn > 12 || timeOwn < 1)
        {
            cout << "Enter correct time in month: ";
            cin >> timeOwn;
        }
        timeOwn /= 12;
        return timeOwn;
    }
    float checkPrice(float price)
    {
        while (price > 36000 || price < 1)
        {
            cout << "Enter correct price in millions: ";
            cin >> price;
        }
        return price;
    }
    float getNalog() override 
    {
        tax = 100;
        sum = tax * energy * timeOwn;
        return sum;
    }

    void unique() override
    {   
        AviaType = (PasAvia)n;
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
    void getInfo() override
    {   
        cout << endl;
        cout << "Enter energy: "; cin >> energy; 
        energy = checkEnergy(energy);
        cout << "Enter the year of release: "; cin >> yearRealise;
        yearRealise = checkYearRealise(yearRealise);
        cout << "Enter time of ownership in months: "; cin >> timeOwn; 
        timeOwn = checkTimeOwn(timeOwn);
        cout << "Enter price in millions: "; cin >> price;
        price = checkPrice(price);
        cout << "Enter 1 - Civil\nEnter 2 - Military\nEnter 3 - Business" << endl; cin >> n;
        cout << endl;
    } 
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

int main()
{
    PassengerCar Auidi;
    Auidi.getInfo();
    Auidi.Show();
    
    Bus bus;
    bus.getInfo();
    bus.Show();

    Bike bike;
    bike.getInfo();
    bike.Show();

    Avia avia;
    avia.getInfo();
    avia.Show();
}