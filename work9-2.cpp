#include <iostream>
#include <cmath>
#include <string >

using namespace std;
//сама делала

class Transport
{
protected:
    virtual void Taxx() = 0;
    virtual void Show() = 0;

public:
    float tax; //налог 
    float power; //мощность
    int year;
    int term; //используемое время
    float price;
};

class Passengercar :public Transport
{
    string model;

public:

    int getYear(int year)
    {
        if (year == 0)
        {
            cout << " Year Passengercar = ";
            cin >> year;
        }
        return year;
    }
    Passengercar(float power, int year, int term, string model, float price)
    {
        this->power = power;
        this->year = getYear(year);
        this->term = term;
        this->model = model;
        this->price = price;
    }
    void Taxx() override
    {
        int value = year - 2022;

        if (power <= 100)
        {
            tax = power * 2.5 * term;
        }
        else if (power >= 100 && power <= 150)
        {
            tax = power * 3.5 * term;
        }
        else if (power >= 150 && power <= 200)
        {
            tax = power * 5 * term;
        }
        else if (power >= 200 && power <= 250)
        {
            tax = power * 7.5 * term;
        }
        else if (power >= 250)
        {
            tax = power * 15 * term;
        }

        if (price > 3)
        {
            if ((price >= 3 && price <= 5) && (value > 2 && value <= 3)) //посмотрела только как записывать год меньше/больше
            {
                tax *= 1.1; //то есть умножаем наш налог на 1.1
            }
            else if ((price >= 3 && price <= 5) && (value > 1 && value <= 2))
            {
                tax *= 1.3;
            }
            else if ((price >= 3 && price <= 5) && value <= 1)
            {
                tax *= 1.5;
            }
            else if ((price >= 5 && price <= 10) && value <= 5)
            {
                tax *= 2;
            }
            else if ((price >= 10 && price <= 15) && value <= 10)
            {
                tax *= 3;
            }
            else if (price >= 15 && value <= 20)
            {
                tax *= 3;
            }
        }
    }
    void Show() override
    {
        cout << endl;
        cout << "Passenger Car: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Model = " << model << "  Tax = " << tax << "  Price = " << price << endl;
    }
};

class Bus :public Transport
{
    int size; //размер в см
public:
    Bus(float power, int year, int term, int size)
    {
        this->power = power;
        this->year = year;
        this->term = term;
        this->size = size;
    }
    void Taxx() override
    {
        if (power <= 200)
        {
            tax = power * 5 * term;
        }
        else if (power >= 200)
        {
            tax = power * 10 * term;
        }
    }
    void Show() override
    {
        cout << endl;
        cout << "Bus: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Size = " << size << "  Tax = " << tax << endl;
    }
};

class Bike :public Transport
{
    string colour;
public:
    Bike(float power, int year, int term, string colour)
    {
        this->power = power;
        this->year = year;
        this->term = term;
        this->colour = colour;
    }
    void Taxx() override
    {
        if (power <= 20)
        {
            tax = power * 1 * term;
        }
        else if (power >= 20 && power <= 35)
        {
            tax = power * 2 * term;
        }
        else if (power >= 35)
        {
            tax = power * 5 * term;
        }
    }
    void Show() override
    {
        cout << endl;
        cout << "Bike: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Colour = " << colour << "  Tax = " << tax << endl;
    }
};

class Airplane :public Transport
{
    int capacity; //вместимость

public:
    Airplane(float power, int year, int term, int capacity)
    {
        this->power = power;
        this->year = year;
        this->term = term;
        this->capacity = capacity;
    }
    void Taxx() override
    {
        tax = power * 25 * term;
    }
    void Show() override
    {
        cout << endl;
        cout << "Airplane: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Capacity = " << capacity << "  Tax = " << tax << endl;
    }
};

int main()
{
    Passengercar p(350, 0, 1, "Toyota Land Cruiser ", 7000000);
    p.Taxx();
    p.Show();

    Bus b(200, 2016, 2, 1000);
    b.Taxx();
    b.Show();

    Bike i(50, 2019, 2, "green");
    i.Taxx();
    i.Show();

    Airplane a(1500, 2015, 5, 567);
    a.Taxx();
    a.Show();

}


