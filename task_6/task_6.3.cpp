#include <iostream>

int find(int input_1, int input_2);
void checkIn(int &check);

int main(int argc, char const *argv[]){
    std::cout << "Enter first number: ";
    int first;
    checkIn(first);
    std::cout << "Enter second number: ";
    int second;
    checkIn(second);

    int ans = find(first, second);
    std::cout << "Greatest common divisor of " << first << " and " << second << " is " << ans << std::endl;

    return 0;
}

int find(int input_1, int input_2){
    int buffer;
    while (input_2){
        buffer = input_1 % input_2;
        input_1 = input_2;
        input_2 = buffer;
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