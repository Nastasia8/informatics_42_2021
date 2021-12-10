#include <iostream>
#include <string.h>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: string;

enum CarState
{
    OLD,
    NEW_C,
    
};

class Car
{
public:

    CarState GetState()
    {
        return State;
    }

    int GetYear()
    {
        return year;
    }

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

    void SetState(CarState State)
    {
        this->State = State;
    }

    void Set_Def_Data()
    {
        this->brand = ("RENO");
        this->model = ("LOGAN");
        this->year = (2004);
        SetState(OLD);
        this->k++;
    }

    void  Set_Castom_Data(string brand, string model, int year, CarState State)
    {
        this->brand = brand;
        this->model = model;
        SetState(State);
        SetYear(year);
        this->k++;
    }

    void Show()
    {
        cout << "Бренд: " << this->brand << endl;
        cout << "Модель: " << this->model << endl;
        if (this->GetState()==CarState::NEW_C)
        {
            cout << "Cостояние: новое" << endl;
        }
        else if (this->GetState()==CarState::OLD)
        {
            cout << "Состояние: старое" << endl;
        }

        cout << "Год выпуска: " << this->year << endl;
        cout << "Создаются экземпляры класса: " << this->k << endl << endl;
    }

private:
    enum CarState State;
    string brand;
    string model;       
    int year;
    static int k;
};

int Car::k = 0;

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    Car FirstCar;
    Car SecondCar;
    Car ThirdCar;
    FirstCar.Set_Castom_Data("MERCERDES", "A-класс", 2013, CarState::OLD);
    SecondCar.Set_Castom_Data("MERCERDES", "C-класс", 2021, CarState::NEW_C);
    ThirdCar.Set_Def_Data();
    FirstCar.Show();
    SecondCar.Show();
    ThirdCar.Show();
    return 0;
}