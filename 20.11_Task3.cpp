#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

float NOD(int x, int y){
    int ost = 0, result = 1;
    if(x > y){
        ost = x % y;
        result = x/y;
    }
    if(x <= y){
        ost = y % x;
        result = y/x;
    }
    while(ost != 0){
        result = result / ost;
        ost = result % ost;            
        }
    if(x<=y){
        if (result>x) return result;
        else return x;
    }
    else return y;
}


int main(){
SetConsoleOutputCP(1251);
int x, y;
cout<<"x = ";
cin>>x;
cout<<"y = ";
cin>>y;
cout<<"NOD("<<x<<","<<y<<") = "<<NOD(x,y)<<endl;

    return 0;
}