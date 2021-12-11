#include <iostream>
template <class A>
void swap(A* pervoe, A* vtoroe) {
    A amogUS = *pervoe;
    *pervoe = *vtoroe;
    *vtoroe = amogUS;
}
int main() {
    float* x = new float(7.77);
    float* y = new float(6.66);
    std::cout<<"Было"<<std::endl<<*x <<'\t'<<*y<<std::endl;
    swap(&x, &y);
    std::cout<<"Стало"<<std::endl<<*x <<'\t'<<*y<<std::endl;
}