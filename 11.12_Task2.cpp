#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
class Employee{
    private:
        string FIO;
        int years;
        string position;
        string homeAdd;
        string number;
        int hours;
        int PriseOfWorkHour;
        string checkString(string s){         //проверка верности ввода данных
            if(s == ""){
                cout<<"It isn't correct. Enter again: "; 
                cin>>s;
            }
            return s;
        }
        int checkInt(int i){         //проверка верности ввода данных        
            if(i==0){
                cout<<"It isn't correct. Enter again: ";
                cin>>i;
            }
            return i;
        }
    public:
        Employee(string FIO, int years, string position, string homeAdd, string number, int hours, int PriseOfWorkHour){ //присваивание проверенных данных 
            this->FIO = checkString(FIO);
            this->years = checkInt(years);
            this->position =checkString(position);
            this->homeAdd = checkString(homeAdd);
            this->number = checkString(number);
            this->hours = checkInt(hours);
            this->PriseOfWorkHour = checkInt(PriseOfWorkHour);
        }
    void salary(){                                     //метод расчёта зарплаты
        cout << "Salary of this employee: " << hours * PriseOfWorkHour << endl; 
    }
    void premium(){                                    //метод расчёта премии
        if ((years >= 1) && (years < 3)) {
            cout << "Premium of this employee: " << (hours * PriseOfWorkHour * 3)/100 << endl;
        } else if ((years >= 3) && (years < 6)) {
            cout << "Premium of this employee: " << (hours * PriseOfWorkHour * 5)/100 << endl;
        } else if ((years >= 6) && (years <= 9)) {
            cout << "Premium of this employee: " << (hours * PriseOfWorkHour * 7)/100 << endl;
        } else if (years >= 10) {
            cout << "Premium of this employee: " << (hours * PriseOfWorkHour * 13)/100 << endl;
        }
    }
    void showInfo(){ //вывод информации о сотруднике на экран
        cout << "FIO: " << FIO << endl;
        cout << "Experience: " << years << endl;
        cout << "Position: " << position << endl;
        cout << "Home adress: " << homeAdd << endl;
        cout << "Number: " << number << endl;
        cout << "Hours: " << hours << endl;
        cout << "The cost of one hour of work: " << PriseOfWorkHour << endl;
        cout << endl;
    }
    void record(){                      //метод вывода данных в файл
        ofstream file(FIO + ".txt");
        file << "FIO: " << FIO << endl;
        file << "Experience: " << years << endl;
        file << "Position: " << position << endl;
        file << "Home adress: " << homeAdd << endl;
        file << "Number: " << number << endl;
        file << "Hours: " << hours << endl;
        file << "The cost of one hour of work: " << PriseOfWorkHour << endl;
        file.close();
    }
};

int main()
{
    Employee First("Xina John Bro", 1, "Delevoper", "Ivanovo, Shubinyh 32", "+71231231312", 100, 500);
    Employee Second("", 0, "", "", "", 0, 0);
    First.showInfo();
    Second.showInfo();
    First.salary();
    Second.salary();
    First.premium();
    Second.premium();
    First.record();
    Second.record();
    return 0;
}
