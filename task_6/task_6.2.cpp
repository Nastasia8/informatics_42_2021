#include <iostream>
#include <cstdlib>

void checkIn(int &check);
std::string convert(int input, int num_sys);

int main(int argc, char const *argv[]){
    
    std::cout << "Enter number in range 0 .. 325: ";
    int number;
    checkIn(number);
    std::string ans = convert(number, 2);
    std::cout << "Entered number in binary view: " << ans << std::endl;

    ans = convert(number, 8);
    std::cout << "Entered number in octal view: " << ans << std::endl;

    ans = convert(number, 16);
    std::cout << "Entered number in hex view: " << ans << std::endl;
    
    return 0;
}

std::string convert(int input, int num_sys){
    std::string buffer = "";
    std::string ans = "";
    int buf;
    buf = input;
    while (buf != 0){
            switch (buf % num_sys)
            {
            case 10:
                ans = "A";
                break;
            case 11:
                ans = "B";
                break;
            case 12:
                ans = "C";
                break;
            case 13:
                ans = "D";
                break;
            case 14:
                ans = "E";
                break;
            case 15:
                ans = "F";
                break;          
            default:
                ans = std::to_string(buf % num_sys);
                break;
            }
        ans += buffer;
        buf = buf / num_sys;
        buffer = ans;
    }
    return ans;
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