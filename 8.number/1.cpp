#include <iostream>
#include <string>
using namespace std;

class Student // Объявление класса Student
{
private:
 string FN; //FN==Full Name==Полное имя//
    int course; int group; int age; 

 string checkFN(string FN)
    {
    if (FN == "")
    {
 cout << "Введите ФИО: ";
    getline(cin, FN);
    }
    return FN;
    }
    int checkCourse(int course)
    {
        if ((course <= 0)||(course > 4))
        {
 cout << "Введите номер курса: ";
 cin >> course;
        }
        return course;
    }
    int checkGroup(int group)
    {
        if (group==0)
        {
        cout << "Введите новую группу: ";
        cin >> group;
        }
        return group;
    }
    int checkAge(int age)
    {
        if (age > 100)
        {
        cout << "Введите возраст: ";
        cin >> age;
        }
        return age;
    }
public:
    void input(string FN, int course, int group,int age);
    void show();
};

void Student::input(string FN, int course, int group,int age)
{
    this->FN = checkFN(FN);
    this->course = checkCourse(course);
    this->group = checkGroup(group);
    this->age = checkAge(age);

}
void Student::show()
{
cout << "FN: " << FN << "\nКурс: " << course << "\nГруппа: " << group << "\nВозраст: " << age <<endl;
}

int main()
{
    Student First;
    Student Second;
    Student Third;

    First.input("Герасимов Данила Сергеевич", 1, 42, 18);
    Second.input("Кутузов Никита Александрович", 1, 32, 18);
    Third.input("", 5, 777, 1);
    First.show();
    Second.show();
    Third.show();
}