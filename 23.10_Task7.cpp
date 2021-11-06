#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Funk(int h, int w, char s){
    string M[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if((i>0)&&(i<h-1)&&(j>0)&&(j<w-1)){
                cout<<" ";
            }
            else{
                cout<<s;
            }
        }
        cout<<endl;
    }
}


int main(){
int heigth, width;
char symbol;
cout<<"Heigth: ";
cin>>heigth;
cout<<"Width: ";
cin>>width;
cout<<"symbol: ";
cin>>symbol;
Funk(heigth, width, symbol);
    return 0;
}