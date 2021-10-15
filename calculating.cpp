#include <iostream>
#include <cmath>
#include <string>

void checkIn(float &check);
void checkIn(int &check);
void getInfo(int type);
void calculating(float a, float b, float c, float d);
void calculating(float radius, const float Pi);
void calculating(float a);

int main(int argc, char *argv[]){

    std::cout << "Select a geometric shape: " << std::endl;
    std::cout << "1. trapezium" << std::endl;
    std::cout << "2. circle" << std::endl;
    std::cout << "3. square" << std::endl;

    int type_shape;
    std::cout << "Enter 1, 2 or 3 to choose the shape: " << std::endl;
    checkIn(type_shape);
    getInfo(type_shape);
}

void getInfo(int type){
    switch (type)
    {
    case 1:{
        std::cout << "Enter length of sides" << std::endl;
        float top,bottom,left,right;
        std::cout << "Top side: ";
        checkIn(top);
        std::cout << "Bottom side: ";
        checkIn(bottom);
        std::cout << "Left side: ";
        checkIn(left);
        std::cout << "Right side: ";
        checkIn(right);

        calculating(top, bottom, left, right);
    }
        break;
    case 2:{
        const float Pi = 3.14;
        float radius;
        std::cout << "Enter radius: " << std::endl;
        checkIn(radius);

        calculating(radius, Pi);
    }
        break;
    case 3:{
        float a;
        std::cout << "Enter lenght of side: " << std::endl;
        checkIn(a);

        calculating(a);
    }
        break;
    }
}
    

void calculating(float a, float b, float c, float d){
    double square = (a+b)/2*sqrt(c*c - pow((pow((b-a),2) + c*c - d*d)/(2*(b-a)),2) );
    if (square != square)
    {
        std::cout << "Trapezium with such sides is not exist!"<< std::endl;
    }else{
        std::cout << "Perimeter: " << a+b+c+d << std::endl;
        std::cout << "Square: " << square << std::endl;
    }
}

void calculating(float radius, const float Pi){
    std::cout << "Perimeter: " << 2*Pi*radius << std::endl;
    std::cout << "Square: " << Pi*radius*radius << std::endl;
}

void calculating(float a){
    std::cout << "Perimeter: " << 4*a << std::endl;
    std::cout << "Square: " << a*a << std::endl;
}

void checkIn(int &check){
    std::string buffer = "";
    while (true)
    {
        std::cin >> buffer;
        try
        {
            check = std::stoi(buffer);
            switch (check)
            {
            case 1:
                break;
            case 2:
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
           break;
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again: " << std::endl;
       }
    }
}