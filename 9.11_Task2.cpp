#include <iostream>
#include <cmath>

using namespace std;

void f (float a, float b){
    cout<<b<<", "<<a<<endl;
}

int main(){
float a, b;
cout<<"a = ";
cin>>a;
cout<<"b = ";
cin>>b;
f(a, b); 
    return 0;
}