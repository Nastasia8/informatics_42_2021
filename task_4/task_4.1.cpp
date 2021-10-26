#include <iostream>
#include <cmath>

void funct(float num_x, float num_y);
void checkIn(float &check);
void checkIn(int &selection);

int main(int argc, char *argv[]){
        float num_x,num_y;
        std::cout << "Enter two numbers: x and y " << std::endl;
        std::cout << "x: " ;
        checkIn(num_x);
        std::cout << "y: " ;
        checkIn(num_y);


        funct(num_x, num_y);

    return 0;                    
}

void funct(float num_x, float num_y){
    std::cout << "Select the operation: " << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. X to the Y power" << std::endl;

    int selection;
    checkIn(selection);
    switch (selection)
            {
            case 1:
                std::cout << "x + y = " << num_x + num_y << std::endl;
                break;
            case 2:
                std::cout << "x - y = " << num_x - num_y << std::endl;
                break;
            case 3:
                std::cout << "x * y = " << num_x * num_y << std::endl;
                break;
            case 4:{
                if (num_y==0)
                {
                    std::cout << "Mathematical uncertainty" << std::endl;
                    
                }else{
                    std::cout << "x / y = " << num_x / num_y << std::endl;
                }
            }
                break;
            case 5:{
                if (num_x == 0 && num_y <= 0)
                {
                    std::cout << "Mathematical uncertainty" << std::endl;
                    
                }else{
                    std::cout << "x ^ y = " << pow(num_x , num_y) << std::endl;
                }
            }
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
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
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
           break;
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}
