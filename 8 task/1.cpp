#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string FIO;
    int course;
    int group;
    int age;    
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
    void input(string FIO, int course, int group,int age);
    void show();

};

void Student::input(string FIO, int course, int group,int age)
{
    this->FIO = checkFIO(FIO);
    this->course = checkCourse(course);
    this->group = checkGroup(group);
    this->age = checkAge(age);

}

void Student::show()
{
    cout << "FIO: " << FIO << "\nCourse: " << course << "\nGroup: " << group << "\nAge: " << age << endl;
}

int main()
{
    Student First;
    Student Second;
    Student Third;
    First.input("Butusov Alexander Olegovich", 1, 42, 18);
    Second.input("Mojan Nikita Vladimitovich", 4, 32, 26);
    Third.input("", 5, 0, 101);
    First.show();
    Second.show();
    Third.show();
}
