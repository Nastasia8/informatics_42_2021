#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <string> //Использование строчного типа данных
#include <fstream> //Класс для записи данных в файлы
using namespace std; //Использование всего, что находится в пространстве
class Employee //Класс, содержащий сведения о ФИО, стаже, должности и т. д.
{
private: //Внутреннее
    string FIO; //Строчное ФИО
    int experience; //Целое Стаж
    string position; //Строчное Должность
    string adress; //Строчное Адрес
    string number; //Строчное Номер телефона
    int hours; //Целое Часы работы
    int hourWork; //Целое Стоимость одного часа работы
    string checkString(string s) //Строчное Проверка Строки
    {
        if (s == "") //Если Строка = ""
        {
            cout << "Enter again: "; //Вывод Введите снова:
            cin >> s; //Ввод (Строка)
        }
        return s; //Вернуть Строку
    }
    int checkInt(int i) //Целое Проверка Целого
    {
        if (i == 0) //Если Целое = 0
        {
            cout << "Enter again: "; //Вывод Введите снова:
            cin >> i; //Ввод Целого
        }
        return i; //Вернуть Целое
    }
public: //Публичные данных
    Employee(string FIO, int experience, string position, string adress, string number, int hours, int hourWork) //Рабочие (ФИО, Стаж, Должность, Адрес, Номер телефона, Часы работы, Стоимость одного часа работы)
    {
        this->FIO = checkString(FIO); //Указатель (ФИО = Проверка ФИО)
        this->experience = checkInt(experience); //Указатель (Стаж = Проверка Стажа)
        this->position = checkString(position); //Указатель (Должность = Проверка Должности)
        this->adress = checkString(adress); //Указатель (Адрес = Проверка Адреса)
        this->number = checkString(number); //Указатель (Номер телефона = Проверка Номера телефона)
        this->hours = checkInt(hours); //Указатель (Часы работы = Проверка Часов работы)
        this->hourWork = checkInt(hourWork); //Указатель (Стоимость одного часа работы = Проверка Стоимости одного часа работы)
    }
    void salary() //Указатель Оплата труда
    {
        cout << "Salary of this employee: " << hours * hourWork << endl; //Вывод Заработная плата этого сотрудника: (Часы работы * Стоимость одного часа работы)
    }
    void premium() //Указатель Премия
    {
        if (experience >= 1 && experience < 3) //Если Стаж >= 1 года и < 3 лет
        {
            cout << "Premium of this employee: " << (hours * hourWork * 3)/100 << endl; //Вывод Премия данного сотрудника: ((Часы работы * Стоимость одного часа работы * 3) / 100)
        }
        else if (experience >= 3 && experience < 6) //Иначе Если Стаж >= 3 лет и < 6 лет
        {
            cout << "Premium of this employee: " << (hours * hourWork * 5)/100 << endl; //Вывод Премия данного сотрудника: ((Часы работы * Стоимость одного часа работы * 5) / 100)
        } 
        else if (experience >= 6 && experience <= 9) //Иначе Если Стаж >= 6 лет и <= 9 лет
        {
            cout << "Premium of this employee: " << (hours * hourWork * 7)/100 << endl; //Вывод Премия данного сотрудника: ((Часы работы * Стоимость одного часа работы * 7) / 100)
        } 
        else if (experience >= 10) //Иначе Если Стаж >= 10 лет
        {
            cout << "Premium of this employee: " << (hours * hourWork * 13)/100 << endl; //Вывод Премия данного сотрудника: ((Часы работы * Стоимость одного часа работы * 13) / 100)
        }
    }
    void showInfo() //Указатель Показа данных
    {
        cout << "FIO: " << FIO << endl; //Вывод ФИО:
        cout << "Experience: " << experience << endl; //Вывод Стаж:
        cout << "Position: " << position << endl; //Вывод Должность:
        cout << "Adress: " << adress << endl; //Вывод Адрес:
        cout << "Number: " << number << endl; //Вывод Номер телефона:
        cout << "Hours: " << hours << endl; //Вывод Часы работы:
        cout << "The cost of one hour of work: " << hourWork << endl; //Вывод Стоимость одного часа работы:
        cout << endl; //Конец
    }
    void record() //Указатель Запись
    {
        ofstream file(FIO + ".txt"); //Поточный файл (ФИО + .txt)
        file << "FIO: " << FIO << endl; //Файл ФИО
        file << "Experience: " << experience << endl; //Файл Стаж
        file << "Position: " << position << endl; //Файл Должность
        file << "Adress: " << adress << endl; //Файл Адрес
        file << "Number: " << number << endl; //Файл Номер телефона
        file << "Hours: " << hours << endl; //Файл Часы работы
        file << "The cost of one hour of work: " << hourWork << endl; //Файл Стоимость одного часа работы
        file.close(); //Конец
    }
};
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    Employee First("Xina John Bro", 1, "Delevoper", "Ivanovo, Karavaikava 32", "81231231312", 100, 500); //Первый сотрудник
    Employee Second("", 0, "", "", "", 0, 0); //Второй сотрудник
    First.showInfo(); //Показ данных первого
    Second.showInfo(); //Показ данных второго
    First.salary(); //Оплата труда первого
    Second.salary(); //Оплата труда второго
    First.premium(); //Премия первого
    Second.premium(); //Премия второго
    First.record(); //Запись первого
    Second.record(); //Запись второго
    return 0; //Вернуть 0
}