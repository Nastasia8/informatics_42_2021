#include <iostream>
using namespace std;
void draw(int HEIGHT,char summa,int index1,int index2,char space) {

    while(index1 <= HEIGHT){
        cout << string(index1, summa) << endl;   
        index1++;
    }
    cout<<endl;

    while(index2>0) {
        cout << string(index2, summa) << endl;   
        index2--;
    }
    for(int g = 0; g <= HEIGHT; g++) {
        cout<< string(HEIGHT-g, space);
        cout<< string(g, summa) << endl;
    }
    cout<<endl;

    for(int g = HEIGHT; g > 0; g--) {
        cout<< string(HEIGHT-g, space);
        cout<< string(g, summa) << endl;
    }
}
int main() {
    int HEIGHT, index1, index2;
    char summa;
    char space = ' ';
    cout << "Введите высоту треугольника = ";
    cin>>HEIGHT;
    cout << "Введите сумму чисел в треугольнике = ";
    cin>>summa;
    index1=0;
    index2=HEIGHT;
    
    draw(HEIGHT, summa, index1, index2, space);
}