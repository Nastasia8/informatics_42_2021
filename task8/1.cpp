#include <iostream>
#include <string> 

using namespace std;

class Students
{
private:
    string name; 
    string last_name;
    string patronymic;
    int group;
    int kurs;
    int age;

    string vname(string name)
    {
        if (name == " ")
        {
            cout << " Name = " << endl;
            cin >> name;
        }
        return name;
    }

    string vlast_name(string last_name)
    {
        if (last_name == " ")
        {
            cout << "Last_name = " << endl;
            cin >> last_name;
        }
        return last_name;
    }

    string vpatronymic(string patronymic)
    {
        if (patronymic == " ")
        {
            cout << "Patronymic= " << endl;
            cin >> patronymic;

        }
        return patronymic;
    }

    int vgroup(int group)
    {
        if (group == 0)
        {
            cout << "Group = " << endl;
            cin >> group;
        }
        return group;
    }

    int vkurs(int kurs)
    {
        if (kurs == 0)
        {
            cout << "Kurs = " << endl;
            cin >> kurs;
        }
        return group;
    }
    
    int vage(int age)
    {
        if (age == 0)
        {
            cout << "Age = " << endl;
            cin >> age;
        }
        return age;
    }

public: 
    Students (string name, string last_name, string patronymic, int group, int kurs, int age)
    {
        this->name = vname(name);
        this->last_name = vlast_name(last_name);
        this->patronymic = vpatronymic(patronymic);
        this->group = vgroup(group);
        this->kurs = vkurs(kurs);
        this->age = vage(age);
        this->name = name + " " + last_name + " " + patronymic;
    }

    void show()
    {
        cout << "Name " << name << endl;
        cout << "Last_ame " << last_name << endl;
        cout << "Patronymic " << patronymic << endl;
        cout << "Group " << group << endl;
        cout << "Kurs " << kurs << endl;
        cout << "Age " << age << endl;
    }
};
int main()
{
    Students One(" "," ", " ", 0, 0, 0);  
    Students Two(" ", " ", " ", 0, 0, 0);
    Students Three(" ", " ", " ", 0, 0, 0);
    One.show();
    Two.show();
    Three.show();

    return 0;
}


// помогала Екатерина Завидина с условием задачи 
