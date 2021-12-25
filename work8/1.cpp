#include <iostream>
#include <string> //библиотека строгого типа 

using namespace std;

class Student
{
private:    //не видно
	string FIO;  //фио
	int group; //группа
	int course; //курс
	int age; //возраст

	string iFIO(string FIO)
	{
		if (FIO == " ") //вводим фио
		{
			cout << " ФИО = ";
			cin >> FIO;
		}
		return FIO;
	}
	int igroup(int group)
	{
		if (group == 0) 
		{
			cout << "Группа = ";
			cin >> group;
		}
		return group;
	}
	int icourse(int course)
	{
		if (course == 0) 
		{
			cout << "Курс = ";
			cin >> course;
		}
		return course;
	}
	int iage(int age)
	{
		if (age == 0 ) 
		{
			cout << "Возраст = ";
			cin >> age;
		}
		return age;
	}

public: //видно
	Student(string FIO, int group, int course, int age)
	{
		this->FIO = iFIO(FIO);
		this->group = igroup(group);
		this->course = icourse(course);
		this->age = iage(age);
	}
	void show()
	{
		cout << "ФИО: " << FIO << endl;
		cout << "Группа: " << group << endl;
		cout << "Курс: " << course << endl;
		cout << "Возраст: " << age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	Student First(" ", 0, 0, 0);   //то, что вводим мы 
	Student Second("Milkina Svetlana Alekseevna", 3, 185, 21); // данные уже сущ
	Student Third(" Vilkov Maxim Olegovish", 4, 2, 22); //существует
	First.show();
	Second.show();
	Third.show();

	return 0;
}


//делала сама по аналоги с прошлым заданием 