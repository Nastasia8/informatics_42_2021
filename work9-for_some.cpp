#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected: //защитили поля
    string name; //имя//буквы
    string colour; //б//цвет
    int age;//цифры //возраст
public: //видно
    virtual void Show() = 0;

    string getName(string name)
    {
        if (name == " ")
        {
            cout << "Name = ";
            cin >> name;
        }
        return name; //возвращаем
    }
    string getColour(string colour)
    {
        if (colour == " ")
        {
            cout << "Colour = ";
            cin >> colour;
        }
        return colour; //возвращаем
    }
    int getAge(int age)
    {
        if (age == 0)
        {
            cout << "Age = ";
            cin >> age;
        }
        return age;//возвращаем
    }
    virtual string Speak() = 0;

    Animal(string name, string colour, int age) //наш конструктор
    {
        this->name = getName(name);
        this->colour = getColour(colour);
        this->age = getAge(age);
    }
};

class Cat :public Animal //так мы указываем что наследуем из класса животным и токлько к публичным к приватным доступа нет
{
    string breed; //дополнительно //порода

public:
    string getBreed(string breed)
    {
        if (breed == " ")
        {
            cout << "Breed = ";
            cin >> breed;
        }
        return breed; //возвращаем
    }
    Cat(string name, string colour, int age, string breed) :Animal(name, colour, age)
    {
        this->breed = getBreed(breed);
    }
    void Show() override
    {
        cout << "Cat:" << " Name = " << name << " Colour = " << colour << " Age = " << age << " Breed = " << breed << " Speak = ";
    }
    string Speak() override
    {
        return "mrrr";
        cout << endl;
    }
};
class Dog :public Animal //так мы указываем что наследуем из класса животным и токлько к публичным к приватным доступа нет
{
    string weight; //дополнительно//вес

public:
    string getWeight(string weight)
    {
        if (weight == " ")
        {
            cout << "Weight = ";
            cin >> weight;
        }
        return weight; //возвращаем
    }
    Dog(string name, string colour, int age, string weight) :Animal(name, colour, age)
    {
        this->weight = getWeight(weight);
    }

    void Show() override
    { 
        cout << endl;
        cout << "Dog:" << " Name = " << name << " Colour = " << colour << " Age = " << age << " Weight = " << weight << " Speak = ";
    }
    string Speak() override
    {
        return "gav";
    }
};

class Raccoon :public Animal //так мы указываем что наследуем из класса животным и токлько к публичным к приватным доступа нет
{
    string gender; //дополнительно//вес

public:
    string getGender(string gender)
    {
        if (gender == " ")
        {
            cout << "Gender = ";
            cin >> gender;
        }
        return gender; //возвращаем
    }
    Raccoon(string name, string colour, int age, string gender) :Animal(name, colour, age)
    {
        this->gender =getGender(gender);
    }
    void Show() override
    {
        cout << endl;
        cout << "Raccoon:" << " Name = " << name << " Colour = " << colour << " Age = " << age << " Gender = " << gender << " Speak = ";
      
    }
    string Speak() override
    {
        return "stk";
    }
};
int main()
{
    // string name; //структура
    // string colour;
    // string poroda;
    // string weight;
     //int age;
     //cin >> name;
     // cin >> colour;
     //cin >> age;
     //cin >> breed;
    cout << endl;

    Cat firstCat(" ", " ", 0, " "); //все данные пользователь вводит с клавиатуры 
    Dog secondDog(" ", " ", 0, " ");
    Raccoon thirdRaccoon(" ", " ", 0, " ");
    firstCat.Show();
    cout << firstCat.Speak();
    secondDog.Show();
    cout << secondDog.Speak();
    thirdRaccoon.Show();
    cout << thirdRaccoon.Speak();

    return 0;
}
//я сама делала//ну только с вами начало
//у меня программа работает, ну вдруг 

//и вот, в возраст нужно вводить только цифры 