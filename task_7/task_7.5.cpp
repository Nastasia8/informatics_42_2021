#include <iostream>
#include <list>
#include <iterator>

void checkIn(int &check);
void create(int input, std::list<int> *list);
void change(std::list<int> *list, int input);

int main(int argc, char const *argv[]){
    int number;
    std::cout << "Enter a number: ";
    checkIn(number);
    std::list <int> list;
    create(number, &list);
    change(&list, number);
    copy(list.begin(), list.end(), std::ostream_iterator<int>(std::cout," "));
    return 0;
}


void change(std::list<int> *list, int input){
    for (int i = 2; i <= input ; i++){
        list->remove_if([i](const int& value){return value % i == 0 && value!=i;});
    }
}

void create(int input, std::list<int> *list){
    for (int i = 2; i <= input; i++){
        list->push_back(i);
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