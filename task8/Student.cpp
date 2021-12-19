#include <iostream>
#include "Student.h"

void Student::Show() const {
    std::cout << "Имя: " << fullname.firstName << std::endl
              << "Отчество: " << fullname.secondaryName << std::endl
              << "Фамилия: " << fullname.surname << std::endl
              << "Курс: " << course << std::endl
              << "Группа: " << group << std::endl
              << "Возраст: " << age << std::endl;
};

Student::Student(std::string first, std::string secondary,
                 std::string sur, int course,
                 int group, int age):
                 fullname{first, secondary, sur},
                 course(course), group(group), age(age) {};
