#include <iostream>
#include <math.h>
#include <string>

//functions for calculating perimeter - "p" and area(square) - "a"

float pcircle(float radius);

float acircle(float radius);

float ptrapezoid(float side1, float side2, float littlebase, float bigbase);

float atrapezoid(float side1, float side2, float littlebase, float bigbase);

float psquare(float side);

float asquare(float side);




int main(){

int choise = 0;

std::cout << "This program calculates the perimeter and area of ​​various shapes" << std::endl;

std::cout << "Enter '1' for circle, '2' for trapezoid or '3' for square: ";
std::cin >> choise;

switch(choise){

    case 1:

        float radius;
        
        std::cout << "Enter radius of the circle: ";
        std::cin >> radius;

        std::cout << "Perimeter and area(square) of the circle: " << pcircle(radius) << "; " << acircle(radius);

        break;
    
    case 2:

        float side1, side2, littlebase, bigbase;

        std::cout << "Enter left side of the trapezoid: ";
        std::cin >> side1;
        
        std::cout << "Enter right side of the trapezoid: ";
        std::cin >> side2;

        std::cout << "Enter little base of the trapezoid: ";
        std::cin >> littlebase;

        std::cout << "Enter big base of the trapezoid: ";
        std::cin >> bigbase;

        std::cout << "Perimeter and area(square) of the trapezoid: "<< ptrapezoid(side1, side2, littlebase, bigbase) << "; " << atrapezoid(side1, side2, littlebase, bigbase);

        break;

    case 3:

        float side;

        std::cout << "Enter side of the square: ";
        std::cin >> side;

        std::cout << "Perimeter and area of the square: " << psquare(side) << "; " << asquare(side);

        break;
}

    return 0;

}




float pcircle (float radius){

    float perimeter;
    
    float Pi = 3.14;

    perimeter = (2*Pi*radius);

    return perimeter;
}

float acircle (float radius){
    
    float area;
    
    float Pi = 3.14;

    area = (Pi*(pow(radius, 2)));

    return area;
}




float ptrapezoid(float side1, float side2, float littlebase, float bigbase){

    float perimeter;

    perimeter = (side1+side2+littlebase+bigbase);

    return perimeter;
}

float atrapezoid(float side1, float side2, float littlebase, float bigbase){

    float area;
    // We use the Pythagorean theorem to find the hypotenuse (the height of the trapezoid) and then find the area with the formula of the half-sum of bases per height
    area = (   (sqrt(  (pow(side1, 2))  -  (pow(((bigbase-littlebase)/2), 2)) ))   *   ( (bigbase+littlebase)/2 )    );

    return area;
}




float psquare(float side){

    float perimeter;

    perimeter = (4*side);

    return perimeter;
}

float asquare(float side){

    float area;

    area = (pow(side, 2));

    return area;
}