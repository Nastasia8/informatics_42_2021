#include "FullName.h"
#include <string>

class Employee {
private:
    FullName fullName;
    std::string currentPost;
    std::string phoneNumber;
    std::string homeAddress;
    unsigned int yearsInCompany;
    unsigned int workingHours;
    double ratePerHour;
public:
    Employee(std::string first, std::string secondary,
             std::string sur, std::string post,
             std::string phoneNumber, std::string address,
             unsigned int years, unsigned int workingHours,
             double ratePerHour);
    double GetSalary() const;
    double GetAward() const;
    void PrintInfo() const;
    void WriteToFile(std::string path) const;
};
