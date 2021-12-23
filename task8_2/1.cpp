#include <iostream>
#include <string.h>
#include <windows.h>
using std:: cin;
using std:: cout;
using std:: endl;
using std:: string;


class Student
{
public:

    static int k;

    void Get(string Student, int Course, int Group, int Age);
    void Show();
  
private:
    string Student;
    int Course;
    int Group;
    int Age;


// Проверяет ФИО студента
    string Check_Student(string Student)
    {
        if (Student == "")
        {
            cout << k << " студент допустил ошибку в поле: ФИО"<< endl << "Введите другое ФИО" << endl;
            getline(cin, Student);
        }
    return Student;
    }


// Проверяет курс
    int Check_Course(int Course)
    {
        if (Course <= 0 || Course >= 5 )
        {
            cout << k << " студент допустил ошибку в поле: курс" << endl << "Введите другой курс" << endl;
            cin >> Course;
        }
    return Course;
    }
        
        

// Проверяет группу
    int Check_Group(int Group)
    {
        if (Group <= 0 || Group > 250 )
        {
            cout << k << " студент допустил ошибку в поле: группа" << endl << "Введите другую группу" << endl;
            cin >> Group;
        }
    return Group;
    }
        

// Проверяет возраст
    int Check_Age(int Age)
    {
        if (Age <= 16 || Age > 45 )
        {
            cout << k << " студент допустил ошибку в поле: возраст" << endl << "Введите другой возраст" << endl;
            cin >> Age;
        }
    return Age;
    }

    // Подсчитывает количество студентов
    void Count()
    {
        k++;
    }

};

// Инициализация переменной k
    int Student:: k = 1;

// Принимает значения
    void  Student::Get(string Student, int Course, int Group, int Age)
    {
        this->Student = Check_Student(Student);
        this->Course = Check_Course(Course);
        this->Group = Check_Group(Group);
        this->Age = Check_Group(Age);
        this->Count();
    }

// Выводит значения на экран
    void Student::Show()
    {
        cout << "ФИО студента: " << this->Student << "\nКурс: " << this->Course << "\nГруппа: " << this->Group << "\nВозраст: " << this->Age << endl << endl;
    }

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    Student FirstStudent;
    Student SecondStudent;
    Student ThirdStudent;

    FirstStudent.Get("Иванов Иван Иванович", 1, 42, 18);
    SecondStudent.Get("Борисова Дарья Дмитреевна", 3, 187, 20);
    ThirdStudent.Get("Кожевникова Карина Олеговна", 4, 37, 21);

    cout << endl << "Всего Студентов: " << Student::k - 1 << endl << endl;

    FirstStudent.Show();
    SecondStudent.Show();
    ThirdStudent.Show();
    
    return 0;
}