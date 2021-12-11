#include <iostream>

using namespace std;

//функция для отрисовки треугольника с заданными параметрами и с заданным символом:
void draw(int hight, char sym, int l1, int l2, char space) {

    while (l1 <= hight) {
        cout << string(l1, sym) << endl;
        l1++;
    }

    cout << endl;

    while (l2 > 0) {
        cout << string(l2, sym) << endl;
        l2--;
    }

    for(int i = 0; i <= hight; i++) {
        cout<< string(hight-i, space);
        cout<< string(i, sym) << endl;
    }

    cout << endl;

    for(int i = hight; i > 0; i--) {
        cout<< string(hight-i, space);
        cout<< string(i, sym) << endl;
    }

}

int main() {
    int hight, l1, l2;
    char sym;
    char space = ' ';
    cout << "Enter height of treygol = ";
    cin >> hight;
    cout << "Enter sym of treygol = ";
    cin >> sym;

    l1=0;
    l2=hight;

    draw(hight, sym, l1, l2, space);

system("pause");
return 0;
}