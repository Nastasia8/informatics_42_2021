#include "Employee.h"
#include "Student.h"
#include <iostream>


int main(int args, char** argv) {
    std::cout << "Student" << std::endl;
    Student semyon("Semyon", "Michailovich", "Pigolitsyn", 1, 42, 19);
    semyon.Show();
    std::cout << std::endl;
    std::cout << "Employee" << std::endl;
    Employee greg("Gregory", "Dmitrievich", "Pastuhov", "Manager", "89207664565", "Ivanovo, Pushkina street", 2, 500, 3.5);
    greg.PrintInfo();
    greg.WriteToFile("text.txt");
    std::cout << std::endl;

    return 0;