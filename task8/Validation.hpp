#include <string>
#include <iostream>
#include <ctype.h>

inline bool NameValidation(std::string str) {
    return ((!str.empty()) && std::isupper(str[0]));
};
inline bool NotNullString(std::string str) {
    return (!str.empty());
};

template<class T>
T Validation(bool (*function)(T value), T value, std::string paramName) {
    while (!function(value)) {
        std::cout << "You enter wrong " << paramName << "." << std::endl
                  << "Please enter it correctly" << std::endl;
        std::cin >> value;
    }
    return value;
}