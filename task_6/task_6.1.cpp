#include <iostream>


int main(int argc, char const *argv[]){
    std::cout << "Our sequence" << std::endl;
    int num_0 = 0;
    int num_1 = 3;
    int num_2 = 5;
    int num_next;
    std::cout << num_0 << "  "; 
    std::cout << num_1 << "  "; 
    std::cout << num_2 << "  "; 
    for (int i = 3; i < 15; i++){
        num_next = num_0 + num_1 + num_2;
        std::cout << num_next << "  "; 
        num_0 = num_1;
        num_1 = num_2;
        num_2 = num_next;
    }
    
    
    
    return 0;
}
