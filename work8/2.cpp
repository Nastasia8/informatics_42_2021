#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee
{
private:
    string FIO; //фио
    int experience; //стаж
    string position; //должность
    string adress; //дом адрес
    string number; //номер телефона
    int hours; //отработанные часы
    int time; //цена за час

    string vFIO(string FIO)
    {
        if (FIO == " ")
        {
            cout << "ФИО: ";
            cin >> FIO;
        }
        return FIO;
    }
    int vexperience(int experience)
    {
        if (experience == 0)
        {
            cout << "Стаж: ";
            cin >> experience;
        }
        return experience;
    }
    string vposition(string position)
    {
        if (position == " ")
        {
            cout << "Должность: ";
            cin >> position;
        }
        return position;
    }
    string vadress(string adress)
    {
        if (adress == " ")
        {
            cout << "Домашний адрес ";
            cin >> adress;
        }
        return adress;
    }
    string vnumber(string number)
    {
        if (number == " ")
        {
            cout << "Номер телефона: ";
            cin >> number;
        }
        return number;
    }
   
    int vhours(int hours)
    {
        if (hours == 0)
        {
            cout << "Отработанные часы: ";
            cin >> hours;
        }
        return hours;
    }
    int vtime(int time)
    {
        if (time == 0)
        {
            cout << "Отплата за час: ";
            cin >> time;
        }
        return time;
    }
public:
    Employee(string FIO, int experience, string position, string adress, string number, int hours, int time)
    {
        this->FIO = vFIO(FIO); //фио
        this->experience = vexperience(experience); //стаж
        this->position = vposition(position); //должность
        this->adress = vadress(adress); //домашний адрес
        this->number = vnumber(number); //номер телефона
        this->hours = vhours(hours); //кол отработанных часов
        this->time = vtime(time); //плата за час
    }
    void salary()
    {
        cout << "Зарплата " << hours * time << endl; //высчитываем зарплату
    }
    void premium() //в данной функции мы высчитываем премию в зависимости от стажа работы
    {
        if (experience > 0 && experience < 3) 
        {
            cout << "Премия: " << (hours * time * 3) / 100 << endl;
        }
        else if (experience > 2 && experience < 6) 
        {
            cout << "Премия: " << (hours * time * 5) / 100 << endl; 
        }
        else if (experience > 5 && experience < 10) 
        {
            cout << "Премия: " << (hours * time * 7) / 100 << endl;
        }
        else if (experience >= 10) 
        {
            cout << "Премия: " << (hours * time * 13) / 100 << endl;
        }
    }
    void information() //информация, которая выводится 
    {
        cout << "ФИО: " << FIO << endl;
        cout << "Стаж: " << experience << endl;
        cout << "Должность: " << position << endl;
        cout << "Домашний адрес: " << adress << endl;
        cout << "Номер телефона: " << number << endl;
        cout << "Отработанные часы: " << hours << endl;
        cout << "Оплата за час: " << time << endl;
        cout << endl;
    }
    void record() //записываем информацию в файл //посмотрела это у Саши потому что не поянла о чем идет речь и как это
    {
        ofstream file(FIO + ".txt");
        file << "ФИО: " << FIO << endl;
        file << "Стаж: " << experience << endl;
        file << "Должность: " << position << endl;
        file << "Домашний адрес: " << adress << endl;
        file << "Номер телефона: " << number << endl;
        file << "Отработанные часы: " << hours << endl;
        file << "Оплата за час: " << time << endl;
        file.close();
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Employee Man(" Vilkov Maxim Olegovish", 3, "Admin", "Lenina 10", "89158492664", 5320, 200); //существует
    Employee Woman(" ", 0, " ", " ", " ", 0, 0); //то, что мы заполняем сами
    cout << endl;
    cout << "Информация о наших работниках:" << endl;
    cout << endl;
    Man.information();
    Woman.information();
    Man.salary();
    Woman.salary();
    Man.premium();
    Woman.premium();
    Man.record();
    Woman.record();

    return 0;
}
//тоже делала, кроме того момента 