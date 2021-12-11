#include <iostream>

void checkIn(int &check);
float function(float input);

int main(int argc, char const *argv[]){
    int number;
    std::cout << "Enter count of iterations: ";
    checkIn(number);
    std::cout << "Sum of the sequence: " << function((float)number) << std::endl; 
    return 0;
}

float function(float input){
    float sum;
    int fact = 1;
    for (int i = 1; i <= input; i++){
        for (int j = 1; j <= i; j++){
            fact *= j;
        }
        sum += (-1)*i*(5-i)/fact;
        fact = 1;
    }
    return sum;
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            if(check < 1){
                std::cout << "Incorrect type of data, try again" << std::endl;
            }else{
                break;
            }

       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}
