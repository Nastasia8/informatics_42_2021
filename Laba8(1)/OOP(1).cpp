#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Student
{
    string FIO;
    int course;
    int group;
    int age;

public:
    void input();
    void info();
private:
    void checkAge();
};
//объявление в не классса(реализация за пределами класса)
void Student::info(){
    cout << FIO <<' '<< course << ' ' << group << ' ' << age <<endl;
}

void Student::input(){
    cout << "Введите ФИО" <<endl;
    cin >> FIO;
    cout << "Введите курс" <<endl;
    cin >> course;
    cout << "Введите группу" <<endl;
    cin >> group;
    checkAge();
}

void Student::checkAge(){
    cout << "Введите возраст от 17 до 30 лет" <<endl;
    cin >> age;
    while (age > 30 || age < 17)
        {
            cout << "Введите возраст" <<endl;
            cin >> age;
        }
    this-> age = age;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Student firstStudent;
    Student secondStudent;
    Student thirdStudent;

    firstStudent.input();
    firstStudent.info();

    return 0;
}
