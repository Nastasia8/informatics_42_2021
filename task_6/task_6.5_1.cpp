#include <iostream>

int find(int input_1, int input_2, int input_3);
void checkIn(int &check);

int main(int argc, char const *argv[]){
    std::cout << "Enter first number: ";
    int first;
    checkIn(first);
    std::cout << "Enter second number: ";
    int second;
    checkIn(second);
    std::cout << "Enter third number: ";
    int third;
    checkIn(third);

    int ans = find(first, second, third);
    std::cout << "Greatest common divisor of " << first << " and " << second << " and " << third << " is " << ans << std::endl;

    return 0;
}

int find(int input_1, int input_2, int input_3){
    int buffer;
    while (input_2){
        buffer = input_1 % input_2;
        input_1 = input_2;
        input_2 = buffer;
    }
    while (input_3){
        buffer = input_1 % input_3;
        input_1 = input_3;
        input_3 = buffer;
    }
    return input_1;
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
           check = std::stoi(buffer);
           break;
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}