#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <string> //Использование строчного типа данных
using namespace std; //Использование всего, что находится в пространстве
class Student //Класс Студентов
{
private: //Внутреннее
    string FIO; //Строчное ФИО
    int course; //Целое Курс
    int group; //Целое Группа
    int age; //Целое Возраст
    string checkFIO(string FIO) //Строчное Проверка ФИО
    {
        if (FIO == "") //Если ФИО = ""
        {
            cout << "Enter new FIO: "; //Вывод Введите новое ФИО:
            getline(cin, FIO); //Получение данных (Ввод ФИО)
        }
        return FIO; //Вернуть ФИО
    }
    int checkCourse(int course) //Целое Проверка курса
    {
        if ((course <= 0) || (course > 4)) //Если Курс <= 0 или Курс > 4
        {
            cout << "Enter new course: "; //Вывод Введите новый курс:
            cin >> course; //Ввод (Курс)
        }
        return course; //Вернуть Курс
    }
    int checkGroup(int group) //Целое Проверка группы
    {
        if (group == 0) //Если группа = 0
        {
            cout << "Enter new Group: "; //Вывод Введите новую группу:
            cin >> group; //Ввод (Группа)
        }
        return group; //Вернуть группу
    }
    int checkAge(int age) //Целое Проверка возраста
    {
        if (age > 100) //Если возраст > 100
        {
            cout << "Enter new Age: "; //Вывод Введите новый возраст:
            cin >> age; //Ввод (Возраст)
        }
        return age; //Вернуть возраст
    }
public: //Публичные данные
    void input(string FIO, int course, int group,int age); //Внутренний указатель (ФИО, курс, группа, возраст)
    void show(); //Указатель Показа данных
};
void Student::input(string FIO, int course, int group,int age) //Внутренний указатель Студента (ФИО, курс, группа, возраст)
{
    this->FIO = checkFIO(FIO); //Указатель (ФИО = Проверка ФИО)
    this->course = checkCourse(course); //Указатель (Курс = Проверка курса)
    this->group = checkGroup(group); //Указатель (Группа = Проверка группы)
    this->age = checkAge(age); //Указатель (Возраст = Проверка возраста)
}
void Student::show() //Показ Данных студента
{
    cout << "FIO: " << FIO << "\nCourse: " << course << "\nGroup: " << group << "\nAge: " << age << endl; //Вывод (ФИО: , Курс: на следующей строке, Группа: на следующей строке, Возраст: на следующей строке)
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    Student First; //Первый студент
    Student Second; //Второй студент
    Student Third; //Третий студент
    First.input("Shiyan Dmitry Vyacheslavovich", 1, 42, 20); //Первый Внутренний
    Second.input("Ivanov Ivan Vladimirovich", 2, 42, 19); //Второй Внутренний
    Third.input("", 5, 0, 101); //Третий Внутренний
    First.show(); //Показать Первого
    Second.show(); //Показать второго
    Third.show(); //Показать третьего
}