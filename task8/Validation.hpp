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
    try {
        if (!function(value)) {
            throw paramName;
        }
    } catch (std::string paramName) {
        std::cerr << paramName << " isn't valid\n";
        exit(EXIT_FAILURE);
    }
    return value;
}