#include <iostream>
#include <cmath>

using namespace std;

void calc(int n) {
    int proizv = 1;
    while (n>0) {
        proizv = n % 10;
        n /= 10;
    }
    cout<<proizv;
}
int main(){
    long n;
    cin>>n;
    while (n<pow(10,5) || n>pow(10,6)) {
        cout<<"Число выходит за рамки"<<endl;
        cin >>n;
    }
    calc(n);
}