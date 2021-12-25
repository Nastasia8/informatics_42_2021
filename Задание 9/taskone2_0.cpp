#include <iostream>
#include <string>

using namespace std;

class Student

{

private: // проверка данных

    string FIO;

    int course;

    int group;

    int age;  

    string proverkaFIO(string FIO)

    {

        if (FIO == "")

        {

            cout << "Enter new FIO: ";

            getline(cin, FIO);

        }

        return FIO;

    }

    int proverkaCourse(int course)

    {

        if ((course <= 0) || (course > 4))

        {

            cout << "Enter new course: ";

            cin >> course;

        }

        return course;

    }

    int proverkaGroup(int group)

    {
        if (group == 0)

        {

            cout << "Enter new Group: ";

            cin >> group;

        }

        return group;
    }

    int proverkaAge(int age)

    {

        if (age > 100)

        {

            cout << "Enter new Age: ";

            cin >> age;

        }

        return age;

    }

public:

    void input(string FIO, int course, int group,int age);

    void show();

};

void Student::input(string FIO, int course, int group,int age)

{

    this->FIO = proverkaFIO(FIO); //  указываем на адрес созданного объекта класса с помощью this

    this->course = proverkaCourse(course);

    this->group = proverkaGroup(group);

    this->age = proverkaAge(age);

}

void Student::show()

{

    cout << "FIO: " << FIO << "\nCourse: " << course << "\nGroup: " << group << "\nAge: " << age << endl;

}

int main()

{
    Student One;

    Student Two;

    Student Three;

    One.input("Batasov Sergey Olegovich", 1, 42, 18);

    Two.input("Titomir Bogdan Petrovich", 2, 12, 54);

    Three.input("", 0, 0, 120000);

    One.show(); // с помощью show делаем видимым ранее невидимый компонент.

    Two.show();

    Three.show();
}