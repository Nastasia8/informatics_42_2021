#include <iostream>

using namespace std;

void draw(int hight, char sym, int index1, int index2, char space) {

    while (index1 <= hight) {
        cout << string(index1, sym) << endl;   
        index1++;
    }

    cout << endl;

    while (index2 > 0) {
        cout << string(index2, sym) << endl;   
        index2--;
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
    int hight, index1, index2;
    char sym;
    char space = ' ';
    cout << "Enter height of triangle = ";
    cin >> hight;
    cout << "Enter sym of triangle = ";
    cin >> sym;

    index1=0;
    index2=hight;

    draw(hight, sym, index1, index2, space);
}