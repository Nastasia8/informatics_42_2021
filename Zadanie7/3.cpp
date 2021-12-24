#include <iostream>

using namespace std;

void function (int number); // создаем прототип

int main () {
    int numb;
    cin >> numb; // вводим число
    function(numb); // используем функцию

}

void function (int numb) {
    while(numb > 1) {
        if (numb % 2 == 0) {
            numb = numb / 2;
        } else {
            numb = numb * 3;
            numb = numb + 1;
            numb = numb / 2;
        }
        cout << numb << endl;
    }
}

// Сделал с помощью Бутусова Александра