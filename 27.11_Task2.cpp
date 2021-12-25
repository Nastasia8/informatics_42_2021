#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

void Treugol1(int h, string s){
    for(int i=0; i<h; i++){
        cout<<s<<endl;
        s += s;
    }
}
void Treugol2(int h, string s){
    for(int i=h; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<s;
        }
    cout<<endl;
    }
}
void Treugol3(int h, string s){
    string newsymb = s;
    for(int i=h; i>0; i--){
        for(int j=0; j<i-1; j++){
            cout<<" ";
        }
    cout<<newsymb<<endl;
    newsymb += s;
    }
}
void Treugol4(int h, string s){
    string newsymb = " ";
    for(int i=h; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<s;
        }
    cout<<endl;
    cout<<newsymb;
    newsymb += " ";
    }
}


int main(){
SetConsoleOutputCP(1251);
int height;
cout<<"Enter height: ";
cin>>height;
string symbol;
cout<<"Enter symbol: ";
cin>>symbol;
Treugol1(height, symbol);
Treugol2(height, symbol);
Treugol3(height, symbol);
Treugol4(height, symbol);
    return 0;
}