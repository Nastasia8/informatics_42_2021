#include <iostream>
#include <iomanip>
#include <cmath>

void checkIn(float &check);
void checkIn(int &selection);
double sum(double contr, int years, float percent, int rate);

int main(int argc, char *argv[]){
        double contribution;
        float percent = 15;
        int deposits_rate = 0;
        std::cout << "Enter two numbers: x and y " << std::endl;

        std::cout << "contribution: " ;
        float buffer;
        checkIn(buffer);
        contribution = (double)buffer;
        std::cout << "Count of years: " ;

        
        checkIn(buffer);
        int years_count = (int)buffer;

        std::cout << "deposit rate in in months 12, 6 or 3: " ;
        checkIn(deposits_rate);
        std::cout << std::setprecision(10);
        std::cout << "Profit: " << sum(contribution, years_count, percent, deposits_rate) << std::endl;


    return 0;                    
}

double sum(double contr, int years, float percent, int rate){
    switch (rate)
    {
    case 12:
    return contr*pow((1+percent/100),years);
        break;
    case 6:
    return contr*pow(1+(percent/100)/6,6*years);
        break;
    case 3:
    return contr*pow(1+(percent/100)/3,3*years);
        break;
    
    default:
        break;
    }
}

void checkIn(int &selection){
    std::string buffer = "";
    while (true)
    {
        std::cin >> buffer;
        try
        {
            selection = std::stoi(buffer);
            switch (selection)
            {
            case 12:
                break;
            case 6:
                break;
            case 3:
                break;
            default:
                std::cout << "Incorrect type of data, try again: " << std::endl;
                continue;
            }
            break;
        }
        catch(const std::exception& e)
        {
            std::cout << "Incorrect type of data, try again: " << std::endl;
        }
    }
}

void checkIn(float &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
           check = std::stof(buffer);
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