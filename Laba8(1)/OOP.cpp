#include <iostream>
#include <string>

using namespace std;

class Student
{
    string FIO;
    int course;
    int group;
    int age;

    public:

        void input(string FIO, int course, int group, int age){
            this-> FIO = FIO;
            this-> course = course;
            this-> group = group;
            this-> age = age;
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

    firstStudent.input("Kornilich Kseniya Sergeevna", 1, 42, 18);

    firstStudent.info();

    return 0;
}
