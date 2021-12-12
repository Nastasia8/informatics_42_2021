#include <iostream>
#include <vector>

void show_vector(std::vector<int> &a)
{
    for (auto iter = a.begin() ; iter != a.end() ; ++iter) {
        std::cout << *iter << std::endl;      
    }
};


int main(int args, char** argv) {
    std::vector<int> numbers;
    numbers.push_back(0);
    numbers.push_back(3);
    numbers.push_back(5);

    for (int i = 3; i < 15; i++) {
        int value = numbers[i - 3] + numbers[i - 2] + numbers[i - 1];
        numbers.push_back(value);
    }

    show_vector(numbers);

}