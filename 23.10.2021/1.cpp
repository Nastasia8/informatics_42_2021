#include <iostream>
#include <cmath>

using namespace std;


void calc(int op,int x, int y){
   if(op=1) {
   
    cout <<"Summ = "<< x+y<<endl;
   } else if (op=2) {

    cout <<"Minus = "<< x-y<<endl;
    } else if (op=3){

    cout <<"Umn = "<< x*y<<endl;
    } else if (op=4){
    cout <<"Del = "<<x/y<<endl;
    } else if(op=5){
    cout <<"Vos = "<<pow(x,y)<<endl;
    }

}


int main(){

    int op,x,y;
    cout <<"1 - sum"<<endl;;
    cout <<"2 - minus"<<endl;
    cout <<"3 - umn"<<endl;
    cout <<"4 - del"<<endl;
    cout <<"5 - vos"<<endl;
    cout <<"Nomer operacii =";
    cin >> op >> x >> y;

    calc(op,x,y);








}