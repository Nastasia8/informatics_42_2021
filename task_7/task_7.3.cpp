#include <iostream>
#include <list>
#include <iterator>

void checkIn(int &check);
void function(int input, std::list<int> *list);

int main(int argc, char const *argv[]){
    int number;
    std::cout << "Enter a number for check: ";
    checkIn(number);
    std::list <int> list;
    function(number, &list);
    copy(list.begin(), list.end(), std::ostream_iterator<int>(std::cout," "));
    return 0;
}

void function(int input, std::list<int> *list){
    list->push_back(input);
    while (input != 1){
        if(input % 2 == 0){
            input = input /2;
        }else{
            input = (input*3 + 1)/2;
        }
        list->push_back(input);
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