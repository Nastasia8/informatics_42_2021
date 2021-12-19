#include <iostream>
#include <algorithm>
#include <regex>
#include <cstdlib>
#include <limits>

class Student
{
private:

    std::string name;
    int year;
    int group;
    int age;

    bool CheckName(std::string input){
        input = std::regex_replace(input, std::regex("^ +| +$|( ) +"), "$1");
        if (std::any_of(input.begin(), input.end(), ::isdigit) == 0 &&  std::count(input.cbegin(), input.cend(), ' ') == 2){
            return 1;
        }else{
            std::cout << "Incorrect name! Exemple: Ivan Petrov Sergeevich" << std::endl;
            std::cout << "" << std::endl;
            return 0;
        }
    }

    bool CheckYear(std::string check){
        try{
           std::stoi(check);
           if(std::stoi(check) <= 0 || std::stoi(check) > 5){
               std::cout << "Enter correct year of study from 1 to 4!" << std::endl;
               std::cout << "" << std::endl;
               return 0;
           }else{
               return 1;
           }
           
       }catch(const std::exception& e){
           std::cout << "Enter correct year of study from 1 to 4!" << std::endl;
           std::cout << "" << std::endl;
           return 0;
       }
    }

    bool CheckGroup(std::string check){
        try{
           std::stoi(check);
           if(std::stoi(check) <= 0){
               std::cout << "Enter correct number of student's group!" << std::endl;
               std::cout << "" << std::endl;
               return 0;
           }else{
               return 1;
           }
           
       }catch(const std::exception& e){
           std::cout << "Enter correct number of student's group!" << std::endl;
           std::cout << "" << std::endl;
           return 0;
       }
    }

    bool CheckAge(std::string check){
        try{
           std::stoi(check);
           if(std::stoi(check) <= 0){
               std::cout << "Enter correct student's age!" << std::endl;
               std::cout << "" << std::endl;
               return 0;
           }else{
               return 1;
           }
           
       }catch(const std::exception& e){
           std::cout << "Enter correct student's age!" << std::endl;
           std::cout << "" << std::endl;
           return 0;
       }
    }

public:
    void Update();
    void Show();
};
void Student::Update(){

    std::cout << "Enter full name of student: ";
    std::string buffer;
    std::getline (std::cin,buffer);
    while (!CheckName(buffer)){
        _flushall();
        std::cout << "Enter full name of student: ";
        std::getline (std::cin,buffer);
    }
    name = buffer;
    std::cout << "" << std::endl;

    std::cout << "Enter student's year of study: ";
    std::string input_year;
    std::cin >> input_year;
    while (!CheckYear(input_year)){
        _flushall();
        std::cout << "Enter student's year of study: ";
        std::cin >> input_year;
    }
    year = std::stoi(input_year);
    std::cout << "" << std::endl;

    std::cout << "Enter student's group: ";
    std::string input_group;
    std::cin >> input_group;
    while (!CheckGroup(input_group)){
        _flushall();
        std::cout << "Enter student's group: ";
        std::cin >> input_group;
    }
    group = std::stoi(input_group);
    std::cout << "" << std::endl;

    std::cout << "Enter student's age: ";
    std::string input_age;
    std::cin >> input_age;
    while (!CheckAge(input_age)){
        _flushall();
        std::cout << "Enter student's age: ";
        std::cin >> input_age;
    }
    age = std::stoi(input_age);
    std::cout << "" << std::endl;
    _flushall();
}

void Student::Show(){
    std::cout << name << " " << year << " year student of group number " << group << " is " << age << " age old" << std::endl;
}

int main(int argc, char *argv[]){
    Student firts;
    Student second;
    Student third;

    std::cout << "First student: " << std::endl;
    firts.Update();
    std::cout << "" << std::endl;
    std::cout << "Second student: " << std::endl;
    second.Update();
    std::cout << "" << std::endl;
    std::cout << "Third student: " << std::endl;
    third.Update();
    std::cout << "" << std::endl;

    std::cout << "In the list of students for expulsion: " << std::endl;
    firts.Show();
    second.Show();
    third.Show();

    return 0;
}