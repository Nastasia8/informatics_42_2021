#include <iostream>

void findMin(int* pArr, size_t arraySize, int* min) {
    *min = RAND_MAX;
    for (int i = 0; i < arraySize; i++) {
        if (*min > pArr[i]) {
            *min = pArr[i];
        }
    }
}

void fillArray(int* pArr, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        pArr[i] = rand();
    }   
}

void showArray(int* pArr, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        std::cout << pArr[i] << std::endl;
    }   
}

int main() {
    srand(time(NULL));
    
    int lenghtOfArray;
    std::cin >> lenghtOfArray;
    int* array = new int[lenghtOfArray];

    int* min;
    fillArray(array, lenghtOfArray);
    findMin(array, lenghtOfArray, min);
    showArray(array, lenghtOfArray);
    std::cout << *min;

    return 0;
}