#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    int a = 0;
    int b = 0;
    char operation;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите операцию: ";
    std::cin >> operation;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    switch (operation) {
    case '-':
        std::cout  << a - b << '\n';
        break;
    case '+':
        std::cout  << a + b << '\n';
        break;
    case '*':
        std::cout  << a * b << '\n';
        break;
    case '/':
        std::cout  << a / b << '\n';
        break;
    }
    return 0;
}
