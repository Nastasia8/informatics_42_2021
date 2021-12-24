#include <iostream>
#include <string>

using namespace std;

class Student // создаем класс Student
{
private:
    // создаем приватные поля
    string FIO;
    int course;
    int group;
    int age;
    // приватные методы класса для проверки ввода значений
    string checkFIO(string FIO)
    {
        if (FIO == "")
        {
            cout << "Enter new FIO: ";
            getline(cin, FIO);
        }
        return FIO;
    }
    int checkCourse(int course)
    {
        if ((course <= 0) || (course > 4))
        {
            cout << "Enter new course: ";
            cin >> course;
        }
        return course;
    }
    int checkGroup(int group)
    {
        if (group == 0)
        {
            cout << "Enter new Group: ";
            cin >> group;
        }

        return group;
    }
    int checkAge(int age)
    {
        if (age > 100)
        {
            cout << "Enter new Age: ";
            cin >> age;
        }

        return age;
    }
public:
    // объявление методом ввода и вывода
    void input(string FIO, int course, int group,int age);
    void show();

};

// определение метода ввода
void Student::input(string FIO, int course, int group,int age)
{   
    // проверка ввода и последующая инциализация полей
    this->FIO = checkFIO(FIO);
    this->course = checkCourse(course);
    this->group = checkGroup(group);
    this->age = checkAge(age);

}

// определение метода вывода
void Student::show()
{
    cout << "FIO: " << FIO << "\nCourse: " << course << "\nGroup: " << group << "\nAge: " << age << endl;
}

int main()
{   
    // объявление объектов класса
    Student First;
    Student Second;
    Student Third;
    // применение метода ввода для объектов класса
    First.input("Katrovcev Ivan Aleksandrovich", 1, 42, 18);
    Second.input("Putin Vladimir Vladimirovich", 4, 32, 68);
    Third.input("", 7, 0, 102);
    // применение метода вывода для объектов класса
    First.show();
    Second.show();
    Third.show();
}
// Разбирал задание с Александром Бутусовым, вроде понял)