#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee //Объявление класса Employee
{
private:
    string FN; // Fn==Full name==Полное имя(ФИО)
    int experience;
    string position;
    string address;
    string number;
    int hours;
    int OneHourPrice;
    string CheckString(string x)
    {
        if (x == "")
        {
        cout << "Ввведите снова: ";
        cin>>x;
        }
        return x;
    }
    int CheckInt(int g)
    {
        if (g == 0)
        {
        cout << "Введите снова: ";
        cin>>g;
        }
        return g;
    }
public:
    Employee(string FN, int experience, string position, string address, string number, int hours, int OneHourPrice)
    {
        this->FN = CheckString(FN);
        this->experience = CheckInt(experience);
        this->position = CheckString(position);
        this->address = CheckString(address);
        this->number = CheckString(number);
        this->hours = CheckInt(hours);
        this->OneHourPrice = CheckInt(OneHourPrice);
    }
    void salary()
    {
    cout <<"Заработная плата сотрудника: " << hours*OneHourPrice << endl;
    }
    void premium()
    {
        if (experience >= 1 && experience < 3) {
            cout <<"Премия этого сотрудника: " << (hours*OneHourPrice * 3)/100 << endl;
        } else if (experience >= 3 && experience < 6) {
            cout <<"Премия этого сотрудника: " << (hours*OneHourPrice * 5)/100 << endl;
        } else if (experience >= 6 && experience <= 9) {
            cout <<"Премия этого сотрудника: " << (hours*OneHourPrice * 7)/100 << endl;
        } else if (experience >= 10){
            cout <<"Премия этого сотрудника: " << (hours*OneHourPrice * 13)/100 << endl;
        }
    }
    void showInfo()
    {
        cout <<"ФИО: " << FN << endl;
        cout <<"Стаж работы: " << experience <<endl;
        cout <<"Должность: " << position <<endl;
        cout <<"Адрес: " << address <<endl;
        cout <<"Номер телефона: " << number <<endl;
        cout <<"Количество отработанных часов: " << hours <<endl;
        cout <<"Стоимость одного часа работы: " << OneHourPrice <<endl;
        cout<<endl;
    }
    void record()
    {
        ofstream file(FN + ".txt");
        file <<"ФИО: " << FN <<endl;
        file <<"Cтаж работы: " << experience <<endl;
        file <<"Должнось: " << position <<endl;
        file <<"Адрес: " << address <<endl;
        file <<"Номер телефона: " << number <<endl;
        file <<"Количество отработанных часов: " << hours <<endl;
        file <<"Стоимость одного часа работы: " << OneHourPrice <<endl;
        file.close();
    }
};
int main()
{
    Employee First("Герасимов Данила Сергеевич", 1, "Джуниор", "г. Кинешма, ул. 10 Августа, д. 4", "87770010101", 40, 500);
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
// при запуске программы первыми числами по порядку вводить 1,2,3.. и тд. до 7.
//С реализацией разбирались с Александром Бутусовым, кстати задачки интересные пошли, это уже больше похоже на реальные ситуации, нежели найти, я не знаю косинус двойного угла :)) 