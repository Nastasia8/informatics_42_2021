#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee{

    private:

    string FIO;
    int stage;
    string role;
    string adress;
    int hours;
    int price;
    float prize;
    int salary;
    ofstream file;

    public:

    Employee(){
        FIO = "NO";
        stage = 0;
        role = "NO";
        adress = "NO";
        hours = 0;
        price = 0;
        prize = 0;
        salary = 0;
    }

    Employee(string F, int s, string r, string a, int h, int p){
        FIO = F;
        stage = s;
        role = r;
        adress = a;
        hours = h;
        price = p;
        prize = 0;
        salary = 0;
    }

    void information(){
        cout << "FIO: " << FIO << endl << "Stage: " << stage << endl << "Role: " << role << endl << "Adress: " << adress << endl << "Hours: " << hours << endl << "Price per hour: " << price << endl << "Prize: " << prize << endl << "Salary: " << salary << endl;
    }

    void File(){
        file.open("information");

        if (file.is_open()){
            cout << "File is not open. Error of the recording..." << endl;
            file << "FIO: " << FIO << endl << "Stage: " << stage << endl << "Role: " << role << endl << "Adress: " << adress << endl << "Hours: " << hours << endl << "Price per hour: " << price << endl << "Prize: " << prize << endl << "Salary: " << salary << endl;
        }
        else{
        cout << "File is open, recording is started!" << endl;
        }
        file.close();
    }

    void SetSalary(){
        salary = stage * price;
    }

    void SetPrize(){
        if (stage >= 1 && stage < 3){
            prize = salary * 0.03;
        }
        else if(stage >= 3 && stage < 6){
            prize = salary * 0.05;
        }
        else if(stage >= 6 && stage <= 9){
            prize = salary * 0.07;
        }
        else if(stage >= 10){
            prize = salary * 0.13;
        }
    }

};

main(){
    Employee worker1 = Employee();
    Employee worker2 = Employee("Fedorov Petr Petrovich", 10, "Manager", "Adress", 148, 890);

    cout << "Default constructor: ";
    worker1.information();
    cout << endl;
    cout << "Full worker: " << endl;
    worker2.information();
    worker2.SetSalary();
    worker2.SetPrize();
    cout << endl << "Worker after changes: " << endl;
    worker2.information();
    worker2.File();

    return 0;
}