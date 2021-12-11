#include <iostream>
#include <iomanip>

class Triangle
{
private:
    int height;
public:
    void setH(int input){
        height = input;
    }

    void print(){
        char sumb = 37;
        for (int i = 1 ; i <= height ; i++){
            if (i != height){
                for (int j = 0 ; j < i ; j++){
                    std::cout << sumb;
                }
            }else{
                std::cout << "" << std::endl;
            }
            std::cout << "" << std::endl;
        }
        sumb++;
        for (int i = height-1 ; i >= 1 ; i--){
                for (int j = 0 ; j < i ; j++){
                    std::cout << sumb;
                }
            std::cout << "" << std::endl;
        }
        
    }

    void print_back(){
        bool trigger = 0;
        int i = 1;
        char sumb = 35;
        while (!trigger || i != 0){
            if(trigger == 0){
                if(i != height){
                    std::cout << std::setw( height - i );
                    for (int j = 0 ; j < i ; j++){
                        std::cout  << sumb;
                    }
                    std::cout << "" << std::endl;
                    i++;
                }else{
                trigger = 1;
                sumb = 64;
                i--;
                std::cout << "" << std::endl;
                }
            }else{
                std::cout << std::setw( height - i );
                for (int j = i ; j >=1 ; j--){
                        std::cout << sumb;
                    }
                    std::cout << "" << std::endl;
                    i--;
            }
        }
    }
};

void checkIn(int &check);

int main(int argc, char const *argv[]){
    int height;
    std::cout << "Enter the height of triangle: ";
    checkIn(height);

    Triangle trng;
    trng.setH(height);
    trng.print();
    std::cout << "" << std::endl;
    trng.print_back();
    return 0;
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