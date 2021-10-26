#include <iostream>
#include <cmath>

void checkIn(float &check);
void solution(float a, float b, float c);

int main(int argc, char* argv[]){
    float first_coef, second_coef, third_coef;
    std::cout << "Enter the coefficients of the quadratic equation" << std::endl;

    std::cout << "Enter coefficient a: ";
    checkIn(first_coef);

    std::cout << "Enter coefficient a: ";
    checkIn(second_coef);

    std::cout << "Enter coefficient a: ";
    checkIn(third_coef);

    solution(first_coef, second_coef, third_coef);
}

void solution(float a, float b, float c){
    float discriminant;
    discriminant = b*b - 4*a*c;
    if (discriminant < 0)
    {   
        std::cout << "There are no solutions in the set of real numbers" << std::endl;
    }else{
        if (discriminant == 0)
        {
            std::cout << "Equation have only one solution: x = " << -b/(2*a) << std::endl;
        }else{
            std::cout << "Equation have two solutions:" << std::endl;
            std::cout << "x1 = " << ( -b - sqrt(discriminant))/(2*a) <<  std::endl;
            std::cout << "x1 = " << ( -b + sqrt(discriminant))/(2*a) <<  std::endl;
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