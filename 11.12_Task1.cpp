#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

class Student{
    private:
        string FIO;
        int year;
        int group;
        int age;
        string checkFIO(string FIO){         //проверка верности ввода данных
            if(FIO == ""){
                cout<<"Name isn't correct. Enter the name: "; 
                cin>>FIO;
            }
            return FIO;
        }
        int checkYear(int year){         //проверка верности ввода данных        
            if((year<1)||(year>4)){
                cout<<"Course isn't correct. Enter the course: ";
                cin>>year;
            }
            return year;
        }
        int checkGroup(int group){         //проверка верности ввода данных
            if(group == 0){
                cout<<"Group isn't correct. Enter the group: ";
                cin>>group;
            }
            return group;
        }
        int checkAge(int age){         //проверка верности ввода данных
            if((age<17)||(age>60)){
                cout<<"Age isn't correct. Enter the age: ";
                cin>>age;
            }
            return age;
        }        
    public:
    void show();
    void input(string FIO, int year,int group,int age);  
};
 void Student::show(){
cout << "FIO: " << FIO << "\nYear: " << year << "\nGroup: " << group << "\nAge: " << age << endl; //вывод данных студентов на экран
}
void Student::input(string FIO, int year,int group,int age){
    this->FIO = checkFIO(FIO);
    this->year = checkYear(year);
    this->group = checkGroup(group);
    this->age = checkAge(age);
}

int main(){
SetConsoleOutputCP(1251);
Student First;
Student Second;
Student Third;
First.input("Kochneva Darina Alexseevna", 1, 42, 18);
Second.input("Bykov Peter Olegovich", 3, 185, 21);
Third.input("Ivanov Ivan Ivanovich", 4, 42, 24);
First.show();
Second.show();
Third.show();

    return 0;
}