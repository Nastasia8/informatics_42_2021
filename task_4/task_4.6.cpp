#include <iostream>

int calculation(int input);
void checkIn(int &check);

int main(int argc, char* argv[]){
    int number;
    std::cout << "Enter a six-digit number: ";
    checkIn(number);
    std::cout << "Product of the digits of a number: " << calculation(number) << std::endl;
}

int calculation(int input){
    int production = 1;
    for (int i = 10 ; i <= 1000000 ; i*=10){
       production *= (input%i)/(i/10);
    }
    return production;
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            if (check%10000000 <= 1000000 && check/1000000 == 0){
                break;
            }else{
                std::cout << "Incorrect type of data, try again" << std::endl;
            }
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}