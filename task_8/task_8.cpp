#include <iostream>

using namespace std;

enum CarState
{
    OLD,
    NEW_C
};

class Car
{
public:

    //возврат состояния машина
    CarState GetState()
    {
        return State;
    }

    //возврат года машины
    int GetYear()
    {
        return year;
    }

    //запись года машины
    void SetYear(int year)
    {
        if (year < 1900)
        {
            year = 1900;
        }
        else if (year > 2022)
        {
        cout << "Date incorrect in: "<< endl << "Brand: " << this->brand << endl << "Model: " << this->model << endl << "Try to enter another date" << endl << endl;
        }
        else if (year > 1900 && year <= 2022)
        {
            this->year = year;
        }
    }

    //запись состояния машины
    void SetState(CarState State)
    {
        this->State = State;
    }

    // запись дефолтных значений
    void Set_Def_Data()
    {
        this->brand = ("BMW");
        this->model = ("X5");
        this->year = (1999);
        SetState(OLD);
        this->k += 1;
    }

    // запись кастомных значений
    void  Set_Castom_Data(string brand, string model, int year, CarState State)
    {
        this->brand = brand;
        this->model = model;
        SetState(State);
        SetYear(year);
        //this->year = year;
        this->k += 1;
    }

    //отображение экземпляра класса
    void Show()
    {
        cout << "Brand: " << this->brand << endl;
        cout << "Model: " << this->model << endl;
        if (this->GetState()==CarState::NEW_C)
        {
            cout << "State: New" << endl;
        }
        else if (this->GetState()==CarState::OLD)
        {
            cout << "State: Old" << endl;
        }

        cout << "Year of issue: " << this->year << endl;
        cout << "Instances of the class are created: " << this->k << endl << endl;
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

    Car FirstCar;
    Car SecondCar;
    Car ThirdCar;
    FirstCar.Set_Castom_Data("BMW", "X5", 2015, CarState::OLD);
    SecondCar.Set_Castom_Data("BMW", "X5", 2021, CarState::NEW_C);
    ThirdCar.Set_Def_Data();
    FirstCar.Show();
    SecondCar.Show();
    ThirdCar.Show();
    return 0;
}
