// Эту работу мы делали 18 декабря в субботу на паре
// полиморфизм, инкапсуляция, наследование, абстакция
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string name;
    string colour;
    int age;
public:
    virtual void Show() = 0;
    string getName(){
        return name;
    }
    virtual string Speak() = 0;

    //Animal(string n, int a):name(n), age(a) {}

    Animal(string name, string colour, int age){
        this->name = name;
        this->colour = colour;
        this->age = age;
    }
};

class Cat:public Animal // мы получаем доступ только к публичному
{
    string poroda;

public:
    Cat(string name, string colour, int age, string poroda):Animal(name, colour, age){
        this->poroda = poroda;
    }

    void Show() override {
        cout << name << " " << colour << " " << age <<" ";
        cout << poroda <<endl;
    }

    string Speak() override {
        return "meow";
    }
};

int main()
{
    string name;
    string colour;
    string poroda;
    int age;
    cin >> name;
    cin >> colour;
    cin >> age;
    //cin >> poroda;

    /*Animal FirstAnimal("enot", "white", 4);
    FirstAnimal.Show();*/

    cout <<endl;

    Cat firstCat(name, colour, age, "poroda");
    firstCat.Show();
    cout << firstCat.Speak();

    return 0;
}
