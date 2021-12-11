#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee
{
private:
    string FIO;
    int experience;
    string position;
    string adress;
    string number;
    int hours;
    int hourWork;
    string checkString(string s)
    {
        if (s == "")
        {
            cout << "Enter again: ";
            cin >> s;
        }
        return s;
    }
    int checkInt(int i)
    {
        if (i == 0)
        {
            cout << "Enter again: ";
            cin >> i;
        }
        return i;
    }
public:
    Employee(string FIO, int experience, string position, string adress, string number, int hours, int hourWork)
    {
        this->FIO = checkString(FIO);
        this->experience = checkInt(experience);
        this->position = checkString(position);
        this->adress = checkString(adress);
        this->number = checkString(number);
        this->hours = checkInt(hours);
        this->hourWork = checkInt(hourWork);
    }
    void salary()
    {
        cout << "Salary of this employee: " << hours * hourWork << endl;
    }
    void premium()
    {
        if (experience >= 1 && experience < 3) {
            cout << "Premium of this employee: " << (hours * hourWork * 3)/100 << endl;
        } else if (experience >= 3 && experience < 6) {
            cout << "Premium of this employee: " << (hours * hourWork * 5)/100 << endl;
        } else if (experience >= 6 && experience <= 9) {
            cout << "Premium of this employee: " << (hours * hourWork * 7)/100 << endl;
        } else if (experience >= 10) {
            cout << "Premium of this employee: " << (hours * hourWork * 13)/100 << endl;
        }
    }
    void showInfo()
    {
        cout << "FIO: " << FIO << endl;
        cout << "Experience: " << experience << endl;
        cout << "Position: " << position << endl;
        cout << "Adress: " << adress << endl;
        cout << "Number: " << number << endl;
        cout << "Hours: " << hours << endl;
        cout << "The cost of one hour of work: " << hourWork << endl;
        cout << endl;
    }
    void record()
    {
        ofstream file(FIO + ".txt");
        file << "FIO: " << FIO << endl;
        file << "Experience: " << experience << endl;
        file << "Position: " << position << endl;
        file << "Adress: " << adress << endl;
        file << "Number: " << number << endl;
        file << "Hours: " << hours << endl;
        file << "The cost of one hour of work: " << hourWork << endl;
        file.close();
    }
};

int main()
{
    Employee First("Xina John Bro", 1, "Delevoper", "Ivanovo, Karavaikava 32", "81231231312", 100, 500);
    Employee Second("", 0, "", "", "", 0, 0);
    First.showInfo();
    Second.showInfo();
    First.salary();
    Second.salary();
    First.premium();
    Second.premium();
    First.record();
    Second.record();
    return 0;
}