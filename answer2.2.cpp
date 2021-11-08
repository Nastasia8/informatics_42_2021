#include <iostream>
#include <math.h>
#include <string>

//functions for calculating perimeter - "p" and area(square) - "a"

void answer(float radius);

void answer(float side1, float side2, float littlebase, float bigbase);

void answer(float side, int overload);




int main(){

int choise = 0;

int overload = 0; //Variable for overload

std::cout << "This program calculates the perimeter and area of ​​various shapes" << std::endl;

std::cout << "Enter '1' for circle, '2' for trapezoid or '3' for square: ";
std::cin >> choise;

switch(choise){

    case 1:

        float radius;
        
        std::cout << "Enter radius of the circle: ";
        std::cin >> radius;
        
        answer(radius);

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

        answer(side1, side2, littlebase, bigbase);

        break;

    case 3:

        float side;

        std::cout << "Enter side of the square: ";
        std::cin >> side;

        answer(side, overload);

        break;
}

    return 0;

}




void answer(float radius){

    float perimeter;
    
    float Pi = 3.14;

    perimeter = (2*Pi*radius);
    
    float area;

    area = (Pi*(pow(radius, 2)));

    std::cout << "Perimeter of the circle: " << perimeter << ". " << "Area(square) of the circle: " << area << std::endl;

}




void answer(float side1, float side2, float littlebase, float bigbase){

    float perimeter;

    perimeter = (side1+side2+littlebase+bigbase);

    float area;
    // We use the Pythagorean theorem to find the hypotenuse (the height of the trapezoid) and then find the area with the formula of the half-sum of bases per height
    area = (   (sqrt(  (pow(side1, 2))  -  (pow(((bigbase-littlebase)/2), 2)) ))   *   ( (bigbase+littlebase)/2 )    );

    std::cout << "Perimeter of the trapezoid: " << perimeter << ". " << "Area(square) of the trapezoid: " << area << std::endl;

}
    



void answer(float side, int overload){

    float perimeter;

    perimeter = (4*side);

    float area;

    area = (pow(side, 2));

    std::cout << "Perimeter of the square: " << perimeter << ". " << "Area(square) of the square: " << area << std::endl;

}