#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream>
using std:: cin;
using std:: cout;
using std:: endl;
using std:: string;
using std:: ofstream;

class Employee
{
public:

    static int k;

    Employee(string FIO, int work_experience, string post, string home_address, string phone_number, int number_of_hours_worked, int cost_of_one_hour_of_work)
    {
        this->FIO = Check_Full_Name(FIO);
        this->work_experience = Check_Work_Exper(work_experience);
        this->post = Check_Post(post);
        this->home_address = Check_Address(home_address);
        this->phone_number = Check_Number(phone_number);
        this->number_of_hours_worked = Check_Hours_Worked(number_of_hours_worked);
        this->cost_of_one_hour_of_work = Check_One_Hour(cost_of_one_hour_of_work);
        k++;
    }


    double Salary()
    {
        int salary = this->number_of_hours_worked * this->cost_of_one_hour_of_work;
        return salary;
    }


    void Premium()
    {
        if (work_experience >= 1 && work_experience < 3) 
        {
            cout << "Премия работника: " << (Salary() * 3) / 100 << endl << endl;
        }
        else if (work_experience >= 3 && work_experience < 6) 
        {
            cout << "Премия работника: " << (Salary() * 5) / 100 << endl << endl;
        }
        else if (work_experience >= 6 && work_experience <= 9) 
        {
            cout << "Премия работника: " << (Salary() * 7) / 100 << endl << endl;
        }
        else if (work_experience >= 10) 
        {
            cout << "Премия работника: " << (Salary() * 13) / 100 << endl << endl;
        }
    }


    void Show_Full_Information()
    {
        cout << "ФИО: " << FIO << endl;
        cout << "Стаж (в годах): " << work_experience << endl;
        cout << "Должность: " << post << endl;
        cout << "Домашний адрес: " << home_address << endl;
        cout << "Номер телефона: " << phone_number << endl;
        cout << "Количество отработанных часов: " << number_of_hours_worked << endl;
        cout << "Стоимость одного часа работы: " << cost_of_one_hour_of_work << endl;
    }


    void Writing_File()
    {
        string path = "Information about employees.txt";

        ofstream fout;

        fout.open(path, ofstream::app);
        
        if (!fout.is_open())
        {
            cout << "Ошибка открития файла!" << endl;
        }
        else
        {
            fout << "ФИО: " << this->FIO << endl;
            fout << "Стаж (в годах): " << this->work_experience << endl;
            fout << "Должность: " << this->post << endl;
            fout << "Домашний адрес: " << this->home_address << endl;
            fout << "Номер телефона: " << this->phone_number << endl;
            fout << "Количество отработанных часов: " << this->number_of_hours_worked << endl;
            fout << "Стоимость одного часа работы: " << this->cost_of_one_hour_of_work << endl << endl;
        }

        fout.close();
    }
    
private:

    string FIO;
    int work_experience;
    string post;
    string home_address;
    string phone_number;
    int number_of_hours_worked;
    int cost_of_one_hour_of_work;

    string Check_Full_Name(string FIO)
    {
        if (FIO == "")
        {
        cout << k << " работник допустил ошибку в поле: ФИО" << endl << "Введите другое ФИО" << endl;
            getline(cin, FIO);
        }
        return FIO;

    }

    int Check_Work_Exper(int work_experience)
    {
        if (work_experience <= 0)
        {
            cout << k << " работник допустил ошибку в поле: Стаж" << endl << "Введите другой Стаж" << endl;
            cin >> work_experience;
        }
        return work_experience;
    }

    string Check_Post(string post)
    {
        if (post == "")
        {
            cout << k << " работник допустил ошибку в поле: Должность" << endl << "Введите другую Должность" << endl;
            getline(cin, post);
        }
        return post;

    }

    string Check_Address(string home_address)
    {
        if (home_address == "")
        {
            cout << k << " работник допустил ошибку в поле: Домашний адрес" << endl << "Введите другой Домашний адрес" << endl;
            getline(cin, home_address);
        }
        return home_address;

    }

    string Check_Number(string phone_number)
    {
        if (phone_number == "")
        {
            cout << k << " работник допустил ошибку в поле: Номер телефона" << endl << "Введите другой Номер телефона" << endl;
            getline(cin, phone_number);
        }
        return phone_number;

    }

    int Check_Hours_Worked(int number_of_hours_worked)
    {
        if (number_of_hours_worked <= 0)
        {
            cout << k << " работник допустил ошибку в поле: Количество отработанных часов" << endl << "Введите другое Количество отработанных часов" << endl;
            cin >> number_of_hours_worked;
        }
        return number_of_hours_worked;
    }

    int Check_One_Hour(int cost_of_one_hour_of_work)
    {
        if (cost_of_one_hour_of_work <= 0)
        {
            cout << k << " работник допустил ошибку в поле: Стоимость одного часа работы" << endl << "Введите другую Стоимость одного часа работы" << endl;
            cin >> cost_of_one_hour_of_work;
        }
        return cost_of_one_hour_of_work;
    }
};

int Employee:: k = 1;

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    Employee First("Иванов Иван Иванович", 3, "Сисадмин", "Иваново, Ташкентская 12", "8 (800) 555 - 35 - 35", 9, 700);
    Employee Second("Кукушкин Александр Николаевич", 5, "Тестировщик", "Вичуга, Ульяновская 18", "8 (960) 455 - 23 - 77", 8, 1150);

    cout << endl << "Всего Работников: " << Employee:: k - 1 << endl << endl;

    First.Show_Full_Information();
    First.Salary();
    First.Premium();
    First.Writing_File();

    Second.Show_Full_Information();
    Second.Salary();
    Second.Premium();
    Second.Writing_File();
   
    return 0;
}