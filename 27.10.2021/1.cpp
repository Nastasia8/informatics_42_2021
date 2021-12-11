#include <iostream>
 
void increment(int*);
 
int main()
{
    int a = 10;
    int *ptr = &a;
    increment(ptr);
    std::cout << "Основная функция: " <<  a << std::endl;
    return 0;
}
void increment(int *x)
{
    int z = 6;
    x = &z;     // переустанавливаем адрес указателя x
    std::cout << "Функция приращения: " <<  *x << std::endl;
}