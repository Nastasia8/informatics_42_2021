#include <iostream>
#include <string.h>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: string;


// Эту работу мне помогал выполнять, мы с ним созванивались по дс и он объяснял мне как надо делать


// Это тип перечисления констант, то есть 1-ая константа - 0, 2-ая константа - 1;
enum CarState
{
    OLD,
    NEW,
};

class Car
{
public:

    // k хранит в себе количество созданных экземпляров
    static int k;

    // Возвращает состояние машины: новое или старое (New or Old)
    CarState GetState()
    {
        return State;
    }

    // Возврат нашего года
    int GetYear()
    {
        return year;
    }

    // Устанавливаем и проверяем верный ввод года 
    void SetYear(int year)
    {
        if (year < 1886)
        {
            year = 1886;
        }
        else if (year > 2022)
        {
        cout << "Неправильная дата в: "<< endl << "Бренд: " << this->brand << endl << "Модель: " << this->model << endl << "Введите другую дату" << endl << endl;
        }
        else if (year > 1886 && year <= 2022)
        {
            this->year = year;
        }
    }
    
    // Устанавливаем состояние нашей машины
    void SetState(CarState State)
    {
        this->State = State;
    }

    // Дефолтное значение
    void Set_Default()
    {
        this->brand = ("RENO");
        this->model = ("LOGAN");
        this->year = (2004);
        SetState(OLD);
        this->k++;
    }

    // Эта функция принимает наши значения
    void  Set_Take_Values(string brand, string model, int year, CarState State)
    {
        this->brand = brand;
        this->model = model;
        SetState(State);
        SetYear(year);
        this->k++;
    }
    
    // Функция отображения 
    void Output_to_the_Screen()
    {
        cout << "Бренд: " << this->brand << endl;
        cout << "Модель: " << this->model << endl;
        if (this->GetState()==CarState::NEW)
        {
            cout << "Cостояние: новое" << endl;
        }
        else if (this->GetState()==CarState::OLD)
        {
            cout << "Состояние: старое" << endl;
        }

        cout << "Год выпуска: " << this->year << endl << endl;
    }
    
// Это приватные значения, мы можем ими пользоваться только внутри класса, а снаружи нет 
private:
    enum CarState State;
    string brand;
    string model;       
    int year;
};

// Инициализация переменной k
int Car::k = 0;

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    Car FirstCar;
    Car SecondCar;
    Car ThirdCar;
    FirstCar.Set_Take_Values("MERCERDES", "A-класс", 2013, CarState::OLD);
    SecondCar.Set_Take_Values("MERCERDES", "C-класс", 2021, CarState::NEW);
    ThirdCar.Set_Default();
    FirstCar.Output_to_the_Screen();
    SecondCar.Output_to_the_Screen();
    ThirdCar.Output_to_the_Screen();
    cout << "Всего экземпляров " << Car::k << endl;
    return 0;
}