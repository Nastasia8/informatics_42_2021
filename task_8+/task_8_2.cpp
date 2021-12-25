#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee {
    ofstream insert;

private:
    string FIO;
    int experience;
    string position;
    string address;
    string number_phone;
    int hours_worked;
    int cost;
    static int k;

public:
    void insert_data()
    {

        string path = "inf.txt";
        insert.open(path, ofstream::app);

        if (!insert.is_open())
        {
            cout << "File isn`t open" << endl;
        }
        else
        {
            insert << "FIO: " << this->FIO << endl << "experience: " << this->experience << endl << "position " << this->position << endl << "address: " << this->address << endl << "number_phone" << this->number_phone << endl << "hours_worked: " << this->hours_worked << endl << "cost: " << this->cost << endl << endl;
        }
    }

    int salary()
    {
        int salary;
        return  (salary = this->hours_worked * this->cost);
    }

    float Calculate_premium()
    {
        float premium;
        if (experience >= 1 && experience <= 3)
        {
            premium = ((salary() * 3) / 100);
            //3%
        }
        else if (experience > 3 && experience <= 6) {
            premium = ((salary() * 5) / 100);
            //5%
        }
        else if (experience > 6 && experience <= 9) {
            premium = ((salary() * 9) / 100);
            //9%
        }
        else if (experience >= 10) {
            premium = ((salary() * 13) / 100);
            //13%
        }
        return premium;
    }

    string Verif_name(string FIO)
    {
    ver_name:
        if (FIO == "")
        {
            cout << "FIO is empty in copy: " << k << endl << "Enter right FIO: ";
            getline(cin, FIO);
            goto ver_name;
        }
        return FIO;

    }

    int Verif_exper(int experience)
    {
    ver_exper:
        if (experience <= 0)
        {
            cout << " Invalid experience in copy: " << k << endl << "Enter right experience: ";
            cin >> experience;
            goto ver_exper;
        }
        return experience;
    }

    string Verif_pos(string position)
    {
    ver_pos:
        if (position == "")
        {
            cout << "Position is empty in copy: " << k << endl << "Enter right position: ";
            getline(cin, position);
            goto ver_pos;
        }
        return position;

    }

    string Verif_addres(string address)
    {
    ver_add:
        if (address == "")
        {
            cout << "Address is empty in copy: " << k << endl << "Enter right address: ";
            getline(cin, address);
            goto ver_add;
        }
        return address;

    }

    string Verif_phon(string number_phone)
    {
    ver_num:
        if (number_phone == "")
        {
            cout << "Number_phone is empty in copy: " << k << endl << "Enter right number_phone: ";
            getline(cin, number_phone);
            goto ver_num;
        }
        return number_phone;

    }

    int Verif_work(int hours_worked)
    {
    ver_w:
        if (hours_worked <= 0)
        {
            cout << " Invalid hours_worked in copy: " << k << endl << "Enter right hours_worked: ";
            cin >> hours_worked;
            goto ver_w;
        }
        return hours_worked;
    }

    int Verif_cost(int cost)
    {
    ver_cost:
        if (cost <= 0)
        {
            cout << " Invalid cost in copy: " << k << endl << "Enter right cost: ";
            cin >> cost;
            goto ver_cost;
        }
        return cost;
    }


    void Set_Custom_Data(string FIO, int experience, string position, string address, string number_phone, int hours_worked, int cost)
    {
        k += 1;
        string s_ins;
        this->FIO = Verif_name(FIO);
        this->experience = Verif_exper(experience);
        this->position = Verif_pos(position);
        this->address = Verif_addres(address);
        this->number_phone = Verif_phon(number_phone);
        this->hours_worked = Verif_work(hours_worked);
        this->cost = Verif_cost(cost);

    writing_data:
        cout << "Write to file? y-yes/n-no" << endl;
        cin >> s_ins;
        if (s_ins == "y" || s_ins == "yes")
        {
            cout << "OK, data writed" << endl;
            insert_data();
        }
        else if (s_ins == "n" || s_ins == "no" || s_ins == "not")
        {
            cout << "OK, data not writed" << endl;
        }
        else
        {
            cout << "Enter correct answer" << endl;
            goto writing_data;
        }

    }

    void Show()
    {
        cout << "FIO: " << this->FIO << endl;
        cout << "experience: " << this->experience << endl;
        cout << "position: " << this->position << endl;
        cout << "address: " << this->address << endl;
        cout << "number_phone: " << this->number_phone << endl;
        cout << "hours_worked: " << this->hours_worked << endl;
        cout << "cost: " << this->cost << endl;
    }


};

int Employee::k = 0;

int main() {

    Employee Emp1;
    Employee Emp2;

    Emp1.Set_Custom_Data("", 5, "admiral", "Ivanovo", "8 (999) 730 - 88 - 58", 8, 1000);
    Emp2.Set_Custom_Data("sdd", 10, "admiral", "Ivanovo", "8 (999) 730 - 88 - 58", 7, 1000);

    Emp1.Show();
    cout << Emp1.salary() << endl;
    cout << Emp1.Calculate_premium() << endl;

    Emp2.Show();
    cout << Emp2.salary() << endl;
    cout << Emp2.Calculate_premium() << endl;


    return 0;
}
