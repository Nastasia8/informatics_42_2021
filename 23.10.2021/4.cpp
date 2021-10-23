#include <iostream>
#include <cmath>

using namespace std;


void calc(int x, int y){
   int n = y-x+1;
   int sum = 0;
   for (int i = x; i<=y;i++){
       if(i%2 == 0) {
           sum+=i;
       }

   }
   cout <<"Summ = "<<sum<<endl;

}


int main(){
    int x,y;
    cin >> x>> y;
    calc(x,y);

   


}