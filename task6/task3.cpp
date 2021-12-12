#include <iostream>

int functionDivision(int x, int y) {
    if (x > y) {
        if (x % y != 0) {
            return functionDivision(x % y, y);
        } else {
            return y;
        }
    } else {
        if (y % x != 0) {
            return functionDivision(x, y % x);
        } else {
            return x;
        }
    }
}

int functionSubtraction(int x, int y) {
    if (x - y == 0) {
        return x;
    } else {
        if (x > y) {
            return functionSubtraction(abs(x - y), y);
        } else {
            return functionSubtraction(x, abs(x - y));
        }
        
    }
}

int functionNOK(int x, int y) {
    return (x * y) / functionDivision(x, y); 
} 

int main(int args, char** argv) {
    int x, y;
    
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "При помощи деления. НОД(" << x << ", " << y << ") = "  << functionDivision(x, y) << std::endl;
    std::cout << "При помощи вычитания. НОД(" << x << ", " << y << ") = "  << functionSubtraction(x, y) << std::endl;
    std::cout << "НОК(" << x << ", " << y << ") = "  << functionNOK(x, y) << std::endl;

    return 0;
}