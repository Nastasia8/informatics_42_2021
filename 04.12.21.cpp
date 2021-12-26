// Эту работу мы делали 4 декабря в субботу на паре
#include <iostream>
#include <string>
using namespace std;
class Car
{
    string brand;
    string model;
    int year;
    

    public:

        static int k;

        Car(){
            brand = "nisan";
            model = "n";
            year = 1989;
            k++;
        }
        
        // Car(string b, string m, int y):brand(b),model(m),year(y){}

        Car(string brand, string model, int year){
            this->brand = brand;
            this->model = model;
            this-> setYear(year);
            k ++;
        }

        string getBrand(){
            return brand;
        }
        void setBrand(string b){
            brand = b;
        }
        void setModel(string m){
            model = m;
        }
        void setYear(int y){
            if((y >= 1980) && (y <= 2021)){
                year = y;
            }else {
                year = 666;
            }
        }

        void info(){
            cout << "Brand: " << brand <<endl;
            cout << "Model: " << model <<endl;
            cout << "Year: " << year <<endl;
        }
};

int Car::k = 0;

main()
{
    Car firstCar;
    Car thirdCar("audi", "X5", 1999);
   // firstCar.setBrand("audi");
   // firstCar.getBrand();
   // firstCar.setModel("X5");
   // firstCar.setYear(1999);
   //firstCar.brand = "BMV";
   //firstCar.model = "X5";
   //firstCar.year = 2010;
    Car secondCar;
   secondCar.setBrand("volvo");
   secondCar.setModel("no");
   secondCar.setYear(99);
   //secondCar.brand = "opel";
   //secondCar.model = "no";
   //secondCar.year = 2015;

    firstCar.info();
    secondCar.info();
    thirdCar.info();

    cout << firstCar.k <<endl; // firstCar -  это экземпляр класса
    cout << secondCar.k <<endl;
    cout << thirdCar.k <<endl;
    cout << Car::k <<endl;

    return 0;
}
