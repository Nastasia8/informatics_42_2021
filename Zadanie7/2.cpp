#include <iostream>

using namespace std;

void draw(int hight, char sym, int index1, int index2, char space); // создаем прототип функции draw

int main() {
    int hight, index1, index2;
    char sym;
    char space = ' '; // пробел
    cout << "Enter height of triangle = ";
    cin >> hight; // вводим высоту треугольника
    cout << "Enter sym of triangle = ";
    cin >> sym; // вводим символ треугольника

    index1=0;
    index2=hight;

    draw(hight, sym, index1, index2, space); // вызываем функцию
}

void draw(int hight, char sym, int index1, int index2, char space) {

    // выводим треугольник 
    while (index1 <= hight) {
        cout << string(index1, sym) << endl;   // применяем функцию string для вывода sym index1 раз
        index1++; // увеличиваем индекс)
    }

    cout << endl;

    // выводим треугольник 
    while (index2 > 0) {
        cout << string(index2, sym) << endl;  // применяем функцию string для вывода sym index2 раз 
        index2--; // уменьшаем индекс
    }

    // используем цикл for для вывода треугольника с пробелом 
    for(int i = 0; i <= hight; i++) {
        cout<< string(hight-i, space); // применяем функцию string для выводов пробелов
        cout<< string(i, sym) << endl; // применяем функцию string для вывода sym i раз 
    }

    cout << endl;

    // используем цикл for для вывода треугольника с пробелом 
    for(int i = hight; i > 0; i--) {
        cout<< string(hight-i, space); // применяем функцию string для выводов пробелов
        cout<< string(i, sym) << endl; // применяем функцию string для вывода sym i раз
    }
    

}

// Разбирал задание с Александром Бутусовым, вроде понял)

