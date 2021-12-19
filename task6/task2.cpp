#include <iostream>
#include <cstdlib>

std::string convert(int number, int base){
    std::string buffer = "";
    std::string answer = "";
    while (number != 0){
            switch (number % base)
            {
            case 10:
                answer = "A";
                break;
            case 11:
                answer = "B";
                break;
            case 12:
                answer = "C";
                break;
            case 13:
                answer = "D";
                break;
            case 14:
                answer = "E";
                break;
            case 15:
                answer = "F";
                break;          
            default:
                answer = std::to_string(number % base);
                break;
            }
        answer += buffer;
        number = number / base;
        buffer = answer;
    }
    return answer;
}

int main(int args, char** argv){
    
    std::cout << "Enter number: ";
    int number;
    std::cin >> number;
    
    std::cout << "Entered number in binary view: " << convert(number, 2) << std::endl;
    std::cout << "Entered number in octal view: " << convert(number, 8) << std::endl;
    std::cout << "Entered number in hex view: " << convert(number, 16) << std::endl;
    
    return 0;
}

