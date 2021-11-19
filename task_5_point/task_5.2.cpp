#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]){
    float coord[2][8] = {{2.0 , 2.1 , 2.2 , 2.3 , 2.4 , 2.5 , 2.6 , 2.7},{1.220 , 1.253 , 1.256 , 1.232 , 1.175 , 1.091 , 0.985 , 0.850}};

    std::cout << "Input points value: " << std::endl;

    for (int i = 0; i < 2; i++){
        if (i == 0){
            std::cout << "x" << "\t";
        }
        else{
            std::cout << "y" << "\t";
        }
        for (int j = 0; j < 8; j++){
            std::cout << coord[i][j] << "\t";
        }
        std::cout << "" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Nearest function is: " << std::endl;
    std::cout << " y = ax^2 + bx + c " << std::endl;

    double sumxze = 8;

    double sumxon = 0;
    double sumxtw = 0;
    double sumxth = 0;
    double sumxfo = 0;
    double sumy = 0; 
    double sumxony = 0;
    double sumxtwy = 0;

    for (int j = 0; j < 8; j++){

            sumxon += coord[0][j];
            sumy += coord[1][j];

            sumxtw += pow(coord[0][j] , 2);
            sumxth += pow(coord[0][j] , 3);
            sumxfo += pow(coord[0][j] , 4);

            sumxony += coord[0][j] * coord[1][j];
            sumxtwy += pow(coord[0][j] , 2) * coord[1][j];

        }

    std::cout << "To find a, b, c need solve this system of linear equations: " << std::endl;
    std::cout << "" << std::endl;
    std::cout << sumxze << "*c + "  << sumxon << "*b + " << sumxtw << "*a = " << sumy << std::endl;
    std::cout << sumxon << "*c + "  << sumxtw << "*b + " << sumxth << "*a = " << sumxony << std::endl;
    std::cout << sumxtw << "*c + "  << sumxth << "*b + " << sumxfo << "*a = " << sumxtwy << std::endl;
    double delta = ( (sumxze * sumxtw * sumxfo) + (sumxon * sumxth * sumxtw) + (sumxon * sumxth * sumxtw) ) - ( (sumxtw * sumxtw * sumxtw) + (sumxon * sumxon * sumxfo) + (sumxth * sumxth * sumxze) );
    double delta_c = ( (sumy * sumxtw * sumxfo) + (sumxony * sumxth * sumxtw) + (sumxon * sumxth * sumxtwy) ) - ( (sumxtw * sumxtw * sumxtwy) + (sumxony * sumxon * sumxfo) + (sumxth * sumxth * sumy) );
    double delta_b = ( (sumxze * sumxony * sumxfo) + (sumxon * sumxtwy * sumxtw) + (sumy * sumxth * sumxtw) ) - ( (sumxtw * sumxony * sumxtw) + (sumxon * sumy * sumxfo) + (sumxtwy * sumxth * sumxze) );
    double delta_a = ( (sumxze * sumxtw * sumxtwy) + (sumxon * sumxth * sumy) + (sumxon * sumxony * sumxtw) ) - ( (sumy * sumxtw * sumxtw) + (sumxon * sumxon * sumxtwy) + (sumxth * sumxony * sumxze) );

    double c = delta_c / delta;
    double b = delta_b / delta;
    double a = delta_a / delta;
    
    std::cout << "" << std::endl;
    std::cout << "Finded function is: " << std::endl;
    std::cout << "y = ";
    if(a > 0){
        std::cout << a << "*x^2 ";
    }
    else{
        std::cout << "- " << fabs(a) << "*x^2 ";
    }
    if(b > 0){
        std::cout << "+ " << b << "*x ";
    }
    else{
        std::cout << "- " << fabs(b) << "*x ";
    }
    if(c > 0){
        std::cout << "+ " << c << std::endl;
    }
    else{
        std::cout << "- " << fabs(c) << std::endl;
    }

    double falls = 0;
    for (int j = 0; j < 8; j++){
            falls += pow(coord[1][j] - (a * pow(coord[0][j] , 2) + b * coord[0][j] + c ) , 2);
    }
    double delta_f = sqrt(falls/8);
    std::cout << "" << std::endl;
    std::cout << "Fallibility in finding the arguments: = ";
    std::cout << delta_f << std::endl;
    return 0;
}