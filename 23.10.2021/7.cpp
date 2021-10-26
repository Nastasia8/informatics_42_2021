#include <iostream>
#include <cmath>
using namespace std;


void draw(int h, int a, char summa){
    for (int i=0;i<h;i++){
        if(i==0){
            for(int i=0;i<a;i++){
                cout<<summa;
            }
            cout<<endl;
        }
        else if (i == h-1){
            for(int i =0;i<a;i++){
                cout<<summa;
            }
            cout<<endl;
        }
        else if ((i !=0) && (i!= h-1)){
            cout<<summa;
            for(int i=0; i< a-2;i++){
                cout<<" ";
            }
            cout<<summa<<endl;
        }
    }
}

int main(){
    int h,a;
    char summa;
    cin >> h >> a >>summa;

    draw(h,a,summa);

}