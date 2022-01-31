#include <iostream> // Стандартная библиотека
#include <cmath> //Библиотека для вычислений 
#include <string > //Библиотека для заголовочный файлов

using namespace std; // Обявление пространства имён std
//Закомментировала Катин код, потому что сама бы не успела. Извините(( 

class Transport // Создание общего класса Транспорт
{
protected:
    virtual void Taxx() = 0;  // Объявление переменной taxx, show, void - общий указатель 
    virtual void Show() = 0; // Приравнивание к нулю синтаксис, бозначающий чистую виртуальную функцию

public:
    float tax; //  Объявление переменой налог 
    float power; // Объявление переменной мощность
    int year;  // Объявление переменной год 
    int term; // Объявление переменой используемое время
    float price; // Объявление переменной прайс (стоимость)
};

class Passengercar :public Transport  // В классе Транспорт подкласс легковой автомобиль 
{
    string model; // Добавление дополнительного параметра "Модель"

public:

    int getYear(int year) 
    {
        if (year == 0) // Если год равен нулю, то год легкового автомобиля вводится с клавиатуры 
        {
            cout << " Year Passengercar = ";
            cin >> year;
        }
        return year;
    }
    Passengercar(float power, int year, int term, string model, float price) // Легковая машина с параметрами
    {
        this->power = power; // Отслеживание какой объект его вызвал 
        this->year = getYear(year);
        this->term = term;
        this->model = model;
        this->price = price;
    }
    void Taxx() override
    {
        int value = year - 2022;  // Из года вычитаем 2022

        if (power <= 100)  // Если сила меньше или равна 100, то налог будет равен по формуле в 51 строке
        {
            tax = power * 2.5 * term;
        }
        else if (power > 100 && power <= 150) // Иначе если сила больше ста и меньше или равна 150, то налог расчитывается по формуле из 55 строки
        {
            tax = power * 3.5 * term;
        }
        else if (power > 150 && power <= 200) // Иначе если сила больше 150 и меньше или равна 200, то налог расчитывается по формуле из 59 строки
        {
            tax = power * 5 * term;
        }
        else if (power > 200 && power <= 250) // Иначе если сила больше 200 и меньше или равна 250, то налог расчитывается по формуле из 63 строки
        {
            tax = power * 7.5 * term;
        }
        else if (power > 250) // Иначе если сила больше 250, то налог расчитывается по формуле из 67 строки
        {
            tax = power * 15 * term;
        }

        if (price > 3) // Если стоимость больше 3, то 
        {
            if ((price >= 3 && price <= 5) && (value > 2 && value <= 3)) //Если стоимость больше= 3 и меньше= 5 и год больше 2 и меньше=3,то 
            {
                tax *= 1.1; // То есть умножаем наш налог на 1.1
            }
            else if ((price >= 3 && price <= 5) && (value > 1 && value <= 2)) //Иначе если стоимость больше= 3 и меньше= 5 и год больше 1 и меньше=2,то 
            {
                tax *= 1.3; // То есть умножаем наш налог на 1.3
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
    void Show() override // Объявление переменной тип, void - общий указатель 
    {
        cout << endl;
        cout << "Passenger Car: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Model = " << model << "  Tax = " << tax << "  Price = " << price << endl; // Выводим все эти переменные
    }
};

class Bus :public Transport // В классе Транспорт подкласс автобус
{
    int size; // Размер в см
public:
    Bus(float power, int year, int term, int size) // Параметры автобуса
    {
        this->power = power; // Отслеживание какой объект его вызвал 
        this->year = year;
        this->term = term;
        this->size = size;
    }
    void Taxx() override
    {
        if (power <= 200) // Если сила меньше или равна 200, то налог считатется по формуле из 120 строки
        {
            tax = power * 5 * term;
        }
        else if (power > 200) /// Иначе если сила больше 200, то налог считатется по формуле из 124 строки
        {
            tax = power * 10 * term;
        }
    }
    void Show() override // Объявление переменной тип, void - общий указатель 
    {
        cout << endl;
        cout << "Bus: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Size = " << size << "  Tax = " << tax << endl; // Выводим все эти переменные
    }
};

class Bike :public Transport // В классе Транспорт подкласс мотоцикл 
{
    string colour; // Добавление дополнительного параметра "Цвет"
public:
    Bike(float power, int year, int term, string colour) // Параметры мотоцикла
    {
        this->power = power; // Отслеживание какой объект его вызвал
        this->year = year;
        this->term = term;
        this->colour = colour;
    }
    void Taxx() override
    {
        if (power <= 20) // Если сила меньше или равна 20, то налог считатется по формуле из 149 строки
        {
            tax = power * 1 * term;
        }
        else if (power >= 20 && power <= 35) // Иначе если сила больше или равна 20 и меньше или равна 35, то налог считатется по формуле из 153 строки
        {
            tax = power * 2 * term;
        }
        else if (power > 35) // Иначе если сила больше  35, то налог считатется по формуле из 157 строки
        {
            tax = power * 5 * term;
        }
    }
    void Show() override
    {
        cout << endl;
        cout << "Bike: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Colour = " << colour << "  Tax = " << tax << endl; // Выводим все эти переменные
    }
};

class Airplane :public Transport
{
    int capacity; // Добавление дополнительного параметра "Вместимость"

public:
    Airplane(float power, int year, int term, int capacity) // Параметры самолёта
    {
        this->power = power; // Отслеживание какой объект его вызвал
        this->year = year;
        this->term = term;
        this->capacity = capacity;
    }
    void Taxx() override
    {
        tax = power * 25 * term; // Налог рассчитывается по этой формуле 
    }
    void Show() override
    {
        cout << endl;
        cout << "Airplane: " << "  Power = " << power << "  Year = " << year << " Term = " << term << "  Capacity = " << capacity << "  Tax = " << tax << endl; // Выводим все эти переменные
    }
};

int main()
{
    Passengercar p(350, 0, 1, "Toyota Land Cruiser ", 7); // Легковой автомобиль с заданными значениями
    p.Taxx();
    p.Show();

    Bus b(200, 2016, 2, 1000); // Автобус с заданными значениями
    b.Taxx();
    b.Show();

    Bike i(50, 2019, 2, "green"); // Мотоцикл с заданными значениями
    i.Taxx();
    i.Show();

    Airplane a(1500, 2015, 5, 567); // Самолёт с заданными значениями
    a.Taxx();
    a.Show();

}
