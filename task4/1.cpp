#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

int product(int, int);
float division(int, int);

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a, b, num;
    cout<<"Введите первое число"<<endl;
    cin>>a;
    cout<<"Введите второе число"<<endl;
    cin>>b;
    cout<<"Введите номер операции: 1 - произведение, 2 - деление"<<endl;
    cout<<"Вы выбрали ";
    cin>>num;
    cout<<endl;
    switch(num) {
        case 1:
            cout <<"Результат = "<< product(a, b)<<endl;
                break;
        case 2 :
            cout<<"Результат = "<< division(a, b)<<endl;
            break;
        default:
            cout<<"Ошибка ввода, попробуйте ещё раз"<<endl;
             break;
            
    }

    return 0;
}

int product(int a, int b) {
    return a*b;
}

float division(int a, int b) {
    if  (b == 0) {
         cout<<"Ошибка. На 0 делить нельзя."<<endl;
        return 0;
    }

    return float(a)/b;
}