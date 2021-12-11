#include <iostream>

using namespace std;

//функция для проверки сводимости числа к одному
void svodimost(int num) {
    while(num > 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num *= 3;
            num += 1;
            num /= 2;
        }
        cout << num << endl;
    }
}

int main () {
    int num;

    cin >> num;

    svodimost(num);

system("pause");
return 0;
}