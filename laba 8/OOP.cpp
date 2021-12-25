#include <iostream>
#include <string>

using namespace std;

class Student
{
    private: // локально

    string FIO;
    int course;
    int group;
    int age;

    void checkAGE()
    {   
        cout << "write age = ";
        cin >> age;

         while ((age < 17) || (age > 25))
        {   
            cin >> age;
        }
        this->age = age;
    }

    void checkCOURSE()
    {   
        cout << "write course = ";
        cin >> course;

        while ((course < 0) || (course > 4))
        {   
            cin >> course;
        }
        this->course = course;
    }

    public:

        void in() // определение метода
        {   
            cout << "write FIO = ";
            cin >> FIO;

            cout << "write group = ";
            cin >> group;

            checkCOURSE();
            checkAGE();
        }

        void from()
        {
            cout << "FIO: " << FIO << endl;
            cout << "course: "<< course << " " << "group: " << group << ' ' << "age: " << age << ' ' << endl;
            cout << endl;
        }
};

int main()
{
    Student firstStudent;
    Student secondStudent;
    Student thirdStudent;

    //cout << "enter: FIO, course, group, age" <<endl;

    firstStudent.in();
    firstStudent.from();

    secondStudent.in();
    secondStudent.from();

    thirdStudent.in();
    thirdStudent.from();

    return 0;
}