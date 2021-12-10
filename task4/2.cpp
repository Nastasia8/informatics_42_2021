#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

void deposit(int, int, int);

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

int P,n,choice;
    cout << "Введите P (Сумма вклада) и n (Срок депозита в годах)" << endl;
    cout << "P = ";
    cin >> P;
    cout << "n = ";
    cin >> n;

    cout <<"Выберите один из трёх вариантов периода начисления процентов."<<endl;
    cout <<"1) 3"<<endl;
    cout <<"2) 6"<<endl;
    cout <<"3) 12"<<endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout<<"Вы выбрали 1 вариант"<<endl;
            choice = 3;
            deposit(P,n,choice);
            break;
        case 2:
            cout<<"Вы выбрали 2 вариант"<<endl;
            choice = 6;
            deposit(P,n,choice);
            break;
        case 3:
            cout<<"Вы выбрали 3 вариант"<<endl;
            choice = 12;
            deposit(P,n,choice);
            break;
        default:
            cout<<"Этой операции не существует"<<endl;
            choice = 0;
            break;
    }


    return 0;
}

void deposit(int P, int n, int choice) {
    
    if (choice!=0){
    
    float m = choice;
    float I = 15;

    float S = (P * (pow((1 +((I/100) / (m/12))), (m / (12 * n)))));
    cout <<"Будущая стоимость = "<< S << endl;
    }
    
}