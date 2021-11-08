#include <iostream>

void checkIn(int &check);

int main(int argc, char *argv[]){
    int lowest_x,highest_x;
    std::cout << "Enter lowest and highest values of x:" << std::endl;
    std::cout << "lowest x: ";
    checkIn(lowest_x);
    std::cout << "highest x: ";
    checkIn(highest_x);
    int sum = 0;
    for (int i = lowest_x; i <= highest_x; i++){
        if (i%2==0){
            sum+=i;
        }
        
    }
    std::cout << "Summ of even numbers: " << sum;


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