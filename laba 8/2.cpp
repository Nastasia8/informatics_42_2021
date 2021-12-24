#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Employee
{
    private:

    string FIO;
    int experience; // стаж
    string position; // должность
    string address; // домашний адрес
    int number; // номер телефона
    int INchas; // ЗП за час
    int ALLchas; // отработанное время
    int zp; // заработаная плата
    double prem; //  премия  // да, я по-еврейски обозвала переменные, но мне так легче, иначе запутаюсь)))))

    void ZPP()
    {   
        cout << endl;
        zp = INchas*ALLchas;
        PREM();
;       cout << "zp = " << zp << endl;
        cout << "prem = " << prem << endl;
        
        this->zp = zp; // указатель на ЗП
    }

    void PREM()
    {   
        if (experience >= 1 && experience < 3) 
        {
            prem = zp * 0.03;
        } 
        else if (experience >= 3 && experience < 6) 
        {   
            prem = zp * 0.05;
        } 
        else if (experience >= 6 && experience <= 9) 
        {   
            prem = zp * 0.07;
        } 
        else if (experience >= 10) 
        {
            prem = zp * 0.13;
        }
        this->prem = prem;
    }

    public:

        void in() // ввод данных через переменные и функции
        {   
            cout << "write FIO = ";
            cin >> FIO;

            cout << "write experience = ";
            cin >> experience;

            cout << "write position = ";
            cin >> position;

            cout << "write address = ";
            cin >> address;

            cout << "write number = ";
            cin >> number;

            cout << "write ALLchas = ";
            cin >> ALLchas;

            cout << "write INchas = ";
            cin >> INchas;

            ZPP(); // расчет зарплаты
            PREM(); // расчет примии
        }

        void from() // вывод данных через переменные и функции
        {   
            cout << endl;
            cout << "ALL DATA:" << '\n';
            cout << "FIO: " << FIO << '\n';
            cout << "experience: "<< experience << '\n' << "position: " << position << '\n' << "address: " << address << '\n';
            cout << "number: " << number << '\n' << "ALLchas: " << ALLchas << '\n' << "INchas: " << INchas << '\n';
            cout << "zp: " << zp << '\n';
            cout << "prem: " << prem << '\n';
        }
};

int main()
{
    Employee worker;

    worker.in();
    worker.from();

    return 0;
}