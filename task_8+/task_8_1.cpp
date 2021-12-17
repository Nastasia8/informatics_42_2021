#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    void Set_Custom_Data(string FIO, int classes, int group, int age);
    void Show();

private:
    string FIO;
    int classes;
    int group;
    int age;
    static int k;

    string Verif_name(string FIO)
    {
        ver_name:
        if (FIO == "")
        {
            cout << "FIO is empty in copy: "<< k << endl << "Enter right FIO: ";
            getline(cin, FIO);
            goto ver_name;
        }
        return FIO;
     
    }

    int Verif_classes(int classes)
    {
        ver_classes:
        if (classes <= 0 || classes > 4)
        {
            cout << "Invalid classes in copy: "<< k << endl << "Enter right classes: ";
            cin >> classes;
            goto ver_classes;
        }
        return classes;
    }

    int Verif_group(int group)
    {
        ver_group:
        if (group == 0)
        {
            cout << "Invalid group in copy: " << k << endl << "Enter right group: ";
            cin >> group;
            goto ver_group;

        }
        return group;
    }

    int Verif_age(int age)
    {
        ver_age:
        if (age < 17 || age > 30)
        {
            cout << "Invalid age in copy: "<< k << endl << "Enter right age: ";

            cin >> age;
            goto ver_age;
        }
        return age;
    }

};

int Student::k = 0;

void Student::Set_Custom_Data(string FIO, int classes, int group, int age)
{
    k += 1;
    this->FIO = Verif_name(FIO);
    this->classes = Verif_classes(classes);
    this->group = Verif_group(group);
    this->age = Verif_age(age);
}
void Student::Show()
{
    cout << endl << "FIO of student: " << this->FIO << endl;
    cout << "Classes: " << this->classes << endl;
    cout << "Group: " << this->group << endl;
    cout << "Age: " << this->age << endl;
}

int main() {

    Student std1;
    Student std2;
    Student std3;

    std1.Set_Custom_Data("EgorovVitalyAlekseevich", 1, 42, 20);
    std2.Set_Custom_Data("", 0, 0, 66);
    std3.Set_Custom_Data("EgorovVitalyAlekseevich", 1, 42, 20);

    std1.Show();
    std2.Show();
    std3.Show();

    return 0;
}
