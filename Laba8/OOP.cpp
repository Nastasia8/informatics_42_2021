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

    void checkAge()
    {
        cin >> age;
        while((age < 17) || (age > 29))
        {
            cin >> age;
        }
        this->age = age;
    }

    void checkCourse()
    {
        cin >> course;
        while ((course < 0) || (course > 4))
        {
            cin >> course;
        }
        this->course = course;
    }

    public:

        void input(){
            cin >> FIO;
            cin >> group;
            checkCourse();
            checkAge();
        }

        void info(){
            cout << FIO <<' '<< course << ' ' << group << ' ' << age <<endl;
        }
};

int main()
{

    Student firstStudent;
    Student secondStudent;
    Student thirdStudent;

    cout << "enter: FIO, course, group, age" <<endl;

    firstStudent.input();
    firstStudent.info();

    secondStudent.input();
    secondStudent.info();

    thirdStudent.input();
    thirdStudent.info();

    return 0;
}