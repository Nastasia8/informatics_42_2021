#include <iostream>

template <class A>
void swap(A* first, A* second) {
    A temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    float* x = new float(5.23);
    float* y = new float(6.14);
    std::cout << "WAS" << std::endl << *x << '\t' << *y << std::endl;
    swap(&x, &y);
    std::cout << "BECOME" << std::endl << *x << '\t' << *y << std::endl;
    return 0;
}