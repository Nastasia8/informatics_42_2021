#include<iostream>

using namespace std;

float factorial(int k);

int main(){
    int n = 0, sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    for(int k = 1; k <= n; k++) {
        sum += (-1 * k * ((5 - k)) / factorial(k));
    }
    cout << sum;

    return 0;
}

float factorial(int k) {
    if(k < 0) 
        return 0; 
    if (k == 0) 
        return 1; 
    else 
        return k * factorial(k - 1); 
}