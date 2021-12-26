//Задание взял у Александра Бутусова 1/42
#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
#include <string> //Это класс с методами и переменными для организации работы со строками в языке программирования C++.
using namespace std; //Обявление пространства имён std
class Student //Объявление класса "Student"
{
private: //Это члены класса, доступ к которым имеют только другие члены этого же класса
    string FIO; //Строковой тип для переменной ""
    int course; //Целочислиный тип данных для "course"
    int group; //Целочислинный тип данных для "group"
    int age; //Целочисленный тип данных для "age"
    string checkFIO(string FIO) //Строковой тм данных с названием "checkFIO"
    {
        if (FIO == "") //Если 
        {
            cout << "Enter new FIO: "; //Вывод надписи с текстом " Введите новое ФИО: "
            getline(cin, FIO); //Ввод данных из потока
        }
        return FIO; //Возвращает значение из функции FIO
    }
    int checkCourse(int course) //Целочисленный тип данных "checkCourse"
    {
        if ((course <= 0) || (course > 4)) //Если Курс <= 0 или Курс > 4
        {
            cout << "Enter new course: "; //Вывод надписи с текстом " Введите новый курс: "
            cin >> course; //Ввод для курса
        }
        return course; //Возвращает значение из функции course
    }
    int checkGroup(int group) //Целочисленный тип данных "checkGroup" 
    {
        if (group == 0) //Если группа = 0
        {
            cout << "Enter new Group: "; //Вывод надписи с текстом " Введите новую группу: "
            cin >> group; //Ввод для группы
        }
        return group; //Возвращает значение из функции group
    }
    int checkAge(int age) //Целочисленный тип данных "checkAge" 
    {
        if (age > 100) //Если возраст > 100
        {
            cout << "Enter new Age: "; //Вывод надписи с текстом " Введите новый возраст: "
            cin >> age; //Ввод для возраст
        }
        return age; //Возвращает значение из функции age
    }
public: //Это члены структуры или класса, к которым можно получить доступ извне этой же структуры или класса
    void input(string FIO, int course, int group, int age); //Внутренний указатель для ФИО, курс, группа, возраст
    void show(); //Указатель Показа данных
};
void Student::input(string FIO, int course, int group, int age) //Внутренний указатель "Student" для ФИО, курс, группа, возраст
{
    this->FIO = checkFIO(FIO); //указатель, который указывает на объект, владеющий функцией "FIO = checkFIO"
    this->course = checkCourse(course); //указатель, который указывает на объект, владеющий функцией "course = checkCourse"
    this->group = checkGroup(group); //указатель, который указывает на объект, владеющий функцией "group = checkGroup"
    this->age = checkAge(age); //указатель, который указывает на объект, владеющий функцией "age = checkAge"
}
void Student::show() //Внутренний указатель "Student" для изображения данных о студенте
{
    cout << "FIO: " << FIO << "\nCourse: " << course << "\nGroup: " << group << "\nAge: " << age << endl; //Вывод надписи с текстом "ФИО:, Курс: на следующей строке, Группа: на следующей строке, Возраст: на следующей строке" 
}
int main() //Эта строка сообщает компилятору, что есть функция с именем main, и что функция возвращает целое число типа int
{
    Student First; //Первый студент
    Student Second; //Второй студент
    Student Third; //Третий студент
    First.input("Shiyan Dmitry Vyacheslavovich", 1, 42, 20); //Первый Вводимый
    Second.input("Ivanov Ivan Vladimirovich", 2, 42, 19); //Второй Вводимый
    Third.input("", 5, 0, 101); //Третий Вводимый
    First.show(); //Показать Первого
    Second.show(); //Показать второго
    Third.show(); //Показать третьего
}
