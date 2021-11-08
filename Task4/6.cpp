#include <iostream>
#include <cmath>

using namespace std;

void answer(int number);

int main(){

    int number = 0; 

    cout << "Enter number: ";
    cin >> number;

    answer(number);

    return 0;
}

void answer (int number){

    int answer = 1;

    // Просто захотелось сделать статус обработки, чтобы пользователь понял, что ввёл верное число
    if (number > 99999 && number < 1000000){

        cout << "Calculated, wait..."<< endl;

    }

    else {

        cout << "Invalid value" << endl;

        exit(0);

    }

    while (number > 0){

        answer *= (number % 10);

        number /= 10;

    }

    cout << "Answer: " << answer << endl;

}