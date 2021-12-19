#include "FullName.h"

class Student {
private:
    FullName fullname;
    short int course;
    short int group;
    short int age;
public:
    Student(std::string first, std::string secondary, std::string sur, int course, int group, int age);
    void Show() const;
};