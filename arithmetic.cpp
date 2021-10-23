#include <iostream>
#include <cmath>

using namespace std;


void score (int num,int x, int y){
   if(num=1) {

    cout <<"Summ = "<< x+y<<endl;
   } else if (num=2) {

    cout <<"Minus = "<< x-y<<endl;
    } else if (num=3){

    cout <<"Umn = "<< x*y<<endl;
    } else if (num=4){
    cout <<"Del = "<<x/y<<endl;
    } else if(num=5){
    cout <<"Vos = "<<pow(x,y)<<endl;
    }

}


int main(){

    int num,x,y;
    cout <<"1 - sum"<<endl;;
    cout <<"2 - minus"<<endl;
    cout <<"3 - umn"<<endl;
    cout <<"4 - del"<<endl;
    cout <<"5 - vos"<<endl;
    cout <<"num op = ";
    cin >> num >> x >> y;

    score(num,x,y);








} 