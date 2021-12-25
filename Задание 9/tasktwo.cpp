#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee

{

private:

    string FIO;

    int Staj;

    string position;

    string adress;

    string number;

    int hours;

    int hourWork;

    string proverkaString(string s)

    {

        if (s == "")

        {

            cout << "Enter again: ";

            cin >> s;
        }

        return s;

    }

    int proverkaInt(int i)

    {

        if (i == 0)

        {

            cout << "Enter again: ";

            cin >> i;

        }

        return i;

    }

public:

    Employee(string FIO, int Staj, string position, string adress, string number, int hours, int hourWork)

    {

        this->FIO = proverkaString(FIO);

        this->Staj = proverkaInt(Staj);

        this->position = proverkaString(position);

        this->adress = proverkaString(adress);

        this->number = proverkaString(number);

        this->hours = proverkaInt(hours);

        this->hourWork = proverkaInt(hourWork);

    }

    void salary()

    {

        cout << "Employee salary: " << hours * hourWork << endl;

    }

    void premia()

    {

        if (Staj >= 1 && Staj < 3) 
        {

            cout << "Emplye premia: " << (hours * hourWork * 3)/100 << endl;

        } else if (Staj >= 3 && Staj < 6)

        {

            cout << "Emplye premia: " << (hours * hourWork * 5)/100 << endl;

        } else if (Staj >= 6 && Staj <= 9)

        {

            cout << "Premium of this employee: " << (hours * hourWork * 7)/100 << endl;

        } else if (Staj >= 10) 

        {

            cout << "Premium of this employee: " << (hours * hourWork * 13)/100 << endl;

        }

    }

    void showInfo()

    {

        cout << "FIO: " << FIO << endl;

        cout << "Staj: " << Staj << endl;

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

        file << "Staj: " << Staj << endl;

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

    Employee One("Uno Dos Quadro", 5, "IT Support Manager", "Shuya, Sverdlova 48", "3236236246", 204, 450);

    Employee Two("", 0, "", "", "", 0, 0);

    One.showInfo();

    Two.showInfo();

    One.salary();

    Two.salary();

    One.premia();

    Two.premia();

    One.record();

    Two.record();

    return 0;
}