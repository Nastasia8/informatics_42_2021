#include <iostream>
using namespace std;

long double factorial(int m){
    if(m < 0) 
        return 0; 
    if (m == 0) 
        return 1; 
    else 
        return m * factorial(m - 1); 
}
int main (){
    int n,summa = 0;
    cout << "Введите номер = ";
    cin >> n;
    for(int m = 1; m <= n; m++) {
        summa += -1 * m * ((5 - m)/factorial(m));
    }
    cout<<summa;
}