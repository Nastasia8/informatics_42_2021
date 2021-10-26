#include <iostream>
#include <cmath>

void checkIn(int &check);
double sum(int k);
double production(int k);

int main(int argc, char *argv[]){
    std::cout << "Enter count of iteration: " ;
    int count;
    checkIn(count);

    std::cout << "Sum is: " << sum(count) << std::endl;
    std::cout << "Production is: " << production(count) << std::endl;
}

double sum(int k){
    double sum = 0;
    for (int i = 1 ; i <= k ; i++)
    {
        sum += (double)2/((2*i+1)*(2*i+3));
    }
    return sum;
}
double production(int k){
    double product = 1;
    for (int i = 1; i <= k; i++)
    {
        product *= pow((-1),i-1) + i;
    }
    return product;
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
           check = std::stoi(buffer);
           if(check <= 0){
               std::cout << "Incorrect type of data, try again: " << std::endl;
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