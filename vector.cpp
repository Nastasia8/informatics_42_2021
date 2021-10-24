#include <iostream>
#include <string>
#include <cmath>

float getLength(float input[]);
void checkIn(std::string &check);


int main (int argc, char *argv[]){
    float input_vctr[] = {1 , 5 , 3};

    float len = getLength(input_vctr);
    std::cout << "Length of vector a is: " << len << std::endl;
    std::cout << "Unit vector for vector a: {" << input_vctr[0]/len << ", " << input_vctr[1]/len << ", " << input_vctr[2]/len << "}" << std::endl;

    std::cout << "Insert coordinate of vector b: " << std::endl;

    float vctr_2[3];
    std::string check = "";
    std::cout << "Inser value of x: ";
    checkIn(check);
    vctr_2[0] = std::stof(check);

    std::cout << "Inser value of y: ";
    checkIn(check);
    vctr_2[1] = std::stof(check);

    std::cout << "Inser value of z: ";
    checkIn(check);
    vctr_2[2] = std::stof(check);
    
    std::cout << "Scalar product of a and b: " << std::endl;
    std::cout << input_vctr[0]*vctr_2[0] + input_vctr[1]*vctr_2[1] + input_vctr[2]*vctr_2[2] << std::endl;

    std::cout << "Vector product of a and b: " << std::endl;
    float prod_x = input_vctr[1]*vctr_2[2] - input_vctr[2]*vctr_2[1];
    float prod_y = -(input_vctr[0]*vctr_2[2] - input_vctr[2]*vctr_2[0]);
    float prod_z = input_vctr[0]*vctr_2[1] - input_vctr[1]*vctr_2[0];
    std::cout << "{" << prod_x << ", " << prod_y << ", " << prod_z << "}" << std::endl;
}
float getLength(float input[]){
    int x = input[0];
    int y = input[1];
    int z = input[2];

    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}
void checkIn(std::string &check){
    float buffer = 0;
    while (true){
    std::cin >> check;
       try
       {
           buffer = std::stof(check);
           break;
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}