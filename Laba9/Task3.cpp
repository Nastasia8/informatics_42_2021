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
        cout << "Name:" << name << ' ' << "Age:" << age << ' ' << "Color" << colour << ' ' << "Poroda:" << poroda <<endl;
    }

    string Speak() override {
        return "meow";
    }
};

class Dog:public Animal
{
    string poroda;

public:
    Dog(string name, string colour, int age, string poroda):Animal(name, colour, age){
        this->poroda = poroda;
    }

    void Show() override {
        cout << "Name:" << name << ' ' << "Age:" << age << ' ' << "Color" << colour << ' ' << "Poroda:" << poroda <<endl;
    }

    string Speak() override {
        return "gaf gaf";
    }
};

class Raccoon:public Animal
{
    string view;

public:
    Raccoon(string name, string colour, int age, string view):Animal(name, colour, age){
        this->view = view;
    }

    void Show() override {
        cout << "Name:" << name << ' ' << "Age:" << age << ' ' << "Color" << colour << ' ' << "View:" << view <<endl;
    }

    string Speak() override {
        return "Fr-Fr";
    }
};

int main()
{
    string name;
    string colour;
    string poroda;
    string view;
    int age;
    cin >> name;
    cin >> colour;
    cin >> age;
    cin >> poroda;

    /*Animal FirstAnimal("enot", "white", 4);
    FirstAnimal.Show();*/

    cout <<endl;

    Cat firstCat(name, colour, age, poroda);
    firstCat.Show();
    cout << firstCat.Speak() <<endl;

    cin >> name;
    cin >> colour;
    cin >> age;
    cin >> poroda;

    Dog firstDog(name,colour,age,poroda);
    firstDog.Show();
    cout << firstDog.Speak() <<endl;

    cin >> name;
    cin >> colour;
    cin >> age;
    cin >> view;

    Raccoon firstRaccoon(name,colour,age,view);
    firstRaccoon.Show();
    cout << firstRaccoon.Speak() <<endl;

    return 0;
}