#include <iostream>
#include <string>
#include <cmath>

void draw(int h, int w, char s);
void checkIn(int &check);

int main(int argc, char* argv[]){
    std::cout << "Enter length of sides:" << std::endl;

    std::cout << "Height: ";
    int height;
    checkIn(height);

    std::cout << "Width: ";
    int width;
    checkIn(width);

    std::cout << "Enter a symbol: ";
    char symbol;
    std::cin >> symbol;

    std::cout << "" << std::endl;
    draw(height, width, symbol);
    
   
    
}

void draw(int h, int w, char s){
    std::string buffer = "";
    for (int i = 1 ; i <= h ; i++){
        if (i==1 || i==h){
            for (int j = 1; j <= w; j++){
                buffer += s;
            }
        }else{
            buffer += s;
            for (int j = 2; j < w; j++){
                buffer += " ";
            }
            buffer += s;
        }
        std::cout << buffer << std::endl;
        buffer = "";
    }
    
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            break;
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}