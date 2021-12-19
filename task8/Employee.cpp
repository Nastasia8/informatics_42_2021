#include <fstream>
#include "Employee.h"
#include "Validation.hpp"

Employee::Employee(std::string first, std::string secondary,
                   std::string sur, std::string post,
                   std::string number, std::string address,
                   unsigned int years, unsigned int workingHours,
                   double ratePerHour):yearsInCompany(years),
                   workingHours(workingHours), ratePerHour(ratePerHour) {
    fullName.firstName = Validation(NameValidation, first, "first name");
    fullName.secondaryName = Validation(NameValidation, secondary, "secondary name");
    fullName.surname = Validation(NameValidation, sur, "surname");
    phoneNumber = Validation(NotNullString, number, "phone number");
    homeAddress = Validation(NotNullString, address, "address");
    currentPost = Validation(NameValidation, post, "post");
}

double Employee::GetSalary() const {
    return ratePerHour * workingHours;
};

double Employee::GetAward() const {
    if (yearsInCompany >= 1 && yearsInCompany <= 3) {
        return GetSalary() * 0.03;
    }
    if (yearsInCompany > 3 && yearsInCompany <= 6) {
        return GetSalary() * 0.05;
    }
    if (yearsInCompany > 7 && yearsInCompany <= 10) {
        return GetSalary() * 0.07;
    }
    if (yearsInCompany > 10) {
        return GetSalary() * 0.13;
    }
    return 0;
}

void Employee::PrintInfo() const {
    std::cout << "ФИО: " << fullName.surname << ' ' << fullName.firstName << ' ' << fullName.secondaryName << std::endl
              << "Должность: " << currentPost << std::endl
              << "Номер телефона: " << phoneNumber << std::endl
              << "Адресс: " << homeAddress << std::endl
              << "Рабочие часы: " << workingHours << std::endl
              << "Ставка: " << ratePerHour << std::endl
              << "Зарплата: " << GetSalary() << std::endl
              << "Премия: " << GetAward() << std::endl;
}

void Employee::WriteToFile(std::string path) const {
    std::ofstream writeStream(path);
    writeStream << "ФИО: " << fullName.surname << ' ' << fullName.firstName << ' ' << fullName.secondaryName << std::endl
                << "Должность: " << currentPost << std::endl
                << "Номер телефона: " << phoneNumber << std::endl
                << "Адресс: " << homeAddress << std::endl
                << "Рабочие часы: " << workingHours << std::endl
                << "Ставка: " << ratePerHour << std::endl
                << "Зарплата: " << GetSalary() << std::endl
                << "Премия: " << GetAward() << std::endl;
    writeStream.close();
};
