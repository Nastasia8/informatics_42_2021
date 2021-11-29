#include <iostream>

void checkIn(int &check);
void p_triangle(int input);

int main(int argc, char const *argv[]){
    int number;
    std::cout << "Enter the count of rows: ";
    checkIn(number);
    p_triangle(number);
    return 0;
}

void p_triangle(int input){
    int buffer[input] = {0};
    int last[input] = {0};
    buffer[0] = 1;
    for (int i = 0 ; i < input ; i++){
        last[0] = 1;
        for (int j = 1 ; j <= i ; j++){
            last[j]=buffer[j-1] + buffer[j];
        }
        memcpy(buffer,last,sizeof(last));
        for (int k = 0; k <= i; k++){
                std::cout << buffer[k] << " ";
        }
        std::cout << "" << std::endl;
        
    }
    
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            if(check < 1){
                std::cout << "Incorrect type of data, try again" << std::endl;
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
