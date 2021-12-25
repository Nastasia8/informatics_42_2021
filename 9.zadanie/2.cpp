#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Transport {

    protected:
    float Power, tax, cost, Transmission;
    int Year, usetime;
};

class PassengerCar : public Transport{

    public:
    int MaxSpeed;
    string Model;
    string Transmission;
    

    void Tax() {

        int value = Year - 2021;

        if (Power <=100){
            tax = Power * 2.5 * usetime;
        }
        else if (Power > 100 && Power <=150){
            tax = Power * 3.5 * usetime;
        }
        else if (Power > 150 && Power <=200){
            tax = Power * 5 * usetime;
        }
        else if (Power > 200 && Power <=250){
            tax = Power * 5 * usetime;
        }
        else if (Power > 250){
            tax = Power * 5 * usetime;
        }

        if (cost > 3){
            if (cost > 3 && cost <=5 && value > 2 && value <=3){
                tax *= 1.1;
            }
            else if (cost > 3 && cost <=5 && value > 1 && value <=2){
                tax *= 1.3;
            }
            else if (cost > 3 && cost <=5 && value <=1){
                tax *= 1.5;
            }
            else if (cost > 5 && cost <= 10 && value <=5){
                tax *= 2;
            }
            else if (cost > 10 && cost <= 15 && value <=10){
                tax *= 3;
            }
            else if (cost > 15 && value <=20){
                tax *= 3;
            }
        }
    }

    PassengerCar(){
        Power = 0; //л.с
        Year = 0;
        usetime = 0; //месяцы
        tax = 0;
        Model = "No_Name_NULL";
        Transmission ="No_Name_NULL";
        MaxSpeed = 0; //км/ч
        cost = 0; //млн.руб

    }
    PassengerCar(float Power, int Year, int usetime, string Model, int cost, string Transmission, int MaxSpeed){
        this-> Power = Power;
        this-> Year = Year;
        this-> usetime = usetime;
        tax = 0;
        this-> Model = Model;
        this-> Transmission = Transmission;
        this-> MaxSpeed = MaxSpeed;
        this-> cost = cost;
    }

    void Show(){
        cout << "Информация о легковом автомобиле: " <<endl << "Мощность: " << Power <<endl << "Год выпуска: " << Year <<endl << "Время пользования: " << usetime << endl << "Налог: " << tax <<endl << "Модель: " << Model <<endl << "Трансмиссия: " << Transmission <<endl << "Максимальная скорость: " << MaxSpeed << endl <<endl << "Цена: " << cost <<endl <<endl;
    }

};

class Motorcycle : public Transport{

    public:
    string Model;
    string Transmission;
    int MaxSpeed; 

    void Tax(){
        if (Power <= 20){
            tax = Power * usetime;
        }
        else if (Power > 20 && Power <= 35){
            tax = Power * 2 * usetime;
        }
        else if (Power > 35){
            tax = Power * 5 * usetime;
        }
    }

    Motorcycle(){
        Power = 0;
        Year = 0;
        usetime = 0;
        Model = "No_Name_NULL";
        Transmission ="No_Name_NULL";
        tax = 0;
        MaxSpeed = 0;
    }
    Motorcycle(float Power, int Year, int usetime, string Model, string Transmission, int MaxSpeed, int cost){
        this-> Power = Power;
        this-> Year = Year;
        this-> usetime = usetime;
        this-> Model = Model;
        this-> Transmission = Transmission;
        tax = 0;
        this-> MaxSpeed = MaxSpeed;
        this-> cost = cost;

    }

    void Show(){
        cout << "Информация о мотоцикле: " << endl << "Мощность: " << Power << endl << "Год выпуска: " << Year << endl << "Время использования: " << usetime << endl << "Модель: " << Model << endl << "Трансмиссия: " << Transmission << endl << "Налог: " << tax << endl << "Максимальная скорость: " <<endl << MaxSpeed << endl << "Цена: " << cost << endl << endl;
    }

};

class AboBus : public Transport{ //abobus==Автобус))

    public:
    string Model;
    string Transmission;
    int MaxSpeed;
    int NumberOfSeats; //типа вместимости (Количество мест)

    void Tax() {
        if (Power <= 200){
            tax = Power * 5 * usetime;
        }
        else if (Power > 200){
            tax = Power * 10 * usetime;
        }
    }

    AboBus(){
        Power = 0;
        Year = 0;
        usetime = 0;
        Model = "No_Name_NULL";
        Transmission ="No_Name_NULL";
        MaxSpeed = 0;
        tax = 0;
        NumberOfSeats = 0;      
    }
    AboBus(float Power, int Year, int usetime, string Model, string Transmission, int MaxSpeed, int NumberOfSeats, int cost){
        this-> Power = Power;
        this-> Year = Year;
        this-> usetime = usetime;
        this-> Model = Model;
        this-> Transmission = Transmission;
        tax = 0;
        this-> MaxSpeed = MaxSpeed;
        this-> NumberOfSeats = NumberOfSeats;
        this-> cost = cost;
    }

    void Show(){
        cout << "Информация об автобусе" << endl << "Мощность: " << Power << endl << "Год выпуска: " << Year << endl << "Время использования: " << usetime << endl << "Модель: " << Model << endl << "Трансмиссия: " << Transmission << endl << "Налог: " << tax << endl << "Максимальная скорость: " <<endl << MaxSpeed << endl << "Количество мест: " <<endl << NumberOfSeats <<endl << "Цена: " << cost << endl << endl;
    }

};

class Airplane : public Transport{

    public:
    string Model;
    int NumberOfSeats;
    int MaxSpeed;
    int Weight;

    void Tax() {
        tax = Power * 25 * usetime;
    }

    Airplane(){
        Power = 0;
        Year = 0;
        Model = "No_Name_NULL";
        tax = 0;
        NumberOfSeats = 0;
        MaxSpeed = 0; 
        Weight = 0;  // в тоннах (вес)
        cost = 0; //в млн. долларов    
    }
    Airplane(float Power, int Year, int usetime, string Model, int NumberOfSeats, int Weight, int MaxSpeed, int cost){
        this-> Power = Power;
        this-> Year = Year;
        this-> Model = Model;
        this-> usetime = usetime;
        tax = 0;
        this-> NumberOfSeats = NumberOfSeats;
        this-> Weight = Weight;
        this-> MaxSpeed = MaxSpeed;
        this-> cost = cost;

    }

    void Show(){
        cout << "Информация о самолёте:" << endl << "Мощность: " << Power << endl << "Год выпуска: " << Year << endl << "Налог: " << tax << endl  << "Модель: " << Model << endl << "Максимальная скорость: " << MaxSpeed << endl<< "Количество мест: " << NumberOfSeats << endl << "Вес:" << Weight << endl << "Цена:" << cost <<endl;
    }

};

main(){
    PassengerCar Mercedes(585, 2017, 101, "MERCEDES E63S AMG 4-MATIC", 8 , "Спортивная", 250);
    Mercedes.Tax();
    Mercedes.Show();

    Motorcycle BMW(20, 2009, 25, "BMW S1000RR", "Спортивная", 300, 2);
    BMW.Tax();
    BMW.Show();

    AboBus PAZ(136, 1989, 32, "ПАЗ 33054", "Полная", 94, 43, 2);
    PAZ.Tax();
    PAZ.Show();

    Airplane NEO(4000, 1987, 11, "AIRBUS A-320 NEO", 180, 42, 871, 44);
    NEO.Tax();
    NEO.Show();

    return 0;
} 
// Еще раз скажу, что мне нравятся такие задачки)) в 3 часа ночи самый кайф их писать :)
// Самый главный мем: Сосед по комнате сказал, что может быть вам преподаватель даёт задачи, которые ей нужны по работе, а вы их выполняете))))