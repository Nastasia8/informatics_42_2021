#include<iostream>

using namespace std;

int calc(int number);

int main(){
    int height = 0, i = 0, g = 0;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "1" << endl;;

    for (i = 1; i <= height; i++){
        for (g = 0; g <= i; g++){
            cout << (calc(i) / (calc(g) * calc(i - g))) << " ";
        }
    cout << endl;
    }

    return 0;
}

int calc(int n){

    int i = 0, x = 1;

    for (i = 1;i <= n;i++){
        x *= i;
    }

return x;
}