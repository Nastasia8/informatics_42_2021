#include <iostream>
#include <string>

using namespace std;

class Student{
    string FIO;
    int course, groupe, age;
    void CheckCourse(int course);
    void CheckGroupe(int groupe);
    void CheckAge(int age);

    public:
    void Show();

    Student(){
        FIO = " ";
        course = 999;
        groupe = 999;
        age = 999;
    }

    Student(string FIO, int course, int groupe, int age){
        this-> FIO = FIO;
        this-> course = course;
        this-> groupe = groupe;
        this-> age = age;
    }

    void SetAge(int age);
    void SetCourse(int course);
    void SetGroupe(int groupe);
    void SetFIO(string FIO);
};

void Student::SetAge(int agesw){
    CheckAge(agesw);
    age = agesw;
}

void Student::SetCourse(int coursesw){
    CheckCourse(coursesw);
    course = coursesw;
}

void Student::SetGroupe(int groupesw){
    CheckGroupe(groupesw);
    groupe = groupesw;
}

void Student::SetFIO(string FIOsw){
    FIO = FIOsw;
}

void Student::Show(){
    cout << "FIO: " << Student::FIO << endl << "Course: " << Student::course << endl << "Groupe: " << Student::groupe << endl << "Age: " << Student::age << endl;
}

void Student::CheckGroupe(int groupe){
    if(groupe < 1 || groupe > 300){
        cout << "Incorrect groupe! Try again...";
        exit(0);
    }
}

void Student::CheckCourse(int course){
    if(course < 1 || course > 4){
        cout << "Incorrect course! Try again...";
        exit(0);
    }
}

void Student::CheckAge(int age){
    if(age < 10 || age > 100){
        cout << "Incorrect age! Try again...";
        exit(0);
    }
}

main(){
    string FIOsw;
    int coursesw, groupesw, agesw;

    Student stud1("Khamraev Ivan Dilhcodovich", 1, 42, 17);
    Student stud2("Petrov Alexey Nikolaevich", 2, 185, 19);
    Student stud3("Loginov Fyodor Pavlovich", 1, 184, 18);
    Student stud4 = Student();

    cout << "Student 1: " << endl;
    stud1.Show();
    cout << endl;
    cout << "Student 2: " << endl;
    stud2.Show();
    cout << endl;
    cout << "Student 3: " << endl;
    stud3.Show();
    cout << endl;
    cout << "Student 4: " << endl;
    stud4.Show();
    cout << endl << endl;

    cout << "Enter FIO of the student: ";
    cin >> FIOsw;
    cout << "Enter number of the course: ";
    cin >> coursesw;
    cout << "Enter number of the groupe: ";
    cin >> groupesw;
    cout << "Enter number of the age: ";
    cin >> agesw;
    cout << endl;

    stud4.SetFIO(FIOsw);
    stud4.SetAge(agesw);
    stud4.SetCourse(coursesw);
    stud4.SetGroupe(groupesw);
    cout << endl;
    cout << "Student 4 after changes: ";
    cout << endl;
    stud4.Show();

    return 0;
}