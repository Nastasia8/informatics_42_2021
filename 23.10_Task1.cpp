#include <iostream>
#include <cmath>


int prod(int a, int b){
    return a*b;
}
float delenie(int a, int b){
    return a/b;
}
int summ(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int step(int a,int b){
    return pow(a,b);
}

using namespace std;

int main(){
int a, b, num;
cout<<"1st number"<<endl; 
cin>>a;
cout<<"2nd number"<<endl; 
cin>>b;
cout<<"Number of operation"<<endl; 
cin>>num;
switch(num){
    case 1:
        cout<<a<<" + "<<b<<" = "<<summ(a,b)<<endl;
        break;
    case 2:
        cout<<a<<" - "<<b<<" = "<<sub(a,b)<<endl;
        break;
    case 3:
        cout<<a<<" * "<<b<<" = "<<prod(a,b)<<endl;
        break;
    case 4:
        cout<<a<<" / "<<b<<" = "<<delenie(a,b)<<endl;
        break;
    case 5:
        cout<<a<<" ^ "<<b<<" = "<<step(a,b)<<endl;
        break;
    default:
        cout<<"Число 1 - сложение, число 2 - вычитание, число 3 - умножение, число 4 - деление, число 5 - возведение в степень";
        break;
}
return 0;
}