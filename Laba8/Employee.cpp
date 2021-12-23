#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Employee
{
private:
    string FIO; //+
    int Experience; //+
    string Post; //+
    int Addres; //+
    int poneNumber; //+
    int hoursWorked; //+
    int otrabotHour; //+
    int salary;
    int Priz;

public:

    void input()
    {
        cin >> FIO;
        cin >> hoursWorked;
        cin >> otrabotHour;
        cin >> Experience;
        cin >> poneNumber;
        cin >> Addres;
        cin >> Post;

    }

    void Salary()
    {
        salary = hoursWorked * otrabotHour;
        cout << salary <<endl;
    }

    void Prize()
    {
        if ((Experience >= 1) || (Experience <= 3)){
            Priz = (salary/100) * 3;
        }
        if ((Experience >= 3) || (Experience <= 6)){
            Priz = (salary/100) * 5;
        }
        if ((Experience >= 6) || (Experience <= 9)){
            Priz = (salary/100) * 7;
        }
        if (Experience >= 10){
            Priz = (salary/100) * 13;
        }
    }

    void info()
    {
        cout << FIO << hoursWorked << otrabotHour << Experience << poneNumber << Addres << Post << salary << Priz <<endl;
    }
};

int main()
{

    Employee firstEmployee;

    cout << "FIO, hoursWorked, otrabotHour, Experience, poneNumber, Addres, Post, salary, Prize, Prize" <<endl;

    firstEmployee.input();
    firstEmployee.Salary();
    firstEmployee.Prize();
    firstEmployee.info();

    return 0;
}